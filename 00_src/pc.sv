module pc(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic [31:0]  i_pc_next,

    input logic         i_pc_en,

    output logic [31:0] o_pc
);

always_ff @( posedge i_clk or negedge i_rst_n ) begin : clock_pc
    if(~i_rst_n) begin
        o_pc = 32'd0;
    end else if(~i_pc_en) begin
        o_pc = 32'd0;
    end else begin
        o_pc = i_pc_next;
    end
end

endmodule
