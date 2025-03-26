`timescale 1ns/1ps
module alu_tb;

logic [31:0] a, b, sum, alu_data;
logic [3:0]  alu_op;
alu uut(
    .i_operand_a    (a),
    .i_operand_b    (b),
    .i_alu_op       (alu_op),
    .o_alu_data     (alu_data)
);

initial begin
    alu_op = 4'b0000;
    a = 32'h34;
    b = 32'h23;
    sum = a + b;
    $display("ADD: %d + %d = %d (ALU = %d)(%s)", a, b, sum, alu_data, (alu_data == sum) ? "PASS" : "FAIL");
end

initial begin
    $dumpvars(0, alu_tb);
    $dumpfile("alu_wave.vcd");
    $finish;
end
endmodule
