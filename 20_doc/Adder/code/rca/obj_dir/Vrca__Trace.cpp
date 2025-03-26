// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrca__Syms.h"


void Vrca::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vrca::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->rca__DOT__carry),32);
            tracep->chgBit(oldp+1,((1U & vlTOPp->rca__DOT__carry)));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->rca__DOT__FA1__DOT__xor1) 
                                          ^ vlTOPp->rca__DOT__carry))));
            tracep->chgBit(oldp+3,(vlTOPp->rca__DOT__FA1__DOT__xor1));
            tracep->chgBit(oldp+4,((1U & (vlTOPp->rca__DOT__carry 
                                          >> 1U))));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->rca__DOT__FA2__DOT__xor1) 
                                          ^ (vlTOPp->rca__DOT__carry 
                                             >> 1U)))));
            tracep->chgBit(oldp+6,(vlTOPp->rca__DOT__FA2__DOT__xor1));
            tracep->chgBit(oldp+7,((1U & (vlTOPp->rca__DOT__carry 
                                          >> 2U))));
            tracep->chgBit(oldp+8,((1U & ((IData)(vlTOPp->rca__DOT__FA3__DOT__xor1) 
                                          ^ (vlTOPp->rca__DOT__carry 
                                             >> 2U)))));
            tracep->chgBit(oldp+9,(vlTOPp->rca__DOT__FA3__DOT__xor1));
            tracep->chgBit(oldp+10,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 3U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->rca__DOT__FA4__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 3U)))));
            tracep->chgBit(oldp+12,(vlTOPp->rca__DOT__FA4__DOT__xor1));
            tracep->chgBit(oldp+13,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 4U))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->rca__DOT__FA5__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 4U)))));
            tracep->chgBit(oldp+15,(vlTOPp->rca__DOT__FA5__DOT__xor1));
            tracep->chgBit(oldp+16,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 5U))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlTOPp->rca__DOT__FA6__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 5U)))));
            tracep->chgBit(oldp+18,(vlTOPp->rca__DOT__FA6__DOT__xor1));
            tracep->chgBit(oldp+19,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 6U))));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlTOPp->rca__DOT__FA7__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 6U)))));
            tracep->chgBit(oldp+21,(vlTOPp->rca__DOT__FA7__DOT__xor1));
            tracep->chgBit(oldp+22,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 7U))));
            tracep->chgBit(oldp+23,((1U & ((IData)(vlTOPp->rca__DOT__FA8__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 7U)))));
            tracep->chgBit(oldp+24,(vlTOPp->rca__DOT__FA8__DOT__xor1));
            tracep->chgBit(oldp+25,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 8U))));
            tracep->chgBit(oldp+26,((1U & ((IData)(vlTOPp->rca__DOT__FA9__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 8U)))));
            tracep->chgBit(oldp+27,(vlTOPp->rca__DOT__FA9__DOT__xor1));
            tracep->chgBit(oldp+28,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 9U))));
            tracep->chgBit(oldp+29,((1U & ((IData)(vlTOPp->rca__DOT__FA10__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 9U)))));
            tracep->chgBit(oldp+30,(vlTOPp->rca__DOT__FA10__DOT__xor1));
            tracep->chgBit(oldp+31,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xaU))));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlTOPp->rca__DOT__FA11__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+33,(vlTOPp->rca__DOT__FA11__DOT__xor1));
            tracep->chgBit(oldp+34,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xbU))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlTOPp->rca__DOT__FA12__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xbU)))));
            tracep->chgBit(oldp+36,(vlTOPp->rca__DOT__FA12__DOT__xor1));
            tracep->chgBit(oldp+37,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xcU))));
            tracep->chgBit(oldp+38,((1U & ((IData)(vlTOPp->rca__DOT__FA13__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xcU)))));
            tracep->chgBit(oldp+39,(vlTOPp->rca__DOT__FA13__DOT__xor1));
            tracep->chgBit(oldp+40,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xdU))));
            tracep->chgBit(oldp+41,((1U & ((IData)(vlTOPp->rca__DOT__FA14__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xdU)))));
            tracep->chgBit(oldp+42,(vlTOPp->rca__DOT__FA14__DOT__xor1));
            tracep->chgBit(oldp+43,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xeU))));
            tracep->chgBit(oldp+44,((1U & ((IData)(vlTOPp->rca__DOT__FA15__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xeU)))));
            tracep->chgBit(oldp+45,(vlTOPp->rca__DOT__FA15__DOT__xor1));
            tracep->chgBit(oldp+46,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0xfU))));
            tracep->chgBit(oldp+47,((1U & ((IData)(vlTOPp->rca__DOT__FA16__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0xfU)))));
            tracep->chgBit(oldp+48,(vlTOPp->rca__DOT__FA16__DOT__xor1));
            tracep->chgBit(oldp+49,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x10U))));
            tracep->chgBit(oldp+50,((1U & ((IData)(vlTOPp->rca__DOT__FA17__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x10U)))));
            tracep->chgBit(oldp+51,(vlTOPp->rca__DOT__FA17__DOT__xor1));
            tracep->chgBit(oldp+52,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x11U))));
            tracep->chgBit(oldp+53,((1U & ((IData)(vlTOPp->rca__DOT__FA18__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x11U)))));
            tracep->chgBit(oldp+54,(vlTOPp->rca__DOT__FA18__DOT__xor1));
            tracep->chgBit(oldp+55,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x12U))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlTOPp->rca__DOT__FA19__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x12U)))));
            tracep->chgBit(oldp+57,(vlTOPp->rca__DOT__FA19__DOT__xor1));
            tracep->chgBit(oldp+58,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x13U))));
            tracep->chgBit(oldp+59,((1U & ((IData)(vlTOPp->rca__DOT__FA20__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x13U)))));
            tracep->chgBit(oldp+60,(vlTOPp->rca__DOT__FA20__DOT__xor1));
            tracep->chgBit(oldp+61,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x14U))));
            tracep->chgBit(oldp+62,((1U & ((IData)(vlTOPp->rca__DOT__FA21__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x14U)))));
            tracep->chgBit(oldp+63,(vlTOPp->rca__DOT__FA21__DOT__xor1));
            tracep->chgBit(oldp+64,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x15U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->rca__DOT__FA22__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x15U)))));
            tracep->chgBit(oldp+66,(vlTOPp->rca__DOT__FA22__DOT__xor1));
            tracep->chgBit(oldp+67,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x16U))));
            tracep->chgBit(oldp+68,((1U & ((IData)(vlTOPp->rca__DOT__FA23__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x16U)))));
            tracep->chgBit(oldp+69,(vlTOPp->rca__DOT__FA23__DOT__xor1));
            tracep->chgBit(oldp+70,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x17U))));
            tracep->chgBit(oldp+71,((1U & ((IData)(vlTOPp->rca__DOT__FA24__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x17U)))));
            tracep->chgBit(oldp+72,(vlTOPp->rca__DOT__FA24__DOT__xor1));
            tracep->chgBit(oldp+73,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x18U))));
            tracep->chgBit(oldp+74,((1U & ((IData)(vlTOPp->rca__DOT__FA25__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x18U)))));
            tracep->chgBit(oldp+75,(vlTOPp->rca__DOT__FA25__DOT__xor1));
            tracep->chgBit(oldp+76,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x19U))));
            tracep->chgBit(oldp+77,((1U & ((IData)(vlTOPp->rca__DOT__FA26__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x19U)))));
            tracep->chgBit(oldp+78,(vlTOPp->rca__DOT__FA26__DOT__xor1));
            tracep->chgBit(oldp+79,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+80,((1U & ((IData)(vlTOPp->rca__DOT__FA27__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x1aU)))));
            tracep->chgBit(oldp+81,(vlTOPp->rca__DOT__FA27__DOT__xor1));
            tracep->chgBit(oldp+82,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+83,((1U & ((IData)(vlTOPp->rca__DOT__FA28__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x1bU)))));
            tracep->chgBit(oldp+84,(vlTOPp->rca__DOT__FA28__DOT__xor1));
            tracep->chgBit(oldp+85,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+86,((1U & ((IData)(vlTOPp->rca__DOT__FA29__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x1cU)))));
            tracep->chgBit(oldp+87,(vlTOPp->rca__DOT__FA29__DOT__xor1));
            tracep->chgBit(oldp+88,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+89,((1U & ((IData)(vlTOPp->rca__DOT__FA30__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x1dU)))));
            tracep->chgBit(oldp+90,(vlTOPp->rca__DOT__FA30__DOT__xor1));
            tracep->chgBit(oldp+91,((1U & (vlTOPp->rca__DOT__carry 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+92,((1U & ((IData)(vlTOPp->rca__DOT__FA31__DOT__xor1) 
                                           ^ (vlTOPp->rca__DOT__carry 
                                              >> 0x1eU)))));
            tracep->chgBit(oldp+93,(vlTOPp->rca__DOT__FA31__DOT__xor1));
        }
        tracep->chgIData(oldp+94,(vlTOPp->i_data_a),32);
        tracep->chgIData(oldp+95,(vlTOPp->i_data_b),32);
        tracep->chgIData(oldp+96,(vlTOPp->o_data),32);
        tracep->chgBit(oldp+97,((1U & vlTOPp->i_data_a)));
        tracep->chgBit(oldp+98,((1U & vlTOPp->i_data_b)));
        tracep->chgBit(oldp+99,((1U & (vlTOPp->i_data_a 
                                       ^ vlTOPp->i_data_b))));
        tracep->chgBit(oldp+100,((1U & (vlTOPp->i_data_a 
                                        & vlTOPp->i_data_b))));
        tracep->chgBit(oldp+101,((1U & (vlTOPp->i_data_a 
                                        >> 1U))));
        tracep->chgBit(oldp+102,((1U & (vlTOPp->i_data_b 
                                        >> 1U))));
        tracep->chgBit(oldp+103,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 1U) | (vlTOPp->rca__DOT__carry 
                                                   & (IData)(vlTOPp->rca__DOT__FA1__DOT__xor1))))));
        tracep->chgBit(oldp+104,((1U & (vlTOPp->i_data_a 
                                        >> 2U))));
        tracep->chgBit(oldp+105,((1U & (vlTOPp->i_data_b 
                                        >> 2U))));
        tracep->chgBit(oldp+106,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 2U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA2__DOT__xor1))))));
        tracep->chgBit(oldp+107,((1U & (vlTOPp->i_data_a 
                                        >> 3U))));
        tracep->chgBit(oldp+108,((1U & (vlTOPp->i_data_b 
                                        >> 3U))));
        tracep->chgBit(oldp+109,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 3U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 2U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA3__DOT__xor1))))));
        tracep->chgBit(oldp+110,((1U & (vlTOPp->i_data_a 
                                        >> 4U))));
        tracep->chgBit(oldp+111,((1U & (vlTOPp->i_data_b 
                                        >> 4U))));
        tracep->chgBit(oldp+112,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 4U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 3U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA4__DOT__xor1))))));
        tracep->chgBit(oldp+113,((1U & (vlTOPp->i_data_a 
                                        >> 5U))));
        tracep->chgBit(oldp+114,((1U & (vlTOPp->i_data_b 
                                        >> 5U))));
        tracep->chgBit(oldp+115,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 5U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 4U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA5__DOT__xor1))))));
        tracep->chgBit(oldp+116,((1U & (vlTOPp->i_data_a 
                                        >> 6U))));
        tracep->chgBit(oldp+117,((1U & (vlTOPp->i_data_b 
                                        >> 6U))));
        tracep->chgBit(oldp+118,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 6U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 5U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA6__DOT__xor1))))));
        tracep->chgBit(oldp+119,((1U & (vlTOPp->i_data_a 
                                        >> 7U))));
        tracep->chgBit(oldp+120,((1U & (vlTOPp->i_data_b 
                                        >> 7U))));
        tracep->chgBit(oldp+121,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 7U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 6U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA7__DOT__xor1))))));
        tracep->chgBit(oldp+122,((1U & (vlTOPp->i_data_a 
                                        >> 8U))));
        tracep->chgBit(oldp+123,((1U & (vlTOPp->i_data_b 
                                        >> 8U))));
        tracep->chgBit(oldp+124,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 8U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 7U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA8__DOT__xor1))))));
        tracep->chgBit(oldp+125,((1U & (vlTOPp->i_data_a 
                                        >> 9U))));
        tracep->chgBit(oldp+126,((1U & (vlTOPp->i_data_b 
                                        >> 9U))));
        tracep->chgBit(oldp+127,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 9U) | (
                                                   (vlTOPp->rca__DOT__carry 
                                                    >> 8U) 
                                                   & (IData)(vlTOPp->rca__DOT__FA9__DOT__xor1))))));
        tracep->chgBit(oldp+128,((1U & (vlTOPp->i_data_a 
                                        >> 0xaU))));
        tracep->chgBit(oldp+129,((1U & (vlTOPp->i_data_b 
                                        >> 0xaU))));
        tracep->chgBit(oldp+130,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xaU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 9U) & (IData)(vlTOPp->rca__DOT__FA10__DOT__xor1))))));
        tracep->chgBit(oldp+131,((1U & (vlTOPp->i_data_a 
                                        >> 0xbU))));
        tracep->chgBit(oldp+132,((1U & (vlTOPp->i_data_b 
                                        >> 0xbU))));
        tracep->chgBit(oldp+133,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xbU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 0xaU) 
                                         & (IData)(vlTOPp->rca__DOT__FA11__DOT__xor1))))));
        tracep->chgBit(oldp+134,((1U & (vlTOPp->i_data_a 
                                        >> 0xcU))));
        tracep->chgBit(oldp+135,((1U & (vlTOPp->i_data_b 
                                        >> 0xcU))));
        tracep->chgBit(oldp+136,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xcU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 0xbU) 
                                         & (IData)(vlTOPp->rca__DOT__FA12__DOT__xor1))))));
        tracep->chgBit(oldp+137,((1U & (vlTOPp->i_data_a 
                                        >> 0xdU))));
        tracep->chgBit(oldp+138,((1U & (vlTOPp->i_data_b 
                                        >> 0xdU))));
        tracep->chgBit(oldp+139,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xdU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 0xcU) 
                                         & (IData)(vlTOPp->rca__DOT__FA13__DOT__xor1))))));
        tracep->chgBit(oldp+140,((1U & (vlTOPp->i_data_a 
                                        >> 0xeU))));
        tracep->chgBit(oldp+141,((1U & (vlTOPp->i_data_b 
                                        >> 0xeU))));
        tracep->chgBit(oldp+142,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xeU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 0xdU) 
                                         & (IData)(vlTOPp->rca__DOT__FA14__DOT__xor1))))));
        tracep->chgBit(oldp+143,((1U & (vlTOPp->i_data_a 
                                        >> 0xfU))));
        tracep->chgBit(oldp+144,((1U & (vlTOPp->i_data_b 
                                        >> 0xfU))));
        tracep->chgBit(oldp+145,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0xfU) | 
                                        ((vlTOPp->rca__DOT__carry 
                                          >> 0xeU) 
                                         & (IData)(vlTOPp->rca__DOT__FA15__DOT__xor1))))));
        tracep->chgBit(oldp+146,((1U & (vlTOPp->i_data_a 
                                        >> 0x10U))));
        tracep->chgBit(oldp+147,((1U & (vlTOPp->i_data_b 
                                        >> 0x10U))));
        tracep->chgBit(oldp+148,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x10U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0xfU) 
                                           & (IData)(vlTOPp->rca__DOT__FA16__DOT__xor1))))));
        tracep->chgBit(oldp+149,((1U & (vlTOPp->i_data_a 
                                        >> 0x11U))));
        tracep->chgBit(oldp+150,((1U & (vlTOPp->i_data_b 
                                        >> 0x11U))));
        tracep->chgBit(oldp+151,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x11U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x10U) 
                                           & (IData)(vlTOPp->rca__DOT__FA17__DOT__xor1))))));
        tracep->chgBit(oldp+152,((1U & (vlTOPp->i_data_a 
                                        >> 0x12U))));
        tracep->chgBit(oldp+153,((1U & (vlTOPp->i_data_b 
                                        >> 0x12U))));
        tracep->chgBit(oldp+154,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x12U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x11U) 
                                           & (IData)(vlTOPp->rca__DOT__FA18__DOT__xor1))))));
        tracep->chgBit(oldp+155,((1U & (vlTOPp->i_data_a 
                                        >> 0x13U))));
        tracep->chgBit(oldp+156,((1U & (vlTOPp->i_data_b 
                                        >> 0x13U))));
        tracep->chgBit(oldp+157,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x13U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x12U) 
                                           & (IData)(vlTOPp->rca__DOT__FA19__DOT__xor1))))));
        tracep->chgBit(oldp+158,((1U & (vlTOPp->i_data_a 
                                        >> 0x14U))));
        tracep->chgBit(oldp+159,((1U & (vlTOPp->i_data_b 
                                        >> 0x14U))));
        tracep->chgBit(oldp+160,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x14U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x13U) 
                                           & (IData)(vlTOPp->rca__DOT__FA20__DOT__xor1))))));
        tracep->chgBit(oldp+161,((1U & (vlTOPp->i_data_a 
                                        >> 0x15U))));
        tracep->chgBit(oldp+162,((1U & (vlTOPp->i_data_b 
                                        >> 0x15U))));
        tracep->chgBit(oldp+163,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x15U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x14U) 
                                           & (IData)(vlTOPp->rca__DOT__FA21__DOT__xor1))))));
        tracep->chgBit(oldp+164,((1U & (vlTOPp->i_data_a 
                                        >> 0x16U))));
        tracep->chgBit(oldp+165,((1U & (vlTOPp->i_data_b 
                                        >> 0x16U))));
        tracep->chgBit(oldp+166,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x16U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x15U) 
                                           & (IData)(vlTOPp->rca__DOT__FA22__DOT__xor1))))));
        tracep->chgBit(oldp+167,((1U & (vlTOPp->i_data_a 
                                        >> 0x17U))));
        tracep->chgBit(oldp+168,((1U & (vlTOPp->i_data_b 
                                        >> 0x17U))));
        tracep->chgBit(oldp+169,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x17U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x16U) 
                                           & (IData)(vlTOPp->rca__DOT__FA23__DOT__xor1))))));
        tracep->chgBit(oldp+170,((1U & (vlTOPp->i_data_a 
                                        >> 0x18U))));
        tracep->chgBit(oldp+171,((1U & (vlTOPp->i_data_b 
                                        >> 0x18U))));
        tracep->chgBit(oldp+172,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x18U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x17U) 
                                           & (IData)(vlTOPp->rca__DOT__FA24__DOT__xor1))))));
        tracep->chgBit(oldp+173,((1U & (vlTOPp->i_data_a 
                                        >> 0x19U))));
        tracep->chgBit(oldp+174,((1U & (vlTOPp->i_data_b 
                                        >> 0x19U))));
        tracep->chgBit(oldp+175,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x19U) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x18U) 
                                           & (IData)(vlTOPp->rca__DOT__FA25__DOT__xor1))))));
        tracep->chgBit(oldp+176,((1U & (vlTOPp->i_data_a 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+177,((1U & (vlTOPp->i_data_b 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+178,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1aU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x19U) 
                                           & (IData)(vlTOPp->rca__DOT__FA26__DOT__xor1))))));
        tracep->chgBit(oldp+179,((1U & (vlTOPp->i_data_a 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+180,((1U & (vlTOPp->i_data_b 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+181,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1bU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x1aU) 
                                           & (IData)(vlTOPp->rca__DOT__FA27__DOT__xor1))))));
        tracep->chgBit(oldp+182,((1U & (vlTOPp->i_data_a 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+183,((1U & (vlTOPp->i_data_b 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+184,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1cU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x1bU) 
                                           & (IData)(vlTOPp->rca__DOT__FA28__DOT__xor1))))));
        tracep->chgBit(oldp+185,((1U & (vlTOPp->i_data_a 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+186,((1U & (vlTOPp->i_data_b 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+187,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1dU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x1cU) 
                                           & (IData)(vlTOPp->rca__DOT__FA29__DOT__xor1))))));
        tracep->chgBit(oldp+188,((1U & (vlTOPp->i_data_a 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+189,((1U & (vlTOPp->i_data_b 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+190,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1eU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x1dU) 
                                           & (IData)(vlTOPp->rca__DOT__FA30__DOT__xor1))))));
        tracep->chgBit(oldp+191,((1U & (vlTOPp->i_data_a 
                                        >> 0x1fU))));
        tracep->chgBit(oldp+192,((1U & (vlTOPp->i_data_b 
                                        >> 0x1fU))));
        tracep->chgBit(oldp+193,((1U & (((vlTOPp->i_data_a 
                                          & vlTOPp->i_data_b) 
                                         >> 0x1fU) 
                                        | ((vlTOPp->rca__DOT__carry 
                                            >> 0x1eU) 
                                           & (IData)(vlTOPp->rca__DOT__FA31__DOT__xor1))))));
    }
}

void Vrca::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
