module alu_carry_lookahead_32bit_unit(
    input  wire        i_c0,
    input  wire [31:0] i_p,
    input  wire [31:0] i_g,
    output wire [31:0] o_c,   // C[0] = C1, C[31] = C32
    output wire        o_c32, // Carry out cuối cùng
    output wire        o_p,   // Propagate tổng thể
    output wire        o_g    // Generate tổng thể
);

    assign o_c[0] = i_g[0] | (i_p[0] & i_c0);

    genvar i;
    generate
        for(i = 1; i < 32; i = i + 1) begin : gen_carry
            assign o_c[i] = i_g[i] | (i_p[i] & o_c[i-1]);
        end
    endgenerate

    assign o_c32 = o_c[31];
    assign o_p = &i_p; // Tất cả các bits đều propagate
    
    // Tính toán Generate tổng thể theo cách đệ quy
    wire [31:0] g_level [5:0]; // Các mức cho tính toán tree
    wire [31:0] p_level [5:0];
    
    // Khởi tạo level 0
    assign g_level[0] = i_g;
    assign p_level[0] = i_p;
    
    // Tính toán theo cây nhị phân
    genvar k;
    generate
        for(k = 0; k < 5; k = k + 1) begin : gen_tree
            for(i = 0; i < 32/(1 << (k+1)); i = i + 1) begin : gen_level
                assign p_level[k+1][i] = p_level[k][2*i+1] & p_level[k][2*i];
                assign g_level[k+1][i] = g_level[k][2*i+1] | (p_level[k][2*i+1] & g_level[k][2*i]);
            end
        end
    endgenerate
    
    assign o_g = g_level[5][0]; // Kết quả cuối cùng

endmodule
module full_adder_cla(
    input  wire i_a,
    input  wire i_b,
    input  wire i_c,
    output wire o_s,
    output wire o_p,
    output wire o_g
);
    assign o_g = i_a & i_b;
    assign o_p = i_a ^ i_b;
    assign o_s = o_p ^ i_c;
endmodule
