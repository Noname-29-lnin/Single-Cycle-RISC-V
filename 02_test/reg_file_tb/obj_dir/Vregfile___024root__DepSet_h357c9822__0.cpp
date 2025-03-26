// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024root.h"

VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__0(Vregfile___024root* vlSelf);
VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__1(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vregfile___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregfile___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0 
        = vlSelf->tb_regfile__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0 
        = vlSelf->tb_regfile__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_regfile__DOT__clk = 0U;
    vlSelf->tb_regfile__DOT__rst_n = 0U;
    vlSelf->tb_regfile__DOT__rd_wren = 0U;
    vlSelf->tb_regfile__DOT__rs1_addr = 0U;
    vlSelf->tb_regfile__DOT__rs2_addr = 0U;
    vlSelf->tb_regfile__DOT__rd_addr = 0U;
    vlSelf->tb_regfile__DOT__rd_data = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rd_wren = 1U;
    vlSelf->tb_regfile__DOT__rd_addr = 1U;
    vlSelf->tb_regfile__DOT__rd_data = 0xdeadbeefU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rd_addr = 2U;
    vlSelf->tb_regfile__DOT__rd_data = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rd_addr = 0U;
    vlSelf->tb_regfile__DOT__rd_data = 0xbadcafeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rd_wren = 0U;
    vlSelf->tb_regfile__DOT__rs1_addr = 1U;
    vlSelf->tb_regfile__DOT__rs2_addr = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_regfile__DOT__rs1_addr = 0U;
    vlSelf->tb_regfile__DOT__rs2_addr = 0x1fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_regfile.sv", 
                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_regfile.sv", 70, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__1(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_regfile.sv", 
                                           28);
        vlSelf->tb_regfile__DOT__clk = (1U & (~ (IData)(vlSelf->tb_regfile__DOT__clk)));
    }
}

void Vregfile___024root___act_sequent__TOP__0(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_act(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vregfile___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile___024root___nba_sequent__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__tb_regfile__DOT__uut__DOT__r_reg__v0;
    __Vdlyvdim0__tb_regfile__DOT__uut__DOT__r_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_regfile__DOT__uut__DOT__r_reg__v0;
    __Vdlyvval__tb_regfile__DOT__uut__DOT__r_reg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v0;
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v1;
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v2;
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v2 = 0;
    // Body
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v0 = 0U;
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v1 = 0U;
    __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v2 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_regfile__DOT__rst_n)))) {
        vlSelf->tb_regfile__DOT__uut__DOT__i = 0x20U;
    }
    if (vlSelf->tb_regfile__DOT__rst_n) {
        if (((IData)(vlSelf->tb_regfile__DOT__rd_wren) 
             & (0U != (IData)(vlSelf->tb_regfile__DOT__rd_addr)))) {
            __Vdlyvval__tb_regfile__DOT__uut__DOT__r_reg__v0 
                = vlSelf->tb_regfile__DOT__rd_data;
            __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v0 = 1U;
            __Vdlyvdim0__tb_regfile__DOT__uut__DOT__r_reg__v0 
                = vlSelf->tb_regfile__DOT__rd_addr;
        } else {
            __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v1 = 1U;
        }
    } else {
        __Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v2 = 1U;
    }
    if (__Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v0) {
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[__Vdlyvdim0__tb_regfile__DOT__uut__DOT__r_reg__v0] 
            = __Vdlyvval__tb_regfile__DOT__uut__DOT__r_reg__v0;
    }
    if (__Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v1) {
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0U] = 0U;
    }
    if (__Vdlyvset__tb_regfile__DOT__uut__DOT__r_reg__v2) {
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[1U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[2U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[3U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[4U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[5U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[6U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[7U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[8U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[9U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xaU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xbU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xcU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xdU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xeU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0xfU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x10U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x11U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x12U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x13U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x14U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x15U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x16U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x17U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x18U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x19U] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1aU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1bU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1cU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1dU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1eU] = 0U;
        vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0x1fU] = 0U;
    }
}

void Vregfile___024root___eval_nba(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregfile___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregfile___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vregfile___024root___timing_resume(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregfile___024root___eval_triggers__act(Vregfile___024root* vlSelf);

bool Vregfile___024root___eval_phase__act(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregfile___024root___timing_resume(vlSelf);
        Vregfile___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile___024root___eval_phase__nba(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile___024root___eval(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregfile___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_regfile.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_regfile.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregfile___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregfile___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
