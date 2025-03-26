module control_unit(
    input logic         i_brc_less,
    input logic         i_brc_equal,
    input logic [31:0]  i_instr,

    output logic        o_pc_sel,
    output logic        o_rd_wren,
    output logic        o_insn_vld,
    output logic        o_br_un,
    output logic        o_opa_sel,
    output logic        o_opb_sel,
    output logic        o_mem_wren,
    output logic [1:0]  o_wb_sel,
    output logic [3:0]  o_alu_op
);

// Opcode
localparam [4:0] R_type   = 5'b01100,
                 I_type   = 5'b00100,
                 S_type   = 5'b01000,
                 L_type   = 5'b00000,
                 SB_type  = 5'b11000,
                 UL_type  = 5'b01101,
                 UA_type  = 5'b00101,
                 UJ_type  = 5'b11011,
                 IJ_type  = 5'b11001;

// Alu_op
localparam [3:0] OP_ADD   = 4'b0000,
                 OP_SUB   = 4'b0001,
                 OP_SLL   = 4'b0010,
                 OP_SLT   = 4'b0011,
                 OP_SLTU  = 4'b0100,
                 OP_XOR   = 4'b0101,
                 OP_SRL   = 4'b0110,
                 OP_SRA   = 4'b0111,
                 OP_OR    = 4'b1000,
                 OP_AND   = 4'b1001,
                 OP_LUI   = 4'b1010;

// Func3 - ALU
localparam [2:0] ALU_IDLE = 3'b000,
                 ADD    = 3'b000,
                 SUB    = 3'b000,
                 SLL    = 3'b001,
                 SLT    = 3'b010,
                 SLTU   = 3'b011,
                 XOR    = 3'b100,
                 SRL    = 3'b101,
                 SRA    = 3'b101,
                 OR     = 3'b110,
                 AND    = 3'b111;

// Func3 - BRANCH
localparam [2:0] BR_IDLE = 3'b000,
                 BEQ    = 3'b000,
                 BNE    = 3'b001,
                 BLT    = 3'b100,
                 BGE    = 3'b101,
                 BLTU   = 3'b110,
                 BGEU   = 3'b111;

// Func3 - STORE
localparam [2:0] S_IDLE = 3'b000,
                 SB     = 3'b000,
                 SH     = 3'b001,
                 SW     = 3'b010;

// Func3 - LOAD
localparam [2:0] L_IDLE = 3'b000,
                 LB     = 3'b000,
                 LH     = 3'b001,
                 LW     = 3'b010,
                 LBU    = 3'b100,
                 LHU    = 3'b101;

// pc_sel
localparam l_pc_four = 1'b0;
localparam l_pc_alu  = 1'b1;
// OPA 
localparam l_opa_rs1_data = 1'b0;
localparam l_opa_pc       = 1'b1;

// OPB
localparam l_opb_rs2_data = 1'b0;
localparam l_opb_imm_gen  = 1'b1;

// insn_vld
localparam l_unvalid      = 1'b0;
localparam l_valid        = 1'b1;

// rd_wren
localparam l_rdwn_un      = 1'b0;
localparam l_rdwn         = 1'b1;

// mem_wren
localparam l_memwn_un     = 1'b0;
localparam l_memwn        = 1'b1;

// wb_sel
localparam [1:0] l_wb_pc_four     = 2'b00,
                 l_wb_alu_data    = 2'b01,
                 l_wb_lsu_data    = 2'b10;

// br_un
localparam l_br_unsign    = 1'b1;
localparam l_br_sign      = 1'b0;

// =====================
always_comb begin : proc_control
    case(i_instr[6:2])
        R_type: begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_rs2_data; 
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_alu_data;
            case (i_instr[14:12])
                ADD : o_alu_op = (i_instr[30]) ? OP_SUB : OP_ADD;
                SLL : o_alu_op = OP_SLL;
                SLT : o_alu_op = OP_SLT;
                SLTU: o_alu_op = OP_SLTU;
                XOR : o_alu_op = OP_XOR;
                SRL : o_alu_op = (i_instr[30]) ? OP_SRA : OP_SRL;
                OR  : o_alu_op = OP_OR;
                AND : o_alu_op = OP_AND;
                default: o_insn_vld = l_unvalid;
            endcase
        end
        I_type : begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_imm_gen; 
            case (i_instr[14:12])
                ADD : o_alu_op = (i_instr[30]) ? OP_SUB : OP_ADD;
                SLL : o_alu_op = OP_SLL;
                SLT : o_alu_op = OP_SLT;
                SLTU: o_alu_op = OP_SLTU;
                XOR : o_alu_op = OP_XOR;
                SRL : o_alu_op = (i_instr[30]) ? OP_SRA : OP_SRL;
                OR  : o_alu_op = OP_OR;
                AND : o_alu_op = OP_AND;
                default: o_insn_vld = l_unvalid;
            endcase
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_alu_data;
        end
        S_type : begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn_un;
            case (i_instr[14:12])
                SB: o_insn_vld = l_valid;
                SH: o_insn_vld = l_valid;
                SW: o_insn_vld = l_valid;
                default: o_insn_vld = l_unvalid;
            endcase
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn;
            o_wb_sel    = l_wb_lsu_data;
        end
        L_type : begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn;
            case (i_instr[14:12])
                LB  : o_insn_vld = l_valid;
                LH  : o_insn_vld = l_valid;
                LW  : o_insn_vld = l_valid;
                LBU : o_insn_vld = l_valid;
                LHU : o_insn_vld = l_valid;
                default: o_insn_vld = l_unvalid;
            endcase
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_lsu_data;
        end
        SB_type: begin
            o_rd_wren   = l_rdwn_un;
            o_opa_sel   = l_opa_pc;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_alu_data;
            case(i_instr[14:12]) 
                BEQ  : begin 
                    o_pc_sel = i_brc_equal;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_sign;
                end
                BNE  : begin 
                    o_pc_sel = ~i_brc_equal;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_sign;
                end
                BLT  : begin 
                    o_pc_sel = i_brc_less;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_sign;
                end
                BGE  : begin 
                    o_pc_sel = ~i_brc_less;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_sign;
                end
                BLTU : begin 
                    o_pc_sel = i_brc_less;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_unsign;
                end
                BGEU : begin 
                    o_pc_sel = i_brc_equal;
                    o_insn_vld = l_valid;
                    o_br_un = l_br_unsign;
                end
                default: begin
                    o_pc_sel = l_pc_four;
                    o_insn_vld = l_unvalid;
                    o_br_un = l_br_unsign;
                end
            endcase
        end
        UL_type: begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_LUI;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_alu_data; 
        end
        UA_type: begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_pc;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_alu_data; 
        end
        UJ_type: begin
            o_pc_sel    = l_pc_alu;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_pc;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_pc_four; 
        end
        IJ_type: begin
            o_pc_sel    = l_pc_alu;
            o_rd_wren   = l_rdwn;
            o_insn_vld  = l_valid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_imm_gen;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_pc_four; 
        end
        default: begin
            o_pc_sel    = l_pc_four;
            o_rd_wren   = l_rdwn_un;
            o_insn_vld  = l_unvalid;
            o_br_un     = l_br_unsign;
            o_opa_sel   = l_opa_rs1_data;
            o_opb_sel   = l_opb_rs2_data;
            o_alu_op    = OP_ADD;
            o_mem_wren  = l_memwn_un;
            o_wb_sel    = l_wb_pc_four; 
        end
    endcase
end

endmodule