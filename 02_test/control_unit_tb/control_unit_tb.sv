`timescale 1ns/1ps
module control_unit_tb;

    // Khai báo tín hiệu
    logic         i_brc_less, i_brc_equal;
    logic [31:0]  i_instr;
    logic         o_pc_sel, o_rd_wren, o_insn_vld, o_br_un;
    logic         o_opa_sel, o_opb_sel, o_mem_wren;
    logic [1:0]   o_wb_sel;
    logic [3:0]   o_alu_op;

    // Kết nối với DUT
    control_unit uut (
        .i_brc_less (i_brc_less),
        .i_brc_equal (i_brc_equal),
        .i_instr (i_instr),
        .o_pc_sel (o_pc_sel),
        .o_rd_wren (o_rd_wren),
        .o_insn_vld (o_insn_vld),
        .o_br_un (o_br_un),
        .o_opa_sel (o_opa_sel),
        .o_opb_sel (o_opb_sel),
        .o_mem_wren (o_mem_wren),
        .o_wb_sel (o_wb_sel),
        .o_alu_op (o_alu_op)
    );

    initial begin
        $dumpfile("control_unit_wave.vcd");
        $dumpvars(0, control_unit_tb);
    end

    // Testbench
    initial begin
        // Kiểm tra lệnh LOAD (ví dụ: LW)
        i_instr = 32'b00000000000000000000000000000011;  // Giả định opcode Load
        i_brc_less = 0;
        i_brc_equal = 0;
        #10;
        $display("LOAD: o_rd_wren = %b, o_mem_wren = %b, o_alu_op = %b", o_rd_wren, o_mem_wren, o_alu_op);

        // Kiểm tra lệnh STORE (ví dụ: SW)
        i_instr = 32'b00000000000000000000000000100011;  // Giả định opcode Store
        #10;
        $display("STORE: o_rd_wren = %b, o_mem_wren = %b, o_alu_op = %b", o_rd_wren, o_mem_wren, o_alu_op);

        // Kiểm tra lệnh BRANCH khi điều kiện đúng
        i_instr = 32'b00000000000000000000000011000011;  // Giả định opcode Branch
        i_brc_equal = 1;  // Giả sử nhánh xảy ra
        #10;
        $display("BRANCH (taken): o_pc_sel = %b", o_pc_sel);

        // Kiểm tra lệnh BRANCH khi điều kiện sai
        i_brc_equal = 0;
        #10;
        $display("BRANCH (not taken): o_pc_sel = %b", o_pc_sel);

        // Kiểm tra lệnh ALU (ví dụ: ADD)
        i_instr = 32'b00000000000000000000000000110011;  // Giả định opcode R-type
        #10;
        $display("ALU (ADD): o_alu_op = %b", o_alu_op);

        // Kết thúc mô phỏng
        $finish;
    end

endmodule
