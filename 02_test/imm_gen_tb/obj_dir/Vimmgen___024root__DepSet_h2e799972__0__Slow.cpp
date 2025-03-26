// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen.h for the primary calling header

#include "Vimmgen__pch.h"
#include "Vimmgen__Syms.h"
#include "Vimmgen___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen___024root___dump_triggers__stl(Vimmgen___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vimmgen___024root___eval_triggers__stl(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimmgen___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
