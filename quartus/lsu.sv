module lsu(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_lsu_wren,
    input logic [31:0]  i_lsu_addr,
    input logic [31:0]  i_st_data,
    input logic [31:0]  i_instr,

    input logic [3:0]   i_io_btn,
    input logic [31:0]  i_io_sw,

    output logic [6:0]  o_io_hex0,
    output logic [6:0]  o_io_hex1,
    output logic [6:0]  o_io_hex2,
    output logic [6:0]  o_io_hex3,
    output logic [6:0]  o_io_hex4,
    output logic [6:0]  o_io_hex5,
    output logic [6:0]  o_io_hex6,
    output logic [6:0]  o_io_hex7,
    
    output logic [31:0] o_ld_data,
    output logic [31:0] o_io_ledr,
    output logic [31:0] o_io_ledg,
    output logic [31:0] o_io_lcd
);

logic [31:0] r_input_data, r_output_data, r_dmem_data;

always_comb begin : proc_lsu
    if (~(|(i_lsu_addr[15:12] ^ 4'h2))) begin // dmem_buffer
        o_ld_data = r_dmem_data;
    end else if(~(|(i_lsu_addr[15:8] ^ 8'h78))) begin // input buffer
        o_ld_data = r_input_data;
    end else if(~(|(i_lsu_addr[15:8] ^ 8'h70))) begin // output buffer
        o_ld_data = r_output_data;
    end else begin
        o_ld_data = 32'hz;
    end
end

input_buf input_buf(
    .i_func3            (i_instr[14:12]),
    .i_lsu_addr         (i_lsu_addr),
    .i_io_sw            (i_io_sw),
    .i_io_btn           (i_io_btn),
    .o_input_buf_data   (r_input_data)
);

output_buf output_buf(
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_lsu_wren         (i_lsu_wren),
    .i_func3            (i_instr[14:12]),
    .i_lsu_addr         (i_lsu_addr),
    .i_output_buf_data  (i_st_data),
    .o_output_buf_data  (r_output_data),
    .o_io_ledr          (o_io_ledr),
    .o_io_ledg          (o_io_ledg),
    .o_io_hex0          (o_io_hex0),
    .o_io_hex1          (o_io_hex1),
    .o_io_hex2          (o_io_hex2),
    .o_io_hex3          (o_io_hex3),
    .o_io_hex4          (o_io_hex4),
    .o_io_hex5          (o_io_hex5),
    .o_io_hex6          (o_io_hex6),
    .o_io_hex7          (o_io_hex7),
    .o_io_lcd           (o_io_lcd )
);

data_mem dmem(
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_lsu_wren         (i_lsu_wren),
    .i_func3            (i_instr[14:12]),
    .i_lsu_addr         (i_lsu_addr),
    .i_st_data          (i_st_data),
    .o_dmem_data        (r_dmem_data)
);

endmodule
