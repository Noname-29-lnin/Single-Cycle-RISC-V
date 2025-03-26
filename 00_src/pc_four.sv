module pc_four(
    input logic [31:0]  i_pc_next,
    output logic [31:0] o_pc_four
);

assign o_pc_four = i_pc_next + 32'd4;

endmodule
