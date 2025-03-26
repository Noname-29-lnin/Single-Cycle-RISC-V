module regfile(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_rd_wren,

    input logic [4:0]   i_rs1_addr,
    input logic [4:0]   i_rs2_addr,
    input logic [4:0]   i_rd_addr,
    input logic [31:0]  i_rd_data,

    output logic [31:0] o_rs1_data,
    output logic [31:0] o_rs2_data
);
integer i = 0;
logic [31:0] r_reg [31:0];

always_ff @( posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        for (i = 0; i < 32 ; i++) begin
            r_reg[i] <= 32'b0;
        end
    end else begin
        if(i_rd_wren & (|i_rd_addr)) begin
            r_reg[i_rd_addr] <= i_rd_data;
        end else begin
            r_reg[0] <= 32'b0;
        end
    end
end

assign o_rs1_data = (|i_rs1_addr) ? r_reg[i_rs1_addr] : 32'b0;
assign o_rs2_data = (|i_rs2_addr) ? r_reg[i_rs2_addr] : 32'b0;

endmodule
