// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen.h for the primary calling header

#include "Vimmgen__pch.h"
#include "Vimmgen___024root.h"

VlCoroutine Vimmgen___024root___eval_initial__TOP__Vtiming__0(Vimmgen___024root* vlSelf);

void Vimmgen___024root___eval_initial(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_initial\n"); );
    // Body
    Vimmgen___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vimmgen___024root___act_sequent__TOP__0(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_immgen__DOT__o_immgen = ((0x40U & vlSelf->tb_immgen__DOT__i_instr)
                                         ? ((0x20U 
                                             & vlSelf->tb_immgen__DOT__i_instr)
                                             ? ((0x10U 
                                                 & vlSelf->tb_immgen__DOT__i_instr)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->tb_immgen__DOT__i_instr)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->tb_immgen__DOT__i_instr 
                                                                   >> 0x14U)))) 
                                                    << 0x13U) 
                                                   | ((0x7fe00U 
                                                       & (vlSelf->tb_immgen__DOT__i_instr 
                                                          << 8U)) 
                                                      | ((0x100U 
                                                          & (vlSelf->tb_immgen__DOT__i_instr 
                                                             >> 3U)) 
                                                         | (0xffU 
                                                            & (vlSelf->tb_immgen__DOT__i_instr 
                                                               >> 0xcU)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->tb_immgen__DOT__i_instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (vlSelf->tb_immgen__DOT__i_instr 
                                                         >> 0x14U)))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->tb_immgen__DOT__i_instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->tb_immgen__DOT__i_instr 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->tb_immgen__DOT__i_instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->tb_immgen__DOT__i_instr 
                                                               >> 7U))))))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->tb_immgen__DOT__i_instr)
                                          ? ((0x10U 
                                              & vlSelf->tb_immgen__DOT__i_instr)
                                              ? ((8U 
                                                  & vlSelf->tb_immgen__DOT__i_instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   : 0U))
                                              : ((8U 
                                                  & vlSelf->tb_immgen__DOT__i_instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 0U
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->tb_immgen__DOT__i_instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb_immgen__DOT__i_instr 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->tb_immgen__DOT__i_instr 
                                                            >> 7U)))))))
                                          : ((0x10U 
                                              & vlSelf->tb_immgen__DOT__i_instr)
                                              ? ((8U 
                                                  & vlSelf->tb_immgen__DOT__i_instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->tb_immgen__DOT__i_instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (vlSelf->tb_immgen__DOT__i_instr 
                                                         >> 0x14U)))))
                                              : ((8U 
                                                  & vlSelf->tb_immgen__DOT__i_instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb_immgen__DOT__i_instr)
                                                   ? 0U
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->tb_immgen__DOT__i_instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (vlSelf->tb_immgen__DOT__i_instr 
                                                         >> 0x14U))))))));
}

void Vimmgen___024root___eval_act(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vimmgen___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmgen___024root___eval_nba(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimmgen___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmgen___024root___timing_resume(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vimmgen___024root___eval_triggers__act(Vimmgen___024root* vlSelf);

bool Vimmgen___024root___eval_phase__act(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vimmgen___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vimmgen___024root___timing_resume(vlSelf);
        Vimmgen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vimmgen___024root___eval_phase__nba(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vimmgen___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen___024root___dump_triggers__nba(Vimmgen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen___024root___dump_triggers__act(Vimmgen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmgen___024root___eval(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vimmgen___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_immgen.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vimmgen___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_immgen.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vimmgen___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vimmgen___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vimmgen___024root___eval_debug_assertions(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
