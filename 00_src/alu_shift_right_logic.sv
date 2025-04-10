module alu_shift_right_logic(
    input logic [31:0]  i_a,
    input logic [31:0]  i_b,
    output logic [31:0] o_srl
);

    logic [31:0] stage0, stage1, stage2, stage3;
always_comb begin
    stage0 = i_b[0] ? {1'b0, i_a[31:1]} : i_a;
    stage1 = i_b[1] ? {2'b0, stage0[31:2]} : stage0;
    stage2 = i_b[2] ? {4'b0, stage1[31:4]} : stage1;
    stage3 = i_b[3] ? {8'b0, stage2[31:8]} : stage2;
    o_srl = i_b[4] ? {16'b0, stage3[31:16]} : stage3;
end 

endmodule

