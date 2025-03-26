module immgen(
    input logic [31:0]  i_instr,
    output logic [31:0] o_immgen
);

// OPCODE TYPES
localparam [4:0] R_type  = 5'b01100,
                 I_type  = 5'b00100,
                 S_type  = 5'b01000,
                 L_type  = 5'b00000,
                 SB_type = 5'b11000,
                 UL_type = 5'b01101,
                 UA_type = 5'b00101,
                 UJ_type = 5'b11011,
                 IJ_type = 5'b11001;  // JALR (I-Type format)

always_comb begin
    case (i_instr[6:2])
        R_type:  o_immgen = 32'b0;  // R-type has no immediate

        // I-type (ADDI, LW, JALR)
        I_type, L_type, IJ_type: 
            o_immgen = {{21{i_instr[31]}}, i_instr[30:20]};

        // S-type (SW, SH, SB)
        S_type:
            o_immgen = {{21{i_instr[31]}}, i_instr[30:25], i_instr[11:7]};

        // SB-type (BEQ, BNE, BLT, BGE, BLTU, BGEU)
        SB_type:
            o_immgen = {{20{i_instr[31]}}, i_instr[7], i_instr[30:25], i_instr[11:8], 1'b0};

        // U-type (LUI, AUIPC)
        UL_type, UA_type:
            o_immgen = {i_instr[31:12], 12'b0};

        // UJ-type (JAL)
        UJ_type:
            o_immgen = {{13{i_instr[20]}}, i_instr[10:1], i_instr[11], i_instr[19:12]};

        default:
            o_immgen = 32'b0;
    endcase
end

endmodule
