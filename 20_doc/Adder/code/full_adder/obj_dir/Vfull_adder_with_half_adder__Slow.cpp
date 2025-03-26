// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_with_half_adder.h for the primary calling header

#include "Vfull_adder_with_half_adder.h"
#include "Vfull_adder_with_half_adder__Syms.h"

//==========

VL_CTOR_IMP(Vfull_adder_with_half_adder) {
    Vfull_adder_with_half_adder__Syms* __restrict vlSymsp = __VlSymsp = new Vfull_adder_with_half_adder__Syms(this, name());
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfull_adder_with_half_adder::__Vconfigure(Vfull_adder_with_half_adder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vfull_adder_with_half_adder::~Vfull_adder_with_half_adder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vfull_adder_with_half_adder::_eval_initial(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_eval_initial\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder_with_half_adder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::final\n"); );
    // Variables
    Vfull_adder_with_half_adder__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder_with_half_adder::_eval_settle(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_eval_settle\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vfull_adder_with_half_adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_ctor_var_reset\n"); );
    // Body
    i_data_a = VL_RAND_RESET_I(1);
    i_data_b = VL_RAND_RESET_I(1);
    i_carry = VL_RAND_RESET_I(1);
    o_data = VL_RAND_RESET_I(1);
    o_carry = VL_RAND_RESET_I(1);
    full_adder_with_half_adder__DOT__w1 = VL_RAND_RESET_I(1);
}
