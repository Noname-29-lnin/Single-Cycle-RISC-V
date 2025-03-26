// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024unit.h"

VL_ATTR_COLD void Vregfile___024unit___ctor_var_reset(Vregfile___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregfile___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
