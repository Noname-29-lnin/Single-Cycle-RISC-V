// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc.h for the primary calling header

#include "Vbrc__pch.h"
#include "Vbrc___024root.h"

VL_ATTR_COLD void Vbrc___024root___eval_initial__TOP(Vbrc___024root* vlSelf);
VlCoroutine Vbrc___024root___eval_initial__TOP__Vtiming__0(Vbrc___024root* vlSelf);

void Vbrc___024root___eval_initial(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_initial\n"); );
    // Body
    Vbrc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vbrc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vbrc___024root___eval_initial__TOP__Vtiming__0(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_brc_tb__DOT__run_test__0__mode;
    __Vtask_brc_tb__DOT__run_test__0__mode = 0;
    CData/*0:0*/ __Vtask_brc_tb__DOT__run_test__1__mode;
    __Vtask_brc_tb__DOT__run_test__1__mode = 0;
    // Body
    __Vtask_brc_tb__DOT__run_test__0__mode = 0U;
    vlSelf->brc_tb__DOT__br_un = 0U;
    vlSelf->brc_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelf->brc_tb__DOT__i)) {
        vlSelf->brc_tb__DOT__rs1 = VL_MODDIVS_III(32, (IData)(
                                                              VL_RANDOM_I()), (IData)(4U));
        vlSelf->brc_tb__DOT__rs2 = VL_MODDIVS_III(32, (IData)(
                                                              VL_RANDOM_I()), (IData)(4U));
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "brc_tb.sv", 
                                           29);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((((IData)(vlSelf->brc_tb__DOT__equal) == 
              (vlSelf->brc_tb__DOT__rs1 == vlSelf->brc_tb__DOT__rs2)) 
             | ((IData)(vlSelf->brc_tb__DOT__less) 
                == ((IData)(__Vtask_brc_tb__DOT__run_test__0__mode)
                     ? (vlSelf->brc_tb__DOT__rs1 < vlSelf->brc_tb__DOT__rs2)
                     : VL_LTS_III(32, vlSelf->brc_tb__DOT__rs1, vlSelf->brc_tb__DOT__rs2))))) {
            vlSelf->brc_tb__DOT__correct_count = ((IData)(1U) 
                                                  + vlSelf->brc_tb__DOT__correct_count);
            vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 1U;
        }
        VL_WRITEF("Mode = %b, rs1 = %10#, rs2 = %10#, equal = %b, less = %b, test = %s\n",
                  1,vlSelf->brc_tb__DOT__br_un,32,vlSelf->brc_tb__DOT__rs1,
                  32,vlSelf->brc_tb__DOT__rs2,1,(IData)(vlSelf->brc_tb__DOT__equal),
                  1,vlSelf->brc_tb__DOT__less,32,((0U 
                                                   != vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test)
                                                   ? 0x50415353U
                                                   : 0x4641494cU));
        vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 0U;
        vlSelf->brc_tb__DOT__i = ((IData)(1U) + vlSelf->brc_tb__DOT__i);
    }
    __Vtask_brc_tb__DOT__run_test__1__mode = 1U;
    vlSelf->brc_tb__DOT__br_un = __Vtask_brc_tb__DOT__run_test__1__mode;
    vlSelf->brc_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelf->brc_tb__DOT__i)) {
        vlSelf->brc_tb__DOT__rs1 = VL_MODDIVS_III(32, (IData)(
                                                              VL_RANDOM_I()), (IData)(4U));
        vlSelf->brc_tb__DOT__rs2 = VL_MODDIVS_III(32, (IData)(
                                                              VL_RANDOM_I()), (IData)(4U));
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "brc_tb.sv", 
                                           29);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((((IData)(vlSelf->brc_tb__DOT__equal) == 
              (vlSelf->brc_tb__DOT__rs1 == vlSelf->brc_tb__DOT__rs2)) 
             | ((IData)(vlSelf->brc_tb__DOT__less) 
                == ((IData)(__Vtask_brc_tb__DOT__run_test__1__mode)
                     ? (vlSelf->brc_tb__DOT__rs1 < vlSelf->brc_tb__DOT__rs2)
                     : VL_LTS_III(32, vlSelf->brc_tb__DOT__rs1, vlSelf->brc_tb__DOT__rs2))))) {
            vlSelf->brc_tb__DOT__correct_count = ((IData)(1U) 
                                                  + vlSelf->brc_tb__DOT__correct_count);
            vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 1U;
        }
        VL_WRITEF("Mode = %b, rs1 = %10#, rs2 = %10#, equal = %b, less = %b, test = %s\n",
                  1,vlSelf->brc_tb__DOT__br_un,32,vlSelf->brc_tb__DOT__rs1,
                  32,vlSelf->brc_tb__DOT__rs2,1,(IData)(vlSelf->brc_tb__DOT__equal),
                  1,vlSelf->brc_tb__DOT__less,32,((0U 
                                                   != vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test)
                                                   ? 0x50415353U
                                                   : 0x4641494cU));
        vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test = 0U;
        vlSelf->brc_tb__DOT__i = ((IData)(1U) + vlSelf->brc_tb__DOT__i);
    }
    VL_WRITEF("Total correct comparisons: %11d /         100\n",
              32,vlSelf->brc_tb__DOT__correct_count);
    VL_FINISH_MT("brc_tb.sv", 43, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vbrc___024root___act_sequent__TOP__0(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->brc_tb__DOT__equal = (1U & (~ (IData)((0U 
                                                   != 
                                                   (vlSelf->brc_tb__DOT__rs1 
                                                    ^ vlSelf->brc_tb__DOT__rs2)))));
    vlSelf->brc_tb__DOT__uut__DOT__sub = (0x1ffffffffULL 
                                          & (1ULL + 
                                             ((~ (((QData)((IData)(
                                                                   (vlSelf->brc_tb__DOT__rs2 
                                                                    >> 0x1fU))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->brc_tb__DOT__rs2)))) 
                                              + (((QData)((IData)(
                                                                  (vlSelf->brc_tb__DOT__rs1 
                                                                   >> 0x1fU))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->brc_tb__DOT__rs1))))));
    vlSelf->brc_tb__DOT__less = (1U & ((IData)(vlSelf->brc_tb__DOT__br_un)
                                        ? (((vlSelf->brc_tb__DOT__rs1 
                                             ^ vlSelf->brc_tb__DOT__rs2) 
                                            >> 0x1fU)
                                            ? (vlSelf->brc_tb__DOT__rs1 
                                               >> 0x1fU)
                                            : (IData)(
                                                      (vlSelf->brc_tb__DOT__uut__DOT__sub 
                                                       >> 0x20U)))
                                        : (IData)((vlSelf->brc_tb__DOT__uut__DOT__sub 
                                                   >> 0x20U))));
}

void Vbrc___024root___eval_act(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vbrc___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vbrc___024root___eval_nba(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbrc___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vbrc___024root___timing_resume(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vbrc___024root___eval_triggers__act(Vbrc___024root* vlSelf);

bool Vbrc___024root___eval_phase__act(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbrc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbrc___024root___timing_resume(vlSelf);
        Vbrc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbrc___024root___eval_phase__nba(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbrc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__nba(Vbrc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__act(Vbrc___024root* vlSelf);
#endif  // VL_DEBUG

void Vbrc___024root___eval(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbrc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("brc_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbrc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("brc_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbrc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbrc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbrc___024root___eval_debug_assertions(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
