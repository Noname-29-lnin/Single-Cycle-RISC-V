`timescale 1ns/1ps
module alu_tb;

logic [31:0] a, b, data, alu_data;
logic [3:0]  alu_op;
alu uut(
    .i_operand_a    (a),
    .i_operand_b    (b),
    .i_alu_op       (alu_op),
    .o_alu_data     (alu_data)
);

initial begin
    $dumpvars(0, alu_tb);
    $dumpfile("alu_wave.vcd");
    $finish;
end

initial begin
    alu_op = 4'b0000;
    a = 32'h34;
    b = 32'h23;
    data = a + b;
    $display("ADD: %d + %d = %d (ALU = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");

    alu_op = 4'b0001;
    a = 32'h34;
    b = 32'h23;
    data = 32'h11;
    $display("SUB: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    
    alu_op = 4'b0010;
    a = 32'h34;
    b = 32'h23;
    data = 32'h0;
    $display("SLT: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");

    alu_op = 4'b0011;
    a = 32'h34;
    b = 32'h23;
    data = 32'h0;
    $display("SLTU: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b0100;
    a = 32'h34;
    b = 32'h23;
    data = 32'h17;
    $display("XOR: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b0101;
    a = 32'h34;
    b = 32'h23;
    data = 32'h37;
    $display("OR: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b0110;
    a = 32'h34;
    b = 32'h23;
    data = 32'h20;
    $display("ADD: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b0111;
    a = 32'h34;
    b = 32'h4;
    data = 32'h340;
    $display("SLL: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b1000;
    a = 32'h34;
    b = 32'h4;
    data = 32'h3;
    $display("SRL: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b1001;
    a = 32'h34;
    b = 32'h44;
    data = 32'h3;
    $display("SRA: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
    alu_op = 4'b1010;
    a = 32'h34;
    b = 32'h23;
    data = 32'h23;
    $display("OP_B: %d + %d = %d (SUB = %d)(%s)", a, b, data, alu_data, (alu_data == data) ? "PASS" : "FAIL");
end
endmodule
