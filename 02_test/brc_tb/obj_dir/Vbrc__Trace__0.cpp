// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbrc__Syms.h"


void Vbrc___024root__trace_chg_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbrc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_chg_0\n"); );
    // Init
    Vbrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc___024root*>(voidSelf);
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbrc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbrc___024root__trace_chg_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->brc_tb__DOT__rs1),32);
        bufp->chgIData(oldp+1,(vlSelf->brc_tb__DOT__rs2),32);
        bufp->chgBit(oldp+2,(vlSelf->brc_tb__DOT__br_un));
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0U != 
                                               (vlSelf->brc_tb__DOT__rs1 
                                                ^ vlSelf->brc_tb__DOT__rs2)))))));
        bufp->chgIData(oldp+4,(vlSelf->brc_tb__DOT__correct_count),32);
        bufp->chgIData(oldp+5,(vlSelf->brc_tb__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test),32);
    }
    bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->brc_tb__DOT__br_un)
                                 ? (((vlSelf->brc_tb__DOT__rs1 
                                      ^ vlSelf->brc_tb__DOT__rs2) 
                                     >> 0x1fU) ? (vlSelf->brc_tb__DOT__rs1 
                                                  >> 0x1fU)
                                     : (IData)((vlSelf->brc_tb__DOT__uut__DOT__sub 
                                                >> 0x20U)))
                                 : (IData)((vlSelf->brc_tb__DOT__uut__DOT__sub 
                                            >> 0x20U))))));
    bufp->chgQData(oldp+8,(vlSelf->brc_tb__DOT__uut__DOT__sub),33);
}

void Vbrc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_cleanup\n"); );
    // Init
    Vbrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc___024root*>(voidSelf);
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
