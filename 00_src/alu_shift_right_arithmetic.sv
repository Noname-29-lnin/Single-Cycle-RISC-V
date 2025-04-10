module alu_shift_right_arithmetic(
    input logic [31:0]  i_a,
    input logic [31:0]  i_b,
    output logic [31:0] o_sra
);

    logic [31:0] stage0, stage1, stage2, stage3;
    logic msb = i_a[31];
always_comb begin 
    stage0 = i_b[0] ? {{1{msb}}, i_a[31:1]} : i_a;
    stage1 = i_b[1] ? {{2{msb}}, stage0[31:2]} : stage0;
    stage2 = i_b[2] ? {{4{msb}}, stage1[31:4]} : stage1;
    stage3 = i_b[3] ? {{8{msb}}, stage2[31:8]} : stage2;
    o_sra  = i_b[4] ? {{16{msb}}, stage3[31:16]} : stage3;
end 
endmodule
