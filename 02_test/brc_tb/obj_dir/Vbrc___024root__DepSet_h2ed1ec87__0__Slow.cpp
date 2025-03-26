// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc.h for the primary calling header

#include "Vbrc__pch.h"
#include "Vbrc___024root.h"

VL_ATTR_COLD void Vbrc___024root___eval_static__TOP(Vbrc___024root* vlSelf);

VL_ATTR_COLD void Vbrc___024root___eval_static(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_static\n"); );
    // Body
    Vbrc___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vbrc___024root___eval_static__TOP(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->brc_tb__DOT__correct_count = 0U;
    vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 0U;
}

VL_ATTR_COLD void Vbrc___024root___eval_final(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__stl(Vbrc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbrc___024root___eval_phase__stl(Vbrc___024root* vlSelf);

VL_ATTR_COLD void Vbrc___024root___eval_settle(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbrc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("brc_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbrc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__stl(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbrc___024root___act_sequent__TOP__0(Vbrc___024root* vlSelf);

VL_ATTR_COLD void Vbrc___024root___eval_stl(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vbrc___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbrc___024root___eval_triggers__stl(Vbrc___024root* vlSelf);

VL_ATTR_COLD bool Vbrc___024root___eval_phase__stl(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbrc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vbrc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__act(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__nba(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbrc___024root___ctor_var_reset(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->brc_tb__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->brc_tb__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->brc_tb__DOT__br_un = VL_RAND_RESET_I(1);
    vlSelf->brc_tb__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->brc_tb__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->brc_tb__DOT__correct_count = 0;
    vlSelf->brc_tb__DOT__i = 0;
    vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 0;
    vlSelf->brc_tb__DOT__uut__DOT__sub = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
