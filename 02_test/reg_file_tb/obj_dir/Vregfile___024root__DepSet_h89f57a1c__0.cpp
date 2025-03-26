// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile__Syms.h"
#include "Vregfile___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile___024root___eval_triggers__act(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_regfile__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_regfile__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0 
        = vlSelf->tb_regfile__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0 
        = vlSelf->tb_regfile__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vregfile___024root___act_sequent__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t | rst_n=%b | rd_wren=%b | rd_addr=%b | rd_data=%x | rs1_addr=%b | rs1_data=%x | rs2_addr=%b | rs2_data=%x\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_regfile__DOT__rst_n),
                  1,vlSelf->tb_regfile__DOT__rd_wren,
                  5,(IData)(vlSelf->tb_regfile__DOT__rd_addr),
                  32,vlSelf->tb_regfile__DOT__rd_data,
                  5,(IData)(vlSelf->tb_regfile__DOT__rs1_addr),
                  32,((0U != (IData)(vlSelf->tb_regfile__DOT__rs1_addr))
                       ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                      [vlSelf->tb_regfile__DOT__rs1_addr]
                       : 0U),5,(IData)(vlSelf->tb_regfile__DOT__rs2_addr),
                  32,((0U != (IData)(vlSelf->tb_regfile__DOT__rs2_addr))
                       ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                      [vlSelf->tb_regfile__DOT__rs2_addr]
                       : 0U));
    }
}
