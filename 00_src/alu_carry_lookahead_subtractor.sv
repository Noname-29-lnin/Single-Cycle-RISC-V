module alu_carry_lookahead_subtractor(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_diff
);

    wire [31:0] g, p;     // generate và propagate
    wire [31:0] c;        // carry
    wire        c32, P, G;
    wire [31:0] b_invert; // ~i_b

    assign b_invert = ~i_b;

    genvar i;
    generate
        for(i = 0; i < 32; i = i + 1) begin : gen_fullsub
            full_adder_cla FA (
                .i_a(i_a[i]),
                .i_b(b_invert[i]),
                .i_c((i == 0) ? 1'b1 : c[i-1]), // Carry-in ban đầu là 1
                .o_s(o_diff[i]),
                .o_p(p[i]),
                .o_g(g[i])
            );
        end
    endgenerate

    carry_lookahead_32bit_unit CLA32 (
        .i_c0(1'b1),   // Carry-in khởi tạo là 1
        .i_p(p),
        .i_g(g),
        .o_c(c),
        .o_c32(c32),
        .o_p(P),
        .o_g(G)
    );

endmodule
