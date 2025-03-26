module half_adder_with_nand(
    input logic     i_data_a,
    input logic     i_data_b,

    output logic    o_data,
    output logic    o_carry
);

wire nand1, nand2, nand3;

assign nand1 = ~(i_data_a & i_data_b);  // NAND1 = A NAND B
assign nand2 = ~(i_data_a & nand1);     // NAND2 = A NAND (A NAND B)
assign nand3 = ~(i_data_b & nand1);     // NAND3 = B NAND (A NAND B)

assign o_data = ~(nand2 & nand3);       // SUM = (A NAND (A NAND B)) NAND (B NAND (A NAND B))
assign o_carry = ~(nand1);              // CARRY = NOT(A NAND B)

endmodule
