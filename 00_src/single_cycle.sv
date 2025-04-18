module single_cycle(
	input logic 			i_clk,
	input logic 			i_rst_n,
	input logic [31:0]		i_io_sw,
	input logic [31:0]		i_io_btn,
	output logic 			o_insn_vld,
	output logic [31:0]		o_pc_debug,
	output logic [31:0] 	o_io_ledr,
	output logic [31:0] 	o_io_ledg,
	output logic [31:0] 	o_io_lcd,
	output logic [6:0]		o_io_hex0,
	output logic [6:0]		o_io_hex1,
	output logic [6:0]		o_io_hex2,
	output logic [6:0]		o_io_hex3,
	output logic [6:0]		o_io_hex4,
	output logic [6:0]		o_io_hex5,
	output logic [6:0]		o_io_hex6,
output logic [6:0]		o_io_hex7
);

alu alu(\);

endmodule
