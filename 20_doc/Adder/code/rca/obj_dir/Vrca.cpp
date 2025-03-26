// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrca.h for the primary calling header

#include "Vrca.h"
#include "Vrca__Syms.h"

//==========

void Vrca::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrca::eval\n"); );
    Vrca__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rca.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrca::_eval_initial_loop(Vrca__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("rca.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vrca::_combo__TOP__1(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_combo__TOP__1\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_data = ((0xfffffffeU & vlTOPp->o_data) 
                      | (1U & (vlTOPp->i_data_a ^ vlTOPp->i_data_b)));
    vlTOPp->rca__DOT__FA31__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1fU));
    vlTOPp->rca__DOT__FA1__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 1U));
    vlTOPp->rca__DOT__FA2__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 2U));
    vlTOPp->rca__DOT__FA3__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 3U));
    vlTOPp->rca__DOT__FA4__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 4U));
    vlTOPp->rca__DOT__FA5__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 5U));
    vlTOPp->rca__DOT__FA6__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 6U));
    vlTOPp->rca__DOT__FA7__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 7U));
    vlTOPp->rca__DOT__FA8__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 8U));
    vlTOPp->rca__DOT__FA9__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                               ^ vlTOPp->i_data_b) 
                                              >> 9U));
    vlTOPp->rca__DOT__FA10__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xaU));
    vlTOPp->rca__DOT__FA11__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xbU));
    vlTOPp->rca__DOT__FA12__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xcU));
    vlTOPp->rca__DOT__FA13__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xdU));
    vlTOPp->rca__DOT__FA14__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xeU));
    vlTOPp->rca__DOT__FA15__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0xfU));
    vlTOPp->rca__DOT__FA16__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x10U));
    vlTOPp->rca__DOT__FA17__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x11U));
    vlTOPp->rca__DOT__FA18__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x12U));
    vlTOPp->rca__DOT__FA19__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x13U));
    vlTOPp->rca__DOT__FA20__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x14U));
    vlTOPp->rca__DOT__FA21__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x15U));
    vlTOPp->rca__DOT__FA22__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x16U));
    vlTOPp->rca__DOT__FA23__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x17U));
    vlTOPp->rca__DOT__FA24__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x18U));
    vlTOPp->rca__DOT__FA25__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x19U));
    vlTOPp->rca__DOT__FA26__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1aU));
    vlTOPp->rca__DOT__FA27__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1bU));
    vlTOPp->rca__DOT__FA28__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1cU));
    vlTOPp->rca__DOT__FA29__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1dU));
    vlTOPp->rca__DOT__FA30__DOT__xor1 = (1U & ((vlTOPp->i_data_a 
                                                ^ vlTOPp->i_data_b) 
                                               >> 0x1eU));
    vlTOPp->rca__DOT__carry = ((0xfffffffeU & vlTOPp->rca__DOT__carry) 
                               | (1U & (vlTOPp->i_data_a 
                                        & vlTOPp->i_data_b)));
    vlTOPp->rca__DOT____Vcellout__FA1__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 1U) 
                                                     | (vlTOPp->rca__DOT__carry 
                                                        & (IData)(vlTOPp->rca__DOT__FA1__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA2__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 2U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 1U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA2__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA3__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 3U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 2U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA3__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA4__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 4U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 3U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA4__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA5__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 5U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 4U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA5__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA6__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 6U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 5U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA6__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA7__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 7U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 6U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA7__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA8__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 8U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 7U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA8__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA9__o_carry = (1U 
                                                  & (((vlTOPp->i_data_a 
                                                       & vlTOPp->i_data_b) 
                                                      >> 9U) 
                                                     | ((vlTOPp->rca__DOT__carry 
                                                         >> 8U) 
                                                        & (IData)(vlTOPp->rca__DOT__FA9__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA10__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xaU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 9U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA10__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA11__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xbU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xaU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA11__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA12__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xcU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xbU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA12__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA13__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xdU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xcU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA13__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA14__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xeU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xdU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA14__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA15__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0xfU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xeU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA15__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA16__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x10U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0xfU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA16__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA17__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x11U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x10U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA17__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA18__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x12U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x11U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA18__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA19__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x13U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x12U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA19__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA20__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x14U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x13U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA20__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA21__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x15U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x14U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA21__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA22__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x16U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x15U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA22__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA23__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x17U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x16U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA23__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA24__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x18U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x17U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA24__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA25__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x19U) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x18U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA25__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA26__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x1aU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x19U) 
                                                         & (IData)(vlTOPp->rca__DOT__FA26__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA27__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x1bU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x1aU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA27__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA28__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x1cU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x1bU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA28__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA29__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x1dU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x1cU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA29__DOT__xor1))));
    vlTOPp->rca__DOT____Vcellout__FA30__o_carry = (1U 
                                                   & (((vlTOPp->i_data_a 
                                                        & vlTOPp->i_data_b) 
                                                       >> 0x1eU) 
                                                      | ((vlTOPp->rca__DOT__carry 
                                                          >> 0x1dU) 
                                                         & (IData)(vlTOPp->rca__DOT__FA30__DOT__xor1))));
    vlTOPp->o_data = ((0xfffffffdU & vlTOPp->o_data) 
                      | (2U & (((IData)(vlTOPp->rca__DOT__FA1__DOT__xor1) 
                                ^ vlTOPp->rca__DOT__carry) 
                               << 1U)));
    vlTOPp->o_data = ((0xfffffffbU & vlTOPp->o_data) 
                      | (4U & (((IData)(vlTOPp->rca__DOT__FA2__DOT__xor1) 
                                << 2U) ^ (0xfffffffcU 
                                          & (vlTOPp->rca__DOT__carry 
                                             << 1U)))));
    vlTOPp->o_data = ((0xfffffff7U & vlTOPp->o_data) 
                      | (8U & (((IData)(vlTOPp->rca__DOT__FA3__DOT__xor1) 
                                << 3U) ^ (0xfffffff8U 
                                          & (vlTOPp->rca__DOT__carry 
                                             << 1U)))));
    vlTOPp->o_data = ((0xffffffefU & vlTOPp->o_data) 
                      | (0x10U & (((IData)(vlTOPp->rca__DOT__FA4__DOT__xor1) 
                                   << 4U) ^ (0xfffffff0U 
                                             & (vlTOPp->rca__DOT__carry 
                                                << 1U)))));
    vlTOPp->o_data = ((0xffffffdfU & vlTOPp->o_data) 
                      | (0x20U & (((IData)(vlTOPp->rca__DOT__FA5__DOT__xor1) 
                                   << 5U) ^ (0xffffffe0U 
                                             & (vlTOPp->rca__DOT__carry 
                                                << 1U)))));
    vlTOPp->o_data = ((0xffffffbfU & vlTOPp->o_data) 
                      | (0x40U & (((IData)(vlTOPp->rca__DOT__FA6__DOT__xor1) 
                                   << 6U) ^ (0xffffffc0U 
                                             & (vlTOPp->rca__DOT__carry 
                                                << 1U)))));
    vlTOPp->o_data = ((0xffffff7fU & vlTOPp->o_data) 
                      | (0x80U & (((IData)(vlTOPp->rca__DOT__FA7__DOT__xor1) 
                                   << 7U) ^ (0xffffff80U 
                                             & (vlTOPp->rca__DOT__carry 
                                                << 1U)))));
    vlTOPp->o_data = ((0xfffffeffU & vlTOPp->o_data) 
                      | (0x100U & (((IData)(vlTOPp->rca__DOT__FA8__DOT__xor1) 
                                    << 8U) ^ (0xffffff00U 
                                              & (vlTOPp->rca__DOT__carry 
                                                 << 1U)))));
    vlTOPp->o_data = ((0xfffffdffU & vlTOPp->o_data) 
                      | (0x200U & (((IData)(vlTOPp->rca__DOT__FA9__DOT__xor1) 
                                    << 9U) ^ (0xfffffe00U 
                                              & (vlTOPp->rca__DOT__carry 
                                                 << 1U)))));
    vlTOPp->o_data = ((0xfffffbffU & vlTOPp->o_data) 
                      | (0x400U & (((IData)(vlTOPp->rca__DOT__FA10__DOT__xor1) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & (vlTOPp->rca__DOT__carry 
                                                   << 1U)))));
    vlTOPp->o_data = ((0xfffff7ffU & vlTOPp->o_data) 
                      | (0x800U & (((IData)(vlTOPp->rca__DOT__FA11__DOT__xor1) 
                                    << 0xbU) ^ (0xfffff800U 
                                                & (vlTOPp->rca__DOT__carry 
                                                   << 1U)))));
    vlTOPp->o_data = ((0xffffefffU & vlTOPp->o_data) 
                      | (0x1000U & (((IData)(vlTOPp->rca__DOT__FA12__DOT__xor1) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & (vlTOPp->rca__DOT__carry 
                                                    << 1U)))));
    vlTOPp->o_data = ((0xffffdfffU & vlTOPp->o_data) 
                      | (0x2000U & (((IData)(vlTOPp->rca__DOT__FA13__DOT__xor1) 
                                     << 0xdU) ^ (0xffffe000U 
                                                 & (vlTOPp->rca__DOT__carry 
                                                    << 1U)))));
    vlTOPp->o_data = ((0xffffbfffU & vlTOPp->o_data) 
                      | (0x4000U & (((IData)(vlTOPp->rca__DOT__FA14__DOT__xor1) 
                                     << 0xeU) ^ (0xffffc000U 
                                                 & (vlTOPp->rca__DOT__carry 
                                                    << 1U)))));
    vlTOPp->o_data = ((0xffff7fffU & vlTOPp->o_data) 
                      | (0x8000U & (((IData)(vlTOPp->rca__DOT__FA15__DOT__xor1) 
                                     << 0xfU) ^ (0xffff8000U 
                                                 & (vlTOPp->rca__DOT__carry 
                                                    << 1U)))));
    vlTOPp->o_data = ((0xfffeffffU & vlTOPp->o_data) 
                      | (0x10000U & (((IData)(vlTOPp->rca__DOT__FA16__DOT__xor1) 
                                      << 0x10U) ^ (0xffff0000U 
                                                   & (vlTOPp->rca__DOT__carry 
                                                      << 1U)))));
    vlTOPp->o_data = ((0xfffdffffU & vlTOPp->o_data) 
                      | (0x20000U & (((IData)(vlTOPp->rca__DOT__FA17__DOT__xor1) 
                                      << 0x11U) ^ (0xfffe0000U 
                                                   & (vlTOPp->rca__DOT__carry 
                                                      << 1U)))));
    vlTOPp->o_data = ((0xfffbffffU & vlTOPp->o_data) 
                      | (0x40000U & (((IData)(vlTOPp->rca__DOT__FA18__DOT__xor1) 
                                      << 0x12U) ^ (0xfffc0000U 
                                                   & (vlTOPp->rca__DOT__carry 
                                                      << 1U)))));
    vlTOPp->o_data = ((0xfff7ffffU & vlTOPp->o_data) 
                      | (0x80000U & (((IData)(vlTOPp->rca__DOT__FA19__DOT__xor1) 
                                      << 0x13U) ^ (0xfff80000U 
                                                   & (vlTOPp->rca__DOT__carry 
                                                      << 1U)))));
    vlTOPp->o_data = ((0xffefffffU & vlTOPp->o_data) 
                      | (0x100000U & (((IData)(vlTOPp->rca__DOT__FA20__DOT__xor1) 
                                       << 0x14U) ^ 
                                      (0xfff00000U 
                                       & (vlTOPp->rca__DOT__carry 
                                          << 1U)))));
    vlTOPp->o_data = ((0xffdfffffU & vlTOPp->o_data) 
                      | (0x200000U & (((IData)(vlTOPp->rca__DOT__FA21__DOT__xor1) 
                                       << 0x15U) ^ 
                                      (0xffe00000U 
                                       & (vlTOPp->rca__DOT__carry 
                                          << 1U)))));
    vlTOPp->o_data = ((0xffbfffffU & vlTOPp->o_data) 
                      | (0x400000U & (((IData)(vlTOPp->rca__DOT__FA22__DOT__xor1) 
                                       << 0x16U) ^ 
                                      (0xffc00000U 
                                       & (vlTOPp->rca__DOT__carry 
                                          << 1U)))));
    vlTOPp->o_data = ((0xff7fffffU & vlTOPp->o_data) 
                      | (0x800000U & (((IData)(vlTOPp->rca__DOT__FA23__DOT__xor1) 
                                       << 0x17U) ^ 
                                      (0xff800000U 
                                       & (vlTOPp->rca__DOT__carry 
                                          << 1U)))));
    vlTOPp->o_data = ((0xfeffffffU & vlTOPp->o_data) 
                      | (0x1000000U & (((IData)(vlTOPp->rca__DOT__FA24__DOT__xor1) 
                                        << 0x18U) ^ 
                                       (0xff000000U 
                                        & (vlTOPp->rca__DOT__carry 
                                           << 1U)))));
    vlTOPp->o_data = ((0xfdffffffU & vlTOPp->o_data) 
                      | (0x2000000U & (((IData)(vlTOPp->rca__DOT__FA25__DOT__xor1) 
                                        << 0x19U) ^ 
                                       (0xfe000000U 
                                        & (vlTOPp->rca__DOT__carry 
                                           << 1U)))));
    vlTOPp->o_data = ((0xfbffffffU & vlTOPp->o_data) 
                      | (0x4000000U & (((IData)(vlTOPp->rca__DOT__FA26__DOT__xor1) 
                                        << 0x1aU) ^ 
                                       (0xfc000000U 
                                        & (vlTOPp->rca__DOT__carry 
                                           << 1U)))));
    vlTOPp->o_data = ((0xf7ffffffU & vlTOPp->o_data) 
                      | (0x8000000U & (((IData)(vlTOPp->rca__DOT__FA27__DOT__xor1) 
                                        << 0x1bU) ^ 
                                       (0xf8000000U 
                                        & (vlTOPp->rca__DOT__carry 
                                           << 1U)))));
    vlTOPp->o_data = ((0xefffffffU & vlTOPp->o_data) 
                      | (0x10000000U & (((IData)(vlTOPp->rca__DOT__FA28__DOT__xor1) 
                                         << 0x1cU) 
                                        ^ (0xf0000000U 
                                           & (vlTOPp->rca__DOT__carry 
                                              << 1U)))));
    vlTOPp->o_data = ((0xdfffffffU & vlTOPp->o_data) 
                      | (0x20000000U & (((IData)(vlTOPp->rca__DOT__FA29__DOT__xor1) 
                                         << 0x1dU) 
                                        ^ (0xe0000000U 
                                           & (vlTOPp->rca__DOT__carry 
                                              << 1U)))));
    vlTOPp->o_data = ((0xbfffffffU & vlTOPp->o_data) 
                      | (0x40000000U & (((IData)(vlTOPp->rca__DOT__FA30__DOT__xor1) 
                                         << 0x1eU) 
                                        ^ (0xc0000000U 
                                           & (vlTOPp->rca__DOT__carry 
                                              << 1U)))));
    vlTOPp->o_data = ((0x7fffffffU & vlTOPp->o_data) 
                      | (0x80000000U & (((IData)(vlTOPp->rca__DOT__FA31__DOT__xor1) 
                                         << 0x1fU) 
                                        ^ (0x80000000U 
                                           & (vlTOPp->rca__DOT__carry 
                                              << 1U)))));
    vlTOPp->rca__DOT__carry = ((0xfffffffdU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA1__o_carry) 
                                  << 1U));
    vlTOPp->rca__DOT__carry = ((0xfffffffbU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA2__o_carry) 
                                  << 2U));
    vlTOPp->rca__DOT__carry = ((0xfffffff7U & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA3__o_carry) 
                                  << 3U));
    vlTOPp->rca__DOT__carry = ((0xffffffefU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA4__o_carry) 
                                  << 4U));
    vlTOPp->rca__DOT__carry = ((0xffffffdfU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA5__o_carry) 
                                  << 5U));
    vlTOPp->rca__DOT__carry = ((0xffffffbfU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA6__o_carry) 
                                  << 6U));
    vlTOPp->rca__DOT__carry = ((0xffffff7fU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA7__o_carry) 
                                  << 7U));
    vlTOPp->rca__DOT__carry = ((0xfffffeffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA8__o_carry) 
                                  << 8U));
    vlTOPp->rca__DOT__carry = ((0xfffffdffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA9__o_carry) 
                                  << 9U));
    vlTOPp->rca__DOT__carry = ((0xfffffbffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA10__o_carry) 
                                  << 0xaU));
    vlTOPp->rca__DOT__carry = ((0xfffff7ffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA11__o_carry) 
                                  << 0xbU));
    vlTOPp->rca__DOT__carry = ((0xffffefffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA12__o_carry) 
                                  << 0xcU));
    vlTOPp->rca__DOT__carry = ((0xffffdfffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA13__o_carry) 
                                  << 0xdU));
    vlTOPp->rca__DOT__carry = ((0xffffbfffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA14__o_carry) 
                                  << 0xeU));
    vlTOPp->rca__DOT__carry = ((0xffff7fffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA15__o_carry) 
                                  << 0xfU));
    vlTOPp->rca__DOT__carry = ((0xfffeffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA16__o_carry) 
                                  << 0x10U));
    vlTOPp->rca__DOT__carry = ((0xfffdffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA17__o_carry) 
                                  << 0x11U));
    vlTOPp->rca__DOT__carry = ((0xfffbffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA18__o_carry) 
                                  << 0x12U));
    vlTOPp->rca__DOT__carry = ((0xfff7ffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA19__o_carry) 
                                  << 0x13U));
    vlTOPp->rca__DOT__carry = ((0xffefffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA20__o_carry) 
                                  << 0x14U));
    vlTOPp->rca__DOT__carry = ((0xffdfffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA21__o_carry) 
                                  << 0x15U));
    vlTOPp->rca__DOT__carry = ((0xffbfffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA22__o_carry) 
                                  << 0x16U));
    vlTOPp->rca__DOT__carry = ((0xff7fffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA23__o_carry) 
                                  << 0x17U));
    vlTOPp->rca__DOT__carry = ((0xfeffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA24__o_carry) 
                                  << 0x18U));
    vlTOPp->rca__DOT__carry = ((0xfdffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA25__o_carry) 
                                  << 0x19U));
    vlTOPp->rca__DOT__carry = ((0xfbffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA26__o_carry) 
                                  << 0x1aU));
    vlTOPp->rca__DOT__carry = ((0xf7ffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA27__o_carry) 
                                  << 0x1bU));
    vlTOPp->rca__DOT__carry = ((0xefffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA28__o_carry) 
                                  << 0x1cU));
    vlTOPp->rca__DOT__carry = ((0xdfffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA29__o_carry) 
                                  << 0x1dU));
    vlTOPp->rca__DOT__carry = ((0xbfffffffU & vlTOPp->rca__DOT__carry) 
                               | ((IData)(vlTOPp->rca__DOT____Vcellout__FA30__o_carry) 
                                  << 0x1eU));
}

void Vrca::_eval(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_eval\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vrca::_change_request(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_change_request\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vrca::_change_request_1(Vrca__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_change_request_1\n"); );
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->rca__DOT__carry ^ vlTOPp->__Vchglast__TOP__rca__DOT__carry));
    VL_DEBUG_IF( if(__req && ((vlTOPp->rca__DOT__carry ^ vlTOPp->__Vchglast__TOP__rca__DOT__carry))) VL_DBG_MSGF("        CHANGE: rca.sv:8: rca.carry\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__rca__DOT__carry = vlTOPp->rca__DOT__carry;
    return __req;
}

#ifdef VL_DEBUG
void Vrca::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrca::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
