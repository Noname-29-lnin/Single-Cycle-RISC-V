`timescale 1ns/1ps
module brc_tb;
    logic [31:0] rs1, rs2;
    logic br_un;
    logic equal, less;
    int correct_count = 0;
    int total_tests = 100;
    int i;

    brc uut(
        .i_br_un        (br_un), // 0 sign , 1 unsign
        .i_rs1_data     (rs1),
        .i_rs2_data     (rs2),
        .o_brc_less     (less),
        .o_brc_equal    (equal) 
    );

    initial begin
        $dumpfile("brc_wave.vcd");
        $dumpvars(0, brc_tb);
    end

    task run_test(input logic mode);
        int temp_test = 0;
        br_un = mode;
        for (i = 0; i < total_tests/2; i++) begin    
            rs1 = $random % 4;
            rs2 = $random % 4;
            #10;
            if ((equal === (rs1 == rs2)) || (less === (mode ? (rs1 < rs2) : ($signed(rs1) < $signed(rs2))))) begin
                correct_count = correct_count + 1;
                temp_test = 1;
            end
            $display("Mode = %b, rs1 = %d, rs2 = %d, equal = %b, less = %b, test = %s", br_un, rs1, rs2, equal, less, temp_test ? "PASS" : "FAIL");
            temp_test = 0;
        end
    endtask

    initial begin
        run_test(1'b0); // Test signed comparison
        run_test(1'b1); // Test unsigned comparison
        $display("Total correct comparisons: %d / %d", correct_count, total_tests);
        $finish;
    end
endmodule
