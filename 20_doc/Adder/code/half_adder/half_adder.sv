module half_adder(
    input  logic A,  // Input A
    input  logic B,  // Input B
    output logic Sum,  // Sum = A XOR B
    output logic Carry // Carry = A AND B
);

    // Intermediate signals
    wire nor1, nor2, nor3, nor4, nor5, nor6;

    // Generate XOR using NOR gates
    assign nor1 = ~(A | A);   // A NOR A
    assign nor2 = ~(B | B);   // B NOR B
    assign nor3 = ~(A | B);   // A NOR B
    assign nor4 = ~(nor1 | nor2); // (A NOR A) NOR (B NOR B)
    assign Sum  = ~(nor4 | nor3); // Sum = (nor4 NOR nor3)

    // Generate AND using NOR gates
    assign nor5 = ~(A | B);   // A NOR B
    assign Carry = ~(nor5 | nor5); // Carry = (A NOR B) NOR (A NOR B)

endmodule
