// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc.h for the primary calling header

#include "Vbrc__pch.h"
#include "Vbrc__Syms.h"
#include "Vbrc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc___024root___dump_triggers__act(Vbrc___024root* vlSelf);
#endif  // VL_DEBUG

void Vbrc___024root___eval_triggers__act(Vbrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbrc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
