module half_adder_with_nor(
    input logic     i_data_a,
    input logic     i_data_b,

    output logic    o_data,
    output logic    o_carry
);

wire nor1, nor2, nor3, nor4;

assign nor1 = ~(i_data_a | i_data_a);   // NOR1 = ~A
assign nor2 = ~(i_data_b | i_data_b);   // NOR2 = ~B
assign nor3 = ~(nor1 | nor2);           // NOR3 = ~A NOR ~B
assign nor4 = ~(i_data_a | i_data_b);   // NOR4 = A NOR B

assign o_data = ~(nor3 | nor4);         // SUM = (~A NOR ~B) NOR (A NOR B)
assign o_carry = nor3;                  // CARRY = (~A NOR ~B)

endmodule

