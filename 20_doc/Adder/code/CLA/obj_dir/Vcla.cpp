// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcla.h for the primary calling header

#include "Vcla.h"
#include "Vcla__Syms.h"

//==========

void Vcla::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcla::eval\n"); );
    Vcla__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcla* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("cla.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcla::_eval_initial_loop(Vcla__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("cla.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcla::_combo__TOP__2(Vcla__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla::_combo__TOP__2\n"); );
    Vcla* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cla__DOT__G = (vlTOPp->i_data_a & vlTOPp->i_data_b);
    vlTOPp->cla__DOT__P = (vlTOPp->i_data_a | vlTOPp->i_data_b);
    vlTOPp->o_carry = (1U & (IData)((vlTOPp->cla__DOT__C 
                                     >> 0x20U)));
    vlTOPp->o_data = ((vlTOPp->i_data_a ^ vlTOPp->i_data_b) 
                      ^ (IData)(vlTOPp->cla__DOT__C));
    vlTOPp->cla__DOT__C = ((0x1fffffffdULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               (vlTOPp->cla__DOT__G 
                                                | (vlTOPp->cla__DOT__P 
                                                   & (IData)(vlTOPp->cla__DOT__C)))))) 
                              << 1U));
    vlTOPp->cla__DOT__C = ((0x1fffffffbULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 1U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 1U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 1U))))))) 
                              << 2U));
    vlTOPp->cla__DOT__C = ((0x1fffffff7ULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 2U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 2U))))))) 
                              << 3U));
    vlTOPp->cla__DOT__C = ((0x1ffffffefULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 3U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 3U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 3U))))))) 
                              << 4U));
    vlTOPp->cla__DOT__C = ((0x1ffffffdfULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 4U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 4U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 4U))))))) 
                              << 5U));
    vlTOPp->cla__DOT__C = ((0x1ffffffbfULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 5U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 5U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 5U))))))) 
                              << 6U));
    vlTOPp->cla__DOT__C = ((0x1ffffff7fULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 6U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 6U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 6U))))))) 
                              << 7U));
    vlTOPp->cla__DOT__C = ((0x1fffffeffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 7U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 7U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 7U))))))) 
                              << 8U));
    vlTOPp->cla__DOT__C = ((0x1fffffdffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 8U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 8U))))))) 
                              << 9U));
    vlTOPp->cla__DOT__C = ((0x1fffffbffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 9U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 9U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 9U))))))) 
                              << 0xaU));
    vlTOPp->cla__DOT__C = ((0x1fffff7ffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xaU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xaU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xaU))))))) 
                              << 0xbU));
    vlTOPp->cla__DOT__C = ((0x1ffffefffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xbU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xbU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xbU))))))) 
                              << 0xcU));
    vlTOPp->cla__DOT__C = ((0x1ffffdfffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xcU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xcU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xcU))))))) 
                              << 0xdU));
    vlTOPp->cla__DOT__C = ((0x1ffffbfffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xdU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xdU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xdU))))))) 
                              << 0xeU));
    vlTOPp->cla__DOT__C = ((0x1ffff7fffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xeU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xeU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xeU))))))) 
                              << 0xfU));
    vlTOPp->cla__DOT__C = ((0x1fffeffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0xfU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0xfU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0xfU))))))) 
                              << 0x10U));
    vlTOPp->cla__DOT__C = ((0x1fffdffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x10U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x10U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x10U))))))) 
                              << 0x11U));
    vlTOPp->cla__DOT__C = ((0x1fffbffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x11U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x11U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x11U))))))) 
                              << 0x12U));
    vlTOPp->cla__DOT__C = ((0x1fff7ffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x12U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x12U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x12U))))))) 
                              << 0x13U));
    vlTOPp->cla__DOT__C = ((0x1ffefffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x13U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x13U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x13U))))))) 
                              << 0x14U));
    vlTOPp->cla__DOT__C = ((0x1ffdfffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x14U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x14U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x14U))))))) 
                              << 0x15U));
    vlTOPp->cla__DOT__C = ((0x1ffbfffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x15U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x15U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x15U))))))) 
                              << 0x16U));
    vlTOPp->cla__DOT__C = ((0x1ff7fffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x16U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x16U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x16U))))))) 
                              << 0x17U));
    vlTOPp->cla__DOT__C = ((0x1feffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x17U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x17U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x17U))))))) 
                              << 0x18U));
    vlTOPp->cla__DOT__C = ((0x1fdffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x18U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x18U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x18U))))))) 
                              << 0x19U));
    vlTOPp->cla__DOT__C = ((0x1fbffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x19U) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x19U) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x19U))))))) 
                              << 0x1aU));
    vlTOPp->cla__DOT__C = ((0x1f7ffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1aU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1aU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1aU))))))) 
                              << 0x1bU));
    vlTOPp->cla__DOT__C = ((0x1efffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1bU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1bU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1bU))))))) 
                              << 0x1cU));
    vlTOPp->cla__DOT__C = ((0x1dfffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1cU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1cU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1cU))))))) 
                              << 0x1dU));
    vlTOPp->cla__DOT__C = ((0x1bfffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1dU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1dU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1dU))))))) 
                              << 0x1eU));
    vlTOPp->cla__DOT__C = ((0x17fffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1eU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1eU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1eU))))))) 
                              << 0x1fU));
    vlTOPp->cla__DOT__C = ((0xffffffffULL & vlTOPp->cla__DOT__C) 
                           | ((QData)((IData)((1U & 
                                               ((vlTOPp->cla__DOT__G 
                                                 >> 0x1fU) 
                                                | ((vlTOPp->cla__DOT__P 
                                                    >> 0x1fU) 
                                                   & (IData)(
                                                             (vlTOPp->cla__DOT__C 
                                                              >> 0x1fU))))))) 
                              << 0x20U));
}

void Vcla::_eval(Vcla__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla::_eval\n"); );
    Vcla* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vcla::_change_request(Vcla__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla::_change_request\n"); );
    Vcla* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcla::_change_request_1(Vcla__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla::_change_request_1\n"); );
    Vcla* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->cla__DOT__C ^ vlTOPp->__Vchglast__TOP__cla__DOT__C));
    VL_DEBUG_IF( if(__req && ((vlTOPp->cla__DOT__C ^ vlTOPp->__Vchglast__TOP__cla__DOT__C))) VL_DBG_MSGF("        CHANGE: cla.sv:8: cla.C\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__cla__DOT__C = vlTOPp->cla__DOT__C;
    return __req;
}

#ifdef VL_DEBUG
void Vcla::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
