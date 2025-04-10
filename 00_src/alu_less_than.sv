module alu_less_than(
    input logic [31:0]      i_a,
    input logic [31:0]      i_b,
    input logic             sign,   // 1: unsign, 0 sign
    output logic [31:0]     o_lt
);

parameter logic signned     = 1'b0;
parameter logic unsignned   = 1'b1;

wire [31:0] w_slt, w_sltu;

signned_less_than SLT(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_slt      (w_slt)
);

unsignned_less_than SLTU(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_sltu     (w_sltu)
);

always_comb begin
    case(sign)
        signned: begin
            o_lt = w_slt; 
        end 
        unsignned: begin
            o_lt = w_sltu;
        end
    endcase
end 

endmodule

module signned_less_than(
    input logic [31:0]  i_a,
    input logic [31:0]  i_b,
    output logic [31:0] o_slt
);

assign o_slt = (i_a < i_b) ? 32'd1 : 32'd0;

endmodule

module unsignned_less_than(
    input logic [31:0]  i_a,
    input logic [31:0]  i_b,
    output logic [31:0] o_sltu
);

assign o_sltu = (i_a < i_b) ? 32'd1 : 32'd0;

endmodule
