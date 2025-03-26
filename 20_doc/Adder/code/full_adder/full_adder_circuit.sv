module full_adder_circuit(
    input logic     i_data_a,
    input logic     i_data_b,
    input logic     i_carry,

    output logic    o_data,
    output logic    o_carry
);

wire xor1;

assign xor1 = i_data_a ^ i_data_b;
assign o_data = xor1 ^ i_carry;
assign o_carry = (i_data_a & i_data_b) | (i_carry & xor1);

endmodule

