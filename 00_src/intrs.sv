module instr(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic [31:0]  i_pc,

    output logic [31:0] o_intrs
);

localparam D_MEM = 2048;
logic [3:0][7:0] r_instr [D_MEM - 1 : 0];

initial begin
    $readmemh("../test/code.mem", r_instr);
end

assign o_intrs = r_instr[i_pc[12:2]];

endmodule
