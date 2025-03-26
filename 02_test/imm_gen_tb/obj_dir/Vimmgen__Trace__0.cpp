// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimmgen__Syms.h"


void Vimmgen___024root__trace_chg_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vimmgen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_chg_0\n"); );
    // Init
    Vimmgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen___024root*>(voidSelf);
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vimmgen___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vimmgen___024root__trace_chg_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->tb_immgen__DOT__i_instr),32);
    bufp->chgIData(oldp+1,(vlSelf->tb_immgen__DOT__o_immgen),32);
}

void Vimmgen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_cleanup\n"); );
    // Init
    Vimmgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen___024root*>(voidSelf);
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
