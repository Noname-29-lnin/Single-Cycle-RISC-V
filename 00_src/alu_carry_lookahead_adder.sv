module alu_carry_lookahead_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);

    wire [31:0] g, p;    // generate và propagate
    wire [31:0] c;       // carry
    wire        c32, P, G;

    // Sinh tín hiệu G, P và tính tổng từng bit
    genvar i;
    generate
        for(i = 0; i < 32; i = i + 1) begin : gen_fulladder
            full_adder_cla FA (
                .i_a(i_a[i]),
                .i_b(i_b[i]),
                .i_c((i == 0) ? 1'b0 : c[i-1]),
                .o_s(o_sum[i]),
                .o_p(p[i]),
                .o_g(g[i])
            );
        end
    endgenerate

    // Tính toàn bộ carry bits
    carry_lookahead_32bit_unit CLA32 (
        .i_c0(1'b0),
        .i_p(p),
        .i_g(g),
        .o_c(c),
        .o_c32(c32),
        .o_p(P),
        .o_g(G)
    );

endmodule

