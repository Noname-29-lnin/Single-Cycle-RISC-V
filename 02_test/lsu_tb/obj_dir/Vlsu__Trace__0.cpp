// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlsu__Syms.h"


void Vlsu___024root__trace_chg_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlsu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_chg_0\n"); );
    // Init
    Vlsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsu___024root*>(voidSelf);
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlsu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlsu___024root__trace_chg_0_sub_0(Vlsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->lsu_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->lsu_tb__DOT__lsu_wren));
        bufp->chgIData(oldp+2,(vlSelf->lsu_tb__DOT__i_lsu_addr),32);
        bufp->chgIData(oldp+3,(vlSelf->lsu_tb__DOT__i_st_data),32);
        bufp->chgIData(oldp+4,(vlSelf->lsu_tb__DOT__i_instr),32);
        bufp->chgIData(oldp+5,(vlSelf->lsu_tb__DOT__i_io_sw),32);
        bufp->chgCData(oldp+6,(vlSelf->lsu_tb__DOT__i_io_btn),4);
        bufp->chgCData(oldp+7,((7U & (vlSelf->lsu_tb__DOT__i_instr 
                                      >> 0xcU))),3);
        bufp->chgSData(oldp+8,((0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)),16);
        bufp->chgCData(oldp+9,((0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+10,((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
                                 | (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                                    | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2))),32);
        bufp->chgCData(oldp+11,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0]),8);
        bufp->chgCData(oldp+12,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[1]),8);
        bufp->chgCData(oldp+13,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[2]),8);
        bufp->chgCData(oldp+14,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[3]),8);
        bufp->chgCData(oldp+15,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[4]),8);
        bufp->chgCData(oldp+16,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[5]),8);
        bufp->chgCData(oldp+17,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[6]),8);
        bufp->chgCData(oldp+18,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[7]),8);
        bufp->chgCData(oldp+19,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[8]),8);
        bufp->chgCData(oldp+20,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[9]),8);
        bufp->chgCData(oldp+21,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[10]),8);
        bufp->chgCData(oldp+22,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[11]),8);
        bufp->chgCData(oldp+23,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[12]),8);
        bufp->chgCData(oldp+24,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[13]),8);
        bufp->chgCData(oldp+25,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[14]),8);
        bufp->chgCData(oldp+26,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[15]),8);
        bufp->chgCData(oldp+27,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[16]),8);
        bufp->chgCData(oldp+28,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[17]),8);
        bufp->chgCData(oldp+29,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[18]),8);
        bufp->chgCData(oldp+30,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[19]),8);
        bufp->chgCData(oldp+31,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[20]),8);
        bufp->chgCData(oldp+32,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[21]),8);
        bufp->chgCData(oldp+33,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[22]),8);
        bufp->chgCData(oldp+34,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[23]),8);
        bufp->chgCData(oldp+35,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[24]),8);
        bufp->chgCData(oldp+36,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[25]),8);
        bufp->chgCData(oldp+37,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[26]),8);
        bufp->chgCData(oldp+38,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[27]),8);
        bufp->chgCData(oldp+39,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[28]),8);
        bufp->chgCData(oldp+40,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[29]),8);
        bufp->chgCData(oldp+41,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[30]),8);
        bufp->chgCData(oldp+42,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[31]),8);
        bufp->chgCData(oldp+43,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[0]),8);
        bufp->chgCData(oldp+44,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[1]),8);
        bufp->chgCData(oldp+45,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[2]),8);
        bufp->chgCData(oldp+46,(vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[3]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+47,((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                                 | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                                    | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                                       | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                                          | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5))))),32);
        bufp->chgIData(oldp+48,((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
                                 | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                                    | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                                       | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                                          | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4))))),32);
        bufp->chgCData(oldp+49,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[0]),8);
        bufp->chgCData(oldp+50,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[1]),8);
        bufp->chgCData(oldp+51,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[2]),8);
        bufp->chgCData(oldp+52,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[3]),8);
        bufp->chgCData(oldp+53,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[0]),8);
        bufp->chgCData(oldp+54,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[1]),8);
        bufp->chgCData(oldp+55,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[2]),8);
        bufp->chgCData(oldp+56,(vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[3]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+57,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x20U])),7);
        bufp->chgCData(oldp+58,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x21U])),7);
        bufp->chgCData(oldp+59,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x22U])),7);
        bufp->chgCData(oldp+60,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x23U])),7);
        bufp->chgCData(oldp+61,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x24U])),7);
        bufp->chgCData(oldp+62,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x25U])),7);
        bufp->chgCData(oldp+63,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x26U])),7);
        bufp->chgCData(oldp+64,((0x7fU & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                 [0x27U])),7);
        bufp->chgIData(oldp+65,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                  [3U] << 0x18U) | 
                                 ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                   [2U] << 0x10U) | 
                                  ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                    [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                   [0U])))),32);
        bufp->chgIData(oldp+66,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                  [0x13U] << 0x18U) 
                                 | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                     [0x12U] << 0x10U) 
                                    | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                        [0x11U] << 8U) 
                                       | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                       [0x10U])))),32);
        bufp->chgIData(oldp+67,(((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                  [0x33U] << 0x18U) 
                                 | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                     [0x32U] << 0x10U) 
                                    | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                        [0x31U] << 8U) 
                                       | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                       [0x30U])))),32);
        bufp->chgQData(oldp+68,(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i),64);
    }
    bufp->chgBit(oldp+70,(vlSelf->lsu_tb__DOT__clk));
    bufp->chgIData(oldp+71,((vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                             | (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                                | vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6))),32);
}

void Vlsu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root__trace_cleanup\n"); );
    // Init
    Vlsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsu___024root*>(voidSelf);
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
