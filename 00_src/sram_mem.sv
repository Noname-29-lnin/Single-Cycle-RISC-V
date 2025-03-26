module sram_mem(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_lsu_wren,
    input logic [2:0]   i_func3,
    input logic [31:0]  i_lsu_addr,
    input logic [31:0]  i_st_data,

    output logic [31:0] o_sram_data,

    output logic        o_ack,
    output logic [17:0] SRAM_ADDR,
    inout  logic [15:0] SRAM_DQ  ,
    output logic        SRAM_CE_N,
    output logic        SRAM_WE_N,
    output logic        SRAM_LB_N,
    output logic        SRAM_UB_N,
    output logic        SRAM_OE_N
);

// == State
typedef enum logic [1:0] { 
    IDLE,
    RD_SET,
    WR_SET,
    WAIT
} e_state;

e_state p_state, n_state;

endmodule
