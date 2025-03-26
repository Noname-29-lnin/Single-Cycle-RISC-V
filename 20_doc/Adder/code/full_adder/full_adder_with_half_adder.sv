module full_adder_with_half_adder(
    input logic     i_data_a,
    input logic     i_data_b,
    input logic     i_carry,

    output logic    o_data,
    output logic    o_carry
);

wire w1, w2, w3; 
half_adder adder_1(
    .i_data_a(i_data_a),
    .i_data_b(i_data_b),

    .o_data(w1),
    .o_carry(w2)
);

half_adder adder_2(
    .i_data_a(i_carry),
    .i_data_b(w1),

    .o_data(o_data),
    .o_carry(w3)
);

assign o_carry = w3 | w2;

endmodule

module half_adder(
    input logic     i_data_a,
    input logic     i_data_b,

    output logic    o_data,
    output logic    o_carry
);

assign o_data = i_data_a ^ i_data_b;    // S = A XOR B
assign o_carry = i_data_a & i_data_b;   // C = A AND B

endmodule
