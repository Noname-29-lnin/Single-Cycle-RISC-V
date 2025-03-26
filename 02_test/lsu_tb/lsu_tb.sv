`timescale 1ns/1ps
module lsu_tb;

    logic clk, rst_n;
    logic lsu_wren;
    logic [31:0] i_lsu_addr, i_st_data, i_instr, i_io_sw;
    logic [3:0] i_io_btn;
    logic [6:0] o_io_hex0, o_io_hex1, o_io_hex2, o_io_hex3, o_io_hex4, o_io_hex5, o_io_hex6, o_io_hex7;
    logic [31:0] o_ld_data, o_io_ledr, o_io_ledg, o_io_lcd;

    // Khởi tạo module DUT (Device Under Test)
    lsu uut(
        .i_clk       (clk         ),
        .i_rst_n     (rst_n       ),
        .i_lsu_wren  (lsu_wren    ),
        .i_lsu_addr  (i_lsu_addr  ),
        .i_st_data   (i_st_data   ),
        .i_instr     (i_instr     ),
        .i_io_btn    (i_io_btn    ),
        .i_io_sw     (i_io_sw     ),
        .o_io_hex0   (o_io_hex0   ),
        .o_io_hex1   (o_io_hex1   ),
        .o_io_hex2   (o_io_hex2   ),
        .o_io_hex3   (o_io_hex3   ),
        .o_io_hex4   (o_io_hex4   ),
        .o_io_hex5   (o_io_hex5   ),
        .o_io_hex6   (o_io_hex6   ),
        .o_io_hex7   (o_io_hex7   ),
        .o_ld_data   (o_ld_data   ),
        .o_io_ledr   (o_io_ledr   ),
        .o_io_ledg   (o_io_ledg   ),
        .o_io_lcd    (o_io_lcd    )
    );

    // Tạo clock (xung nhịp 10ns)
    always #5 clk = ~clk;

    initial begin
        $dumpfile("lsu_wave.vcd");
        $dumpvars(0, lsu_tb);
    end

    initial begin
        // Reset hệ thống
        clk     = 0;
        rst_n   = 0;
        lsu_wren = 0;
        i_lsu_addr = 0;
        i_st_data  = 0;
        i_instr    = 0;
        i_io_sw    = 0;
        i_io_btn   = 0;
        
        #20 rst_n = 1; // Bỏ reset sau 20ns

        // Kiểm tra store vào dmem
        #10 lsu_wren = 1;
        i_lsu_addr  = 32'h2000; // Địa chỉ trong dmem
        i_st_data   = 32'h2909;
        #10 lsu_wren = 0; // Dừng ghi

        // Kiểm tra load từ dmem
        #10 i_lsu_addr = 32'h2000;
        #10;
        $display("LOAD/STORE: %s", o_ld_data == 32'h2909 ? "PASS" : "FAIL");

        // Kiểm tra đọc i_io_sw (0x7800 - 0x780F)
        #10 i_io_sw = 32'h12345678;
        i_lsu_addr = 32'h7800;
        #10 ;
        $display("SW: %s", o_ld_data == 32'h12345678 ? "PASS" : "FAIL");

        // Kiểm tra đọc i_io_btn (0x7810 - 0x781F)
        #10 i_io_btn = 4'b1010;
        i_lsu_addr = 32'h7810;
        #10;
        $display("BTN: %s", o_ld_data[3:0] == 4'b1010 ? "PASS" : "FAIL");

        // Kiểm tra ghi vào HEX display (0x7020 - 0x7027)
        #10 lsu_wren = 1;
        i_lsu_addr = 32'h7020;
        i_st_data  = 32'h0F0F0F0F;
        #10 lsu_wren = 0;
        #10;
        $display("HEX DISPLAY: %s", (o_io_hex0 == 7'h0F && o_io_hex1 == 7'h0F) ? "PASS" : "FAIL");

        // Kiểm tra ghi vào LEDG (0x7010 - 0x701F)
        #10 lsu_wren = 1;
        i_lsu_addr = 32'h7010;
        i_st_data  = 32'h55AA55AA;
        #10 lsu_wren = 0;
        #10;
        $display("LEDG: %s", o_io_ledg == 32'h55AA55AA ? "PASS" : "FAIL");

        // Kiểm tra ghi vào LEDR (0x7000 - 0x700F)
        #10 lsu_wren = 1;
        i_lsu_addr = 32'h7000;
        i_st_data  = 32'hFF00FF00;
        #10 lsu_wren = 0;
        #10;
        $display("LEDR: %s", o_io_ledr == 32'hFF00FF00 ? "PASS" : "FAIL");

        // Kiểm tra ghi vào LCD (0x7030 - 0x703F)
        #10 lsu_wren = 1;
        i_lsu_addr = 32'h7030;
        i_st_data  = 32'hCAFEBABE;
        #10 lsu_wren = 0;
        #10;
        $display("LCD: %s", o_io_lcd == 32'hCAFEBABE ? "PASS" : "FAIL");

        // Kết thúc mô phỏng
        #20;
        $finish;
    end

endmodule
