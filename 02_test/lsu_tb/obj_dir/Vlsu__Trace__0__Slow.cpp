// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlsu__Syms.h"


VL_ATTR_COLD void Vlsu___024root__trace_init_sub__TOP__0(Vlsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("lsu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"lsu_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_st_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_io_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"o_io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+59,0,"o_io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"o_io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+61,0,"o_io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+62,0,"o_io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"o_io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+64,0,"o_io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+65,0,"o_io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+72,0,"o_ld_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"o_io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"o_io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"o_io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_st_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+59,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+61,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+62,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+64,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+65,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+72,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"r_input_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"r_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"r_dmem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"i_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_st_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"o_dmem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"temp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("temp_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+50+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+78,0,"D_MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+69,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declBus(c+79,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("input_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"o_input_buf_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"I_BUF_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("in_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+73,0,"SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"sw_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"btn_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("temp_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"temp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("output_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"i_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_output_buf_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"o_output_buf_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+59,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+61,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+62,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+64,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+65,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+68,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"O_BUF_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"ledr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"ledg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"hex0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"hex1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"hex2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"hex3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"hex4_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"hex5_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"hex6_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"hex7_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"lcd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("temp_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+54+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"temp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlsu___024root__trace_init_top(Vlsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_init_top\n"); );
    // Body
    Vlsu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlsu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vlsu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlsu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlsu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlsu___024root__trace_register(Vlsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vlsu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vlsu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vlsu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vlsu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlsu___024root__trace_const_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlsu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_const_0\n"); );
    // Init
    Vlsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsu___024root*>(voidSelf);
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlsu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlsu___024root__trace_const_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+73,(0U),3);
    bufp->fullCData(oldp+74,(1U),3);
    bufp->fullCData(oldp+75,(2U),3);
    bufp->fullCData(oldp+76,(4U),3);
    bufp->fullCData(oldp+77,(5U),3);
    bufp->fullIData(oldp+78,(0x3e8U),32);
    bufp->fullSData(oldp+79,(0x2000U),16);
    bufp->fullSData(oldp+80,(0x3fffU),16);
    bufp->fullIData(oldp+81,(0x20U),32);
    bufp->fullCData(oldp+82,(0U),8);
    bufp->fullCData(oldp+83,(0x10U),8);
    bufp->fullCData(oldp+84,(0x1fU),8);
    bufp->fullIData(oldp+85,(0x40U),32);
    bufp->fullCData(oldp+86,(0x20U),8);
    bufp->fullCData(oldp+87,(0x21U),8);
    bufp->fullCData(oldp+88,(0x22U),8);
    bufp->fullCData(oldp+89,(0x23U),8);
    bufp->fullCData(oldp+90,(0x24U),8);
    bufp->fullCData(oldp+91,(0x25U),8);
    bufp->fullCData(oldp+92,(0x26U),8);
    bufp->fullCData(oldp+93,(0x27U),8);
    bufp->fullCData(oldp+94,(0x30U),8);
    bufp->fullCData(oldp+95,(0xffU),8);
}

VL_ATTR_COLD void Vlsu___024root__trace_full_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlsu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_full_0\n"); );
    // Init
    Vlsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsu___024root*>(voidSelf);
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlsu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlsu___024root__trace_full_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->lsu_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->lsu_tb__DOT__lsu_wren));
    bufp->fullIData(oldp+3,(vlSelf->lsu_tb__DOT__i_lsu_addr),32);
    bufp->fullIData(oldp+4,(vlSelf->lsu_tb__DOT__i_st_data),32);
    bufp->fullIData(oldp+5,(vlSelf->lsu_tb__DOT__i_instr),32);
    bufp->fullIData(oldp+6,(vlSelf->lsu_tb__DOT__i_io_sw),32);
    bufp->fullCData(oldp+7,(vlSelf->lsu_tb__DOT__i_io_btn),4);
    bufp->fullCData(oldp+8,((7U & (vlSelf->lsu_tb__DOT__i_instr 
                                   >> 0xcU))),3);
    bufp->fullSData(oldp+9,((0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)),16);
    bufp->fullCData(oldp+10,((0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)),8);
    bufp->fullIData(oldp+11,((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
                              | (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                                 | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2))),32);
    bufp->fullCData(oldp+12,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0]),8);
    bufp->fullCData(oldp+13,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[1]),8);
    bufp->fullCData(oldp+14,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[2]),8);
    bufp->fullCData(oldp+15,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[3]),8);
    bufp->fullCData(oldp+16,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[4]),8);
    bufp->fullCData(oldp+17,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[5]),8);
    bufp->fullCData(oldp+18,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[6]),8);
    bufp->fullCData(oldp+19,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[7]),8);
    bufp->fullCData(oldp+20,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[8]),8);
    bufp->fullCData(oldp+21,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[9]),8);
    bufp->fullCData(oldp+22,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[10]),8);
    bufp->fullCData(oldp+23,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[11]),8);
    bufp->fullCData(oldp+24,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[12]),8);
    bufp->fullCData(oldp+25,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[13]),8);
    bufp->fullCData(oldp+26,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[14]),8);
    bufp->fullCData(oldp+27,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[15]),8);
    bufp->fullCData(oldp+28,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[16]),8);
    bufp->fullCData(oldp+29,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[17]),8);
    bufp->fullCData(oldp+30,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[18]),8);
    bufp->fullCData(oldp+31,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[19]),8);
    bufp->fullCData(oldp+32,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[20]),8);
    bufp->fullCData(oldp+33,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[21]),8);
    bufp->fullCData(oldp+34,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[22]),8);
    bufp->fullCData(oldp+35,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[23]),8);
    bufp->fullCData(oldp+36,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[24]),8);
    bufp->fullCData(oldp+37,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[25]),8);
    bufp->fullCData(oldp+38,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[26]),8);
    bufp->fullCData(oldp+39,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[27]),8);
    bufp->fullCData(oldp+40,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[28]),8);
    bufp->fullCData(oldp+41,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[29]),8);
    bufp->fullCData(oldp+42,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[30]),8);
    bufp->fullCData(oldp+43,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[31]),8);
    bufp->fullCData(oldp+44,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[0]),8);
    bufp->fullCData(oldp+45,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[1]),8);
    bufp->fullCData(oldp+46,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[2]),8);
    bufp->fullCData(oldp+47,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[3]),8);
    bufp->fullIData(oldp+48,((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                              | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                                 | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                                    | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                                       | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5))))),32);
    bufp->fullIData(oldp+49,((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
                              | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                                 | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                                    | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                                       | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4))))),32);
    bufp->fullCData(oldp+50,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[0]),8);
    bufp->fullCData(oldp+51,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[1]),8);
    bufp->fullCData(oldp+52,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[2]),8);
    bufp->fullCData(oldp+53,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[3]),8);
    bufp->fullCData(oldp+54,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[0]),8);
    bufp->fullCData(oldp+55,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[1]),8);
    bufp->fullCData(oldp+56,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[2]),8);
    bufp->fullCData(oldp+57,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[3]),8);
    bufp->fullCData(oldp+58,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x20U])),7);
    bufp->fullCData(oldp+59,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x21U])),7);
    bufp->fullCData(oldp+60,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x22U])),7);
    bufp->fullCData(oldp+61,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x23U])),7);
    bufp->fullCData(oldp+62,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x24U])),7);
    bufp->fullCData(oldp+63,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x25U])),7);
    bufp->fullCData(oldp+64,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x26U])),7);
    bufp->fullCData(oldp+65,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                              [0x27U])),7);
    bufp->fullIData(oldp+66,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                               [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                    [0U])))),32);
    bufp->fullIData(oldp+67,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                               [0x13U] << 0x18U) | 
                              ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                [0x12U] << 0x10U) | 
                               ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x11U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                [0x10U])))),32);
    bufp->fullIData(oldp+68,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                               [0x33U] << 0x18U) | 
                              ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                [0x32U] << 0x10U) | 
                               ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x31U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                [0x30U])))),32);
    bufp->fullQData(oldp+69,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i),64);
    bufp->fullBit(oldp+71,(vlSelf->lsu_tb__DOT__clk));
    bufp->fullIData(oldp+72,((vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                              | (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                                 | vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6))),32);
}
