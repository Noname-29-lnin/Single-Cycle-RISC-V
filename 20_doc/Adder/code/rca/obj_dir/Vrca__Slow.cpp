// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrca.h for the primary calling header

#include "Vrca.h"
#include "Vrca__Syms.h"

//==========

VL_CTOR_IMP(Vrca) {
    Vrca__Syms* __restrict vlSymsp = __VlSymsp = new Vrca__Syms(this, name());
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrca::__Vconfigure(Vrca__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vrca::~Vrca() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vrca::_eval_initial(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_eval_initial\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrca::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::final\n"); );
    // Variables
    Vrca__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrca::_eval_settle(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_eval_settle\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vrca::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_ctor_var_reset\n"); );
    // Body
    i_data_a = VL_RAND_RESET_I(32);
    i_data_b = VL_RAND_RESET_I(32);
    o_data = VL_RAND_RESET_I(32);
    rca__DOT__carry = VL_RAND_RESET_I(32);
    rca__DOT____Vcellout__FA1__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA2__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA3__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA4__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA5__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA6__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA7__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA8__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA9__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA10__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA11__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA12__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA13__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA14__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA15__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA16__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA17__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA18__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA19__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA20__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA21__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA22__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA23__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA24__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA25__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA26__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA27__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA28__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA29__o_carry = VL_RAND_RESET_I(1);
    rca__DOT____Vcellout__FA30__o_carry = VL_RAND_RESET_I(1);
    rca__DOT__FA1__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA2__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA3__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA4__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA5__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA6__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA7__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA8__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA9__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA10__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA11__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA12__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA13__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA14__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA15__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA16__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA17__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA18__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA19__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA20__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA21__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA22__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA23__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA24__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA25__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA26__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA27__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA28__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA29__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA30__DOT__xor1 = VL_RAND_RESET_I(1);
    rca__DOT__FA31__DOT__xor1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__rca__DOT__carry = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
