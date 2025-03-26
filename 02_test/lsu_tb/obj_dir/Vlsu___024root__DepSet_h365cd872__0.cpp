// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu__Syms.h"
#include "Vlsu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__act(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG

void Vlsu___024root___eval_triggers__act(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->lsu_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->lsu_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__clk__0 
        = vlSelf->lsu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__rst_n__0 
        = vlSelf->lsu_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlsu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
