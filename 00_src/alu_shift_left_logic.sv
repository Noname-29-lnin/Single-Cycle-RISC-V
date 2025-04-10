module alu_shift_left_logic(
    input logic [31:0]      i_a,
    input logic [31:0]      i_b,
    output logic [31:0]     o_sll
);

logic [31:0] stage0, stage1, stage2, stage3;
always_comb begin
    stage0 = i_b[0] ? {i_a[31:0], 1'b0} : i_a;
    stage1 = i_b[1] ? {stage0[29:0], 2'b0} : stage0;
    stage2 = i_b[2] ? {stage1[27:0], 4'b0} : stage1;
    stage3 = i_b[3] ? {stage2[23:0], 8'b0} : stage2;
    o_sll  = i_b[4] ? {stage3[15:0], 16'b0} : stage3;
end
endmodule
