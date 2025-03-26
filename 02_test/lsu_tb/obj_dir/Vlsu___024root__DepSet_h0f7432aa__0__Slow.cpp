// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu___024root.h"

VL_ATTR_COLD void Vlsu___024root___eval_static__TOP(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu___024root___eval_static(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_static\n"); );
    // Body
    Vlsu___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vlsu___024root___eval_static__TOP(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i = 0ULL;
}

VL_ATTR_COLD void Vlsu___024root___eval_final(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__stl(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlsu___024root___eval_phase__stl(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu___024root___eval_settle(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_settle\n"); );
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
            Vlsu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lsu_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlsu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__stl(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vlsu___024root___act_sequent__TOP__0(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu___024root___eval_stl(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vlsu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vlsu___024root___eval_triggers__stl(Vlsu___024root* vlSelf);

VL_ATTR_COLD bool Vlsu___024root___eval_phase__stl(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlsu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vlsu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__act(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge lsu_tb.clk or negedge lsu_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__nba(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge lsu_tb.clk or negedge lsu_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsu___024root___ctor_var_reset(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->lsu_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->lsu_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->lsu_tb__DOT__lsu_wren = VL_RAND_RESET_I(1);
    vlSelf->lsu_tb__DOT__i_lsu_addr = VL_RAND_RESET_I(32);
    vlSelf->lsu_tb__DOT__i_st_data = VL_RAND_RESET_I(32);
    vlSelf->lsu_tb__DOT__i_instr = VL_RAND_RESET_I(32);
    vlSelf->lsu_tb__DOT__i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->lsu_tb__DOT__i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4 = 0;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__0 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__1 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__0 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__2 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__1 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9cfbe__0 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9f610__0 = VL_RAND_RESET_I(8);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h81a15a3f__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
