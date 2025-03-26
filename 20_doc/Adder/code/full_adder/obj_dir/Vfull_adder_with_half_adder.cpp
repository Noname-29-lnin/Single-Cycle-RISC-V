// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_with_half_adder.h for the primary calling header

#include "Vfull_adder_with_half_adder.h"
#include "Vfull_adder_with_half_adder__Syms.h"

//==========

void Vfull_adder_with_half_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfull_adder_with_half_adder::eval\n"); );
    Vfull_adder_with_half_adder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("full_adder_with_half_adder.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfull_adder_with_half_adder::_eval_initial_loop(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("full_adder_with_half_adder.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vfull_adder_with_half_adder::_combo__TOP__1(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_combo__TOP__1\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_adder_with_half_adder__DOT__w1 = ((IData)(vlTOPp->i_data_a) 
                                                   ^ (IData)(vlTOPp->i_data_b));
    vlTOPp->o_data = ((IData)(vlTOPp->i_carry) ^ (IData)(vlTOPp->full_adder_with_half_adder__DOT__w1));
    vlTOPp->o_carry = (((IData)(vlTOPp->i_carry) & (IData)(vlTOPp->full_adder_with_half_adder__DOT__w1)) 
                       | ((IData)(vlTOPp->i_data_a) 
                          & (IData)(vlTOPp->i_data_b)));
}

void Vfull_adder_with_half_adder::_eval(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_eval\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vfull_adder_with_half_adder::_change_request(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_change_request\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vfull_adder_with_half_adder::_change_request_1(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_change_request_1\n"); );
    Vfull_adder_with_half_adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfull_adder_with_half_adder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_with_half_adder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_data_a & 0xfeU))) {
        Verilated::overWidthError("i_data_a");}
    if (VL_UNLIKELY((i_data_b & 0xfeU))) {
        Verilated::overWidthError("i_data_b");}
    if (VL_UNLIKELY((i_carry & 0xfeU))) {
        Verilated::overWidthError("i_carry");}
}
#endif  // VL_DEBUG
