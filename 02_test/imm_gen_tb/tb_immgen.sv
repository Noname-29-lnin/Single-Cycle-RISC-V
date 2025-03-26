`timescale 1ns/1ps
module tb_immgen;

    // Testbench signals
    logic [31:0] i_instr;   // Input instruction
    logic [31:0] o_immgen;  // Output immediate value

    // Instantiate DUT (Device Under Test)
    immgen uut (
        .i_instr(i_instr),
        .o_immgen(o_immgen)
    );

    // Task to display results
    task check_result(input string test_name, input [31:0] expected);
        if (o_immgen === expected) begin
            $display("[%s] PASS: o_immgen = %0d (Expected = %0d)", test_name, o_immgen, expected);
        end else begin
            $display("[%s] FAIL: o_immgen = %0d (Expected = %0d)", test_name, o_immgen, expected);
        end
    endtask

    // Stimulus and checks
    initial begin
        $dumpfile("tb_immgen.vcd");
        $dumpvars(0, tb_immgen);

        // Test R-type (No Immediate)
        i_instr = 32'h00000033;  // Example R-type instruction
        #10;
        check_result("R-Type Test", 32'b0);

        // Test I-type (ADDI, LW, JALR)
        i_instr = 32'hFE320493;  // ADDI x9, x4, -29
        #10;
        check_result("I-Type Test", -29);

        i_instr = 32'h0294A203; // LW x4, 0x29(x9)
        #10;
        check_result("L-Type Test", 41);

        // Test S-type (SW, SH, SB)
        i_instr = 32'h00922EA3;  // sw x9, 29(x4)
        #10;
        check_result("S-Type Test", 29);

        // Test SB-type (BEQ, BNE, BLT, BGE, BLTU, BGEU)
        i_instr = 32'hFE4481E3;  // beq x9, x4, -30
        #10;
        check_result("SB-Type Test", -30);

        // Test U-type (LUI, AUIPC)
        i_instr = 32'h02909037;  // LUI x0, 0x2909
        #10;
        check_result("U-Type Test", 32'h02909000); // Correct expected value

        // Test UJ-type (JAL)
        i_instr = 32'h0280026F;  // JAL x0, 0x29
        #10;
        check_result("UJ-Type Test", {{13{1'b0}}, 10'b100110111, 1'b0, 8'b00000000});

        // Test IJ-type (JALR)
        i_instr = 32'h029204E7;  // JALR x9, x4, 29
        #10;
        check_result("IJ-Type Test", 41);

        $finish;
    end

endmodule
