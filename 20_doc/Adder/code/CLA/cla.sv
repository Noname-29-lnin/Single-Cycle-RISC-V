module cla (
    input  logic [31:0] i_data_a,   // Operand A
    input  logic [31:0] i_data_b,   // Operand B
    output logic [31:0] o_data,     // Result sum
    output logic        o_carry     // Carry-out
);
    logic [31:0] G, P;              // Generate và Propagate từng bit
    logic [32:0] C;                 // Carry từng bit

    // Generate và Propagate
    assign G = i_data_a & i_data_b; // Generate
    assign P = i_data_a | i_data_b; // Propagate

    // Carry logic
    assign C[0] = 0; // Carry-in mặc định là 0
    generate
        genvar i;
        for (i = 0; i < 32; i++) begin
            assign C[i+1] = G[i] | (P[i] & C[i]);
        end
    endgenerate

    // Sum logic
    assign o_data = i_data_a ^ i_data_b ^ C[31:0];
    assign o_carry = C[32];
endmodule
e