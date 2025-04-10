// `timescale 1ns/1ps
// module alu(
//     input logic [31:0]  i_operand_a,
//     input logic [31:0]  i_operand_b,
//     input logic [3:0]   i_alu_op,
//     output logic [31:0] o_alu_data
// );
//
// typedef enum logic [3:0] { 
//     OP_ADD  = 4'b0000,
//     OP_SUB  = 4'b0001,
//     OP_SLT  = 4'b0010,
//     OP_SLTU = 4'b0011,
//     OP_XOR  = 4'b0100,
//     OP_OR   = 4'b0101,
//     OP_AND  = 4'b0110,
//     OP_SLL  = 4'b0111,
//     OP_SRL  = 4'b1000,
//     OP_SRA  = 4'b1001
// } alu_op_t;
//
// function automatic [31:0] sll_func(input [31:0] i_data, input [4:0] i_shift_amount);
//     logic [31:0] stage0, stage1, stage2, stage3, stage4;
//     
//     stage0 = i_shift_amount[0] ? {i_data[30:0], 1'b0} : i_data;
//     stage1 = i_shift_amount[1] ? {stage0[29:0], 2'b0} : stage0;
//     stage2 = i_shift_amount[2] ? {stage1[27:0], 4'b0} : stage1;
//     stage3 = i_shift_amount[3] ? {stage2[23:0], 8'b0} : stage2;
//     stage4 = i_shift_amount[4] ? {stage3[15:0], 16'b0} : stage3;
//     
//     return stage4;
// endfunction
//
// function automatic [31:0] srl_func(input [31:0] i_data, input [4:0] i_shift_amount);
//     logic [31:0] stage0, stage1, stage2, stage3, stage4;
//     
//     stage0 = i_shift_amount[0] ? {1'b0, i_data[31:1]} : i_data;
//     stage1 = i_shift_amount[1] ? {2'b0, stage0[31:2]} : stage0;
//     stage2 = i_shift_amount[2] ? {4'b0, stage1[31:4]} : stage1;
//     stage3 = i_shift_amount[3] ? {8'b0, stage2[31:8]} : stage2;
//     stage4 = i_shift_amount[4] ? {16'b0, stage3[31:16]} : stage3;
//     
//     return stage4;
// endfunction
//
// function automatic [31:0] sra_func(input [31:0] i_data, input [4:0] i_shift_amount);
//     logic [31:0] stage0, stage1, stage2, stage3, stage4;
//     logic msb = i_data[31];
//     
//     stage0 = i_shift_amount[0] ? {{1{msb}}, i_data[31:1]} : i_data;
//     stage1 = i_shift_amount[1] ? {{2{msb}}, stage0[31:2]} : stage0;
//     stage2 = i_shift_amount[2] ? {{4{msb}}, stage1[31:4]} : stage1;
//     stage3 = i_shift_amount[3] ? {{8{msb}}, stage2[31:8]} : stage2;
//     stage4 = i_shift_amount[4] ? {{16{msb}}, stage3[31:16]} : stage3;
//     
//     return stage4;
// endfunction
//
// logic [32:0] temp;
// assign temp = {1'b0,i_operand_a} + (~({1'b0,i_operand_b}) + 32'b1);
//
// always_comb begin
//     case (i_alu_op)
//         OP_ADD:  o_alu_data = i_operand_a + i_operand_b;
//         OP_SUB:  o_alu_data = temp[31:0];
//         OP_SLT: begin
//             if (i_operand_a[31] ^ i_operand_b[31]) 
//                 o_alu_data = {31'b0, i_operand_a[31]};
//             else
//                 o_alu_data = {31'b0, temp[31]};
//         end
//         OP_SLTU: o_alu_data = {31'b0, temp[32]};
//         OP_XOR:  o_alu_data = i_operand_a ^ i_operand_b;
//         OP_OR:   o_alu_data = i_operand_a | i_operand_b;
//         OP_AND:  o_alu_data = i_operand_a & i_operand_b;
//         OP_SLL:  o_alu_data = sll_func(i_operand_a, i_operand_b[4:0]);
//         OP_SRL:  o_alu_data = srl_func(i_operand_a, i_operand_b[4:0]);
//         OP_SRA:  o_alu_data = sra_func(i_operand_a, i_operand_b[4:0]);
//         default: o_alu_data = '0;
//     endcase
// end
//
// endmodule
//


`timescale 1ns/1ps
module alu(
    input logic [31:0]  i_operand_a,
    input logic [31:0]  i_operand_b,
    input logic [3:0]   i_alu_op,
    output logic [31:0] o_alu_data
);

parameter logic [3:0] OP_ADD  = 4'b0000;
parameter logic [3:0] OP_SUB  = 4'b0001;
parameter logic [3:0] OP_SLT  = 4'b0010;
parameter logic [3:0] OP_SLTU = 4'b0011;
parameter logic [3:0] OP_XOR  = 4'b0100;
parameter logic [3:0] OP_OR   = 4'b0101;
parameter logic [3:0] OP_AND  = 4'b0110;
parameter logic [3:0] OP_SLL  = 4'b0111;
parameter logic [3:0] OP_SRL  = 4'b1000;
parameter logic [3:0] OP_SRA  = 4'b1001;
parameter logic [3:0] OP_OP_B = 4'b1010;

wire [31:0] w_op_add;
alu_carry_lookahead_adder CLA(
    .i_a        (i_operand_a),
    .i_b        (i_operand_b),
    .o_sum      (w_op_add)
);

wire [31:0] w_op_sub;
alu_carry_lookahead_subtractor CLS(
    .i_a        (i_operand_a),
    .i_b        (i_operand_b),
    .o_diff     (w_op_sub)
);

wire [31:0] w_op_slt, w_op_sltu;
alu_less_than SLT(
    .i_a        (i_a),
    .i_b        (i_b),
    .sign       (1'b0),   // 1: unsign, 0 sign
    .o_lt       (w_op_slt)
);
alu_less_than SLTU(
    .i_a        (i_a),
    .i_b        (i_b),
    .sign       (1'b1),   // 1: unsign, 0 sign
    .o_lt       (w_op_sltu)
);

wire [31:0] w_op_sll, w_op_srl, w_op_sra;
alu_shift_left_logic SLL(
    .i_a        (i_operand_a),
    .i_b        (i_operand_b),
    .o_sll      (w_op_sll)
);
alu_shift_right_logic SLR(
    .i_a        (i_operand_a),
    .i_b        (i_operand_b),
    .o_srl      (w_op_srl)
);
alu_shift_right_arithmetic SRA(
    .i_a        (i_operand_a),
    .i_b        (i_operand_b),
    .o_sra      (w_op_sra)
);

always_comb begin
    case (i_alu_op)
        OP_ADD:     o_alu_data = w_op_add;
        OP_SUB:     o_alu_data = w_op_sub;
        OP_SLT:     o_alu_data = w_op_slt;
        OP_SLTU:    o_alu_data = w_op_sltu;
        OP_XOR:     o_alu_data = i_operand_a ^ i_operand_b;
        OP_OR:      o_alu_data = i_operand_b | i_operand_b;
        OP_AND:     o_alu_data = i_operand_a & i_operand_b;
        OP_SLL:     o_alu_data = w_op_sll;
        OP_SRL:     o_alu_data = w_op_srl;
        OP_SRA:     o_alu_data = w_op_sra;
        OP_OP_B:    o_alu_data = i_operand_b;
        default:    o_alu_data = 32'b0;
    endcase
end 
endmodule

