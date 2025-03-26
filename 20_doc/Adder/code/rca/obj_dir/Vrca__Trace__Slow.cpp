// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrca__Syms.h"


//======================

void Vrca::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vrca::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrca::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vrca::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vrca::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+95,"i_data_a", false,-1, 31,0);
        tracep->declBus(c+96,"i_data_b", false,-1, 31,0);
        tracep->declBus(c+97,"o_data", false,-1, 31,0);
        tracep->declBus(c+95,"rca i_data_a", false,-1, 31,0);
        tracep->declBus(c+96,"rca i_data_b", false,-1, 31,0);
        tracep->declBus(c+97,"rca o_data", false,-1, 31,0);
        tracep->declBus(c+1,"rca carry", false,-1, 31,0);
        tracep->declBit(c+98,"rca FA0 i_data_a", false,-1);
        tracep->declBit(c+99,"rca FA0 i_data_b", false,-1);
        tracep->declBit(c+195,"rca FA0 i_carry", false,-1);
        tracep->declBit(c+100,"rca FA0 o_data", false,-1);
        tracep->declBit(c+101,"rca FA0 o_carry", false,-1);
        tracep->declBit(c+100,"rca FA0 xor1", false,-1);
        tracep->declBit(c+102,"rca FA1 i_data_a", false,-1);
        tracep->declBit(c+103,"rca FA1 i_data_b", false,-1);
        tracep->declBit(c+2,"rca FA1 i_carry", false,-1);
        tracep->declBit(c+3,"rca FA1 o_data", false,-1);
        tracep->declBit(c+104,"rca FA1 o_carry", false,-1);
        tracep->declBit(c+4,"rca FA1 xor1", false,-1);
        tracep->declBit(c+105,"rca FA2 i_data_a", false,-1);
        tracep->declBit(c+106,"rca FA2 i_data_b", false,-1);
        tracep->declBit(c+5,"rca FA2 i_carry", false,-1);
        tracep->declBit(c+6,"rca FA2 o_data", false,-1);
        tracep->declBit(c+107,"rca FA2 o_carry", false,-1);
        tracep->declBit(c+7,"rca FA2 xor1", false,-1);
        tracep->declBit(c+108,"rca FA3 i_data_a", false,-1);
        tracep->declBit(c+109,"rca FA3 i_data_b", false,-1);
        tracep->declBit(c+8,"rca FA3 i_carry", false,-1);
        tracep->declBit(c+9,"rca FA3 o_data", false,-1);
        tracep->declBit(c+110,"rca FA3 o_carry", false,-1);
        tracep->declBit(c+10,"rca FA3 xor1", false,-1);
        tracep->declBit(c+111,"rca FA4 i_data_a", false,-1);
        tracep->declBit(c+112,"rca FA4 i_data_b", false,-1);
        tracep->declBit(c+11,"rca FA4 i_carry", false,-1);
        tracep->declBit(c+12,"rca FA4 o_data", false,-1);
        tracep->declBit(c+113,"rca FA4 o_carry", false,-1);
        tracep->declBit(c+13,"rca FA4 xor1", false,-1);
        tracep->declBit(c+114,"rca FA5 i_data_a", false,-1);
        tracep->declBit(c+115,"rca FA5 i_data_b", false,-1);
        tracep->declBit(c+14,"rca FA5 i_carry", false,-1);
        tracep->declBit(c+15,"rca FA5 o_data", false,-1);
        tracep->declBit(c+116,"rca FA5 o_carry", false,-1);
        tracep->declBit(c+16,"rca FA5 xor1", false,-1);
        tracep->declBit(c+117,"rca FA6 i_data_a", false,-1);
        tracep->declBit(c+118,"rca FA6 i_data_b", false,-1);
        tracep->declBit(c+17,"rca FA6 i_carry", false,-1);
        tracep->declBit(c+18,"rca FA6 o_data", false,-1);
        tracep->declBit(c+119,"rca FA6 o_carry", false,-1);
        tracep->declBit(c+19,"rca FA6 xor1", false,-1);
        tracep->declBit(c+120,"rca FA7 i_data_a", false,-1);
        tracep->declBit(c+121,"rca FA7 i_data_b", false,-1);
        tracep->declBit(c+20,"rca FA7 i_carry", false,-1);
        tracep->declBit(c+21,"rca FA7 o_data", false,-1);
        tracep->declBit(c+122,"rca FA7 o_carry", false,-1);
        tracep->declBit(c+22,"rca FA7 xor1", false,-1);
        tracep->declBit(c+123,"rca FA8 i_data_a", false,-1);
        tracep->declBit(c+124,"rca FA8 i_data_b", false,-1);
        tracep->declBit(c+23,"rca FA8 i_carry", false,-1);
        tracep->declBit(c+24,"rca FA8 o_data", false,-1);
        tracep->declBit(c+125,"rca FA8 o_carry", false,-1);
        tracep->declBit(c+25,"rca FA8 xor1", false,-1);
        tracep->declBit(c+126,"rca FA9 i_data_a", false,-1);
        tracep->declBit(c+127,"rca FA9 i_data_b", false,-1);
        tracep->declBit(c+26,"rca FA9 i_carry", false,-1);
        tracep->declBit(c+27,"rca FA9 o_data", false,-1);
        tracep->declBit(c+128,"rca FA9 o_carry", false,-1);
        tracep->declBit(c+28,"rca FA9 xor1", false,-1);
        tracep->declBit(c+129,"rca FA10 i_data_a", false,-1);
        tracep->declBit(c+130,"rca FA10 i_data_b", false,-1);
        tracep->declBit(c+29,"rca FA10 i_carry", false,-1);
        tracep->declBit(c+30,"rca FA10 o_data", false,-1);
        tracep->declBit(c+131,"rca FA10 o_carry", false,-1);
        tracep->declBit(c+31,"rca FA10 xor1", false,-1);
        tracep->declBit(c+132,"rca FA11 i_data_a", false,-1);
        tracep->declBit(c+133,"rca FA11 i_data_b", false,-1);
        tracep->declBit(c+32,"rca FA11 i_carry", false,-1);
        tracep->declBit(c+33,"rca FA11 o_data", false,-1);
        tracep->declBit(c+134,"rca FA11 o_carry", false,-1);
        tracep->declBit(c+34,"rca FA11 xor1", false,-1);
        tracep->declBit(c+135,"rca FA12 i_data_a", false,-1);
        tracep->declBit(c+136,"rca FA12 i_data_b", false,-1);
        tracep->declBit(c+35,"rca FA12 i_carry", false,-1);
        tracep->declBit(c+36,"rca FA12 o_data", false,-1);
        tracep->declBit(c+137,"rca FA12 o_carry", false,-1);
        tracep->declBit(c+37,"rca FA12 xor1", false,-1);
        tracep->declBit(c+138,"rca FA13 i_data_a", false,-1);
        tracep->declBit(c+139,"rca FA13 i_data_b", false,-1);
        tracep->declBit(c+38,"rca FA13 i_carry", false,-1);
        tracep->declBit(c+39,"rca FA13 o_data", false,-1);
        tracep->declBit(c+140,"rca FA13 o_carry", false,-1);
        tracep->declBit(c+40,"rca FA13 xor1", false,-1);
        tracep->declBit(c+141,"rca FA14 i_data_a", false,-1);
        tracep->declBit(c+142,"rca FA14 i_data_b", false,-1);
        tracep->declBit(c+41,"rca FA14 i_carry", false,-1);
        tracep->declBit(c+42,"rca FA14 o_data", false,-1);
        tracep->declBit(c+143,"rca FA14 o_carry", false,-1);
        tracep->declBit(c+43,"rca FA14 xor1", false,-1);
        tracep->declBit(c+144,"rca FA15 i_data_a", false,-1);
        tracep->declBit(c+145,"rca FA15 i_data_b", false,-1);
        tracep->declBit(c+44,"rca FA15 i_carry", false,-1);
        tracep->declBit(c+45,"rca FA15 o_data", false,-1);
        tracep->declBit(c+146,"rca FA15 o_carry", false,-1);
        tracep->declBit(c+46,"rca FA15 xor1", false,-1);
        tracep->declBit(c+147,"rca FA16 i_data_a", false,-1);
        tracep->declBit(c+148,"rca FA16 i_data_b", false,-1);
        tracep->declBit(c+47,"rca FA16 i_carry", false,-1);
        tracep->declBit(c+48,"rca FA16 o_data", false,-1);
        tracep->declBit(c+149,"rca FA16 o_carry", false,-1);
        tracep->declBit(c+49,"rca FA16 xor1", false,-1);
        tracep->declBit(c+150,"rca FA17 i_data_a", false,-1);
        tracep->declBit(c+151,"rca FA17 i_data_b", false,-1);
        tracep->declBit(c+50,"rca FA17 i_carry", false,-1);
        tracep->declBit(c+51,"rca FA17 o_data", false,-1);
        tracep->declBit(c+152,"rca FA17 o_carry", false,-1);
        tracep->declBit(c+52,"rca FA17 xor1", false,-1);
        tracep->declBit(c+153,"rca FA18 i_data_a", false,-1);
        tracep->declBit(c+154,"rca FA18 i_data_b", false,-1);
        tracep->declBit(c+53,"rca FA18 i_carry", false,-1);
        tracep->declBit(c+54,"rca FA18 o_data", false,-1);
        tracep->declBit(c+155,"rca FA18 o_carry", false,-1);
        tracep->declBit(c+55,"rca FA18 xor1", false,-1);
        tracep->declBit(c+156,"rca FA19 i_data_a", false,-1);
        tracep->declBit(c+157,"rca FA19 i_data_b", false,-1);
        tracep->declBit(c+56,"rca FA19 i_carry", false,-1);
        tracep->declBit(c+57,"rca FA19 o_data", false,-1);
        tracep->declBit(c+158,"rca FA19 o_carry", false,-1);
        tracep->declBit(c+58,"rca FA19 xor1", false,-1);
        tracep->declBit(c+159,"rca FA20 i_data_a", false,-1);
        tracep->declBit(c+160,"rca FA20 i_data_b", false,-1);
        tracep->declBit(c+59,"rca FA20 i_carry", false,-1);
        tracep->declBit(c+60,"rca FA20 o_data", false,-1);
        tracep->declBit(c+161,"rca FA20 o_carry", false,-1);
        tracep->declBit(c+61,"rca FA20 xor1", false,-1);
        tracep->declBit(c+162,"rca FA21 i_data_a", false,-1);
        tracep->declBit(c+163,"rca FA21 i_data_b", false,-1);
        tracep->declBit(c+62,"rca FA21 i_carry", false,-1);
        tracep->declBit(c+63,"rca FA21 o_data", false,-1);
        tracep->declBit(c+164,"rca FA21 o_carry", false,-1);
        tracep->declBit(c+64,"rca FA21 xor1", false,-1);
        tracep->declBit(c+165,"rca FA22 i_data_a", false,-1);
        tracep->declBit(c+166,"rca FA22 i_data_b", false,-1);
        tracep->declBit(c+65,"rca FA22 i_carry", false,-1);
        tracep->declBit(c+66,"rca FA22 o_data", false,-1);
        tracep->declBit(c+167,"rca FA22 o_carry", false,-1);
        tracep->declBit(c+67,"rca FA22 xor1", false,-1);
        tracep->declBit(c+168,"rca FA23 i_data_a", false,-1);
        tracep->declBit(c+169,"rca FA23 i_data_b", false,-1);
        tracep->declBit(c+68,"rca FA23 i_carry", false,-1);
        tracep->declBit(c+69,"rca FA23 o_data", false,-1);
        tracep->declBit(c+170,"rca FA23 o_carry", false,-1);
        tracep->declBit(c+70,"rca FA23 xor1", false,-1);
        tracep->declBit(c+171,"rca FA24 i_data_a", false,-1);
        tracep->declBit(c+172,"rca FA24 i_data_b", false,-1);
        tracep->declBit(c+71,"rca FA24 i_carry", false,-1);
        tracep->declBit(c+72,"rca FA24 o_data", false,-1);
        tracep->declBit(c+173,"rca FA24 o_carry", false,-1);
        tracep->declBit(c+73,"rca FA24 xor1", false,-1);
        tracep->declBit(c+174,"rca FA25 i_data_a", false,-1);
        tracep->declBit(c+175,"rca FA25 i_data_b", false,-1);
        tracep->declBit(c+74,"rca FA25 i_carry", false,-1);
        tracep->declBit(c+75,"rca FA25 o_data", false,-1);
        tracep->declBit(c+176,"rca FA25 o_carry", false,-1);
        tracep->declBit(c+76,"rca FA25 xor1", false,-1);
        tracep->declBit(c+177,"rca FA26 i_data_a", false,-1);
        tracep->declBit(c+178,"rca FA26 i_data_b", false,-1);
        tracep->declBit(c+77,"rca FA26 i_carry", false,-1);
        tracep->declBit(c+78,"rca FA26 o_data", false,-1);
        tracep->declBit(c+179,"rca FA26 o_carry", false,-1);
        tracep->declBit(c+79,"rca FA26 xor1", false,-1);
        tracep->declBit(c+180,"rca FA27 i_data_a", false,-1);
        tracep->declBit(c+181,"rca FA27 i_data_b", false,-1);
        tracep->declBit(c+80,"rca FA27 i_carry", false,-1);
        tracep->declBit(c+81,"rca FA27 o_data", false,-1);
        tracep->declBit(c+182,"rca FA27 o_carry", false,-1);
        tracep->declBit(c+82,"rca FA27 xor1", false,-1);
        tracep->declBit(c+183,"rca FA28 i_data_a", false,-1);
        tracep->declBit(c+184,"rca FA28 i_data_b", false,-1);
        tracep->declBit(c+83,"rca FA28 i_carry", false,-1);
        tracep->declBit(c+84,"rca FA28 o_data", false,-1);
        tracep->declBit(c+185,"rca FA28 o_carry", false,-1);
        tracep->declBit(c+85,"rca FA28 xor1", false,-1);
        tracep->declBit(c+186,"rca FA29 i_data_a", false,-1);
        tracep->declBit(c+187,"rca FA29 i_data_b", false,-1);
        tracep->declBit(c+86,"rca FA29 i_carry", false,-1);
        tracep->declBit(c+87,"rca FA29 o_data", false,-1);
        tracep->declBit(c+188,"rca FA29 o_carry", false,-1);
        tracep->declBit(c+88,"rca FA29 xor1", false,-1);
        tracep->declBit(c+189,"rca FA30 i_data_a", false,-1);
        tracep->declBit(c+190,"rca FA30 i_data_b", false,-1);
        tracep->declBit(c+89,"rca FA30 i_carry", false,-1);
        tracep->declBit(c+90,"rca FA30 o_data", false,-1);
        tracep->declBit(c+191,"rca FA30 o_carry", false,-1);
        tracep->declBit(c+91,"rca FA30 xor1", false,-1);
        tracep->declBit(c+192,"rca FA31 i_data_a", false,-1);
        tracep->declBit(c+193,"rca FA31 i_data_b", false,-1);
        tracep->declBit(c+92,"rca FA31 i_carry", false,-1);
        tracep->declBit(c+93,"rca FA31 o_data", false,-1);
        tracep->declBit(c+194,"rca FA31 o_carry", false,-1);
        tracep->declBit(c+94,"rca FA31 xor1", false,-1);
    }
}

void Vrca::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vrca::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vrca::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vrca__Syms* __restrict vlSymsp = static_cast<Vrca__Syms*>(userp);
    Vrca* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->rca__DOT__carry),32);
        tracep->fullBit(oldp+2,((1U & vlTOPp->rca__DOT__carry)));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->rca__DOT__FA1__DOT__xor1) 
                                       ^ vlTOPp->rca__DOT__carry))));
        tracep->fullBit(oldp+4,(vlTOPp->rca__DOT__FA1__DOT__xor1));
        tracep->fullBit(oldp+5,((1U & (vlTOPp->rca__DOT__carry 
                                       >> 1U))));
        tracep->fullBit(oldp+6,((1U & ((IData)(vlTOPp->rca__DOT__FA2__DOT__xor1) 
                                       ^ (vlTOPp->rca__DOT__carry 
                                          >> 1U)))));
        tracep->fullBit(oldp+7,(vlTOPp->rca__DOT__FA2__DOT__xor1));
        tracep->fullBit(oldp+8,((1U & (vlTOPp->rca__DOT__carry 
                                       >> 2U))));
        tracep->fullBit(oldp+9,((1U & ((IData)(vlTOPp->rca__DOT__FA3__DOT__xor1) 
                                       ^ (vlTOPp->rca__DOT__carry 
                                          >> 2U)))));
        tracep->fullBit(oldp+10,(vlTOPp->rca__DOT__FA3__DOT__xor1));
        tracep->fullBit(oldp+11,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 3U))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->rca__DOT__FA4__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 3U)))));
        tracep->fullBit(oldp+13,(vlTOPp->rca__DOT__FA4__DOT__xor1));
        tracep->fullBit(oldp+14,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 4U))));
        tracep->fullBit(oldp+15,((1U & ((IData)(vlTOPp->rca__DOT__FA5__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 4U)))));
        tracep->fullBit(oldp+16,(vlTOPp->rca__DOT__FA5__DOT__xor1));
        tracep->fullBit(oldp+17,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 5U))));
        tracep->fullBit(oldp+18,((1U & ((IData)(vlTOPp->rca__DOT__FA6__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 5U)))));
        tracep->fullBit(oldp+19,(vlTOPp->rca__DOT__FA6__DOT__xor1));
        tracep->fullBit(oldp+20,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 6U))));
        tracep->fullBit(oldp+21,((1U & ((IData)(vlTOPp->rca__DOT__FA7__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 6U)))));
        tracep->fullBit(oldp+22,(vlTOPp->rca__DOT__FA7__DOT__xor1));
        tracep->fullBit(oldp+23,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 7U))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlTOPp->rca__DOT__FA8__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 7U)))));
        tracep->fullBit(oldp+25,(vlTOPp->rca__DOT__FA8__DOT__xor1));
        tracep->fullBit(oldp+26,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 8U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlTOPp->rca__DOT__FA9__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 8U)))));
        tracep->fullBit(oldp+28,(vlTOPp->rca__DOT__FA9__DOT__xor1));
        tracep->fullBit(oldp+29,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 9U))));
        tracep->fullBit(oldp+30,((1U & ((IData)(vlTOPp->rca__DOT__FA10__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 9U)))));
        tracep->fullBit(oldp+31,(vlTOPp->rca__DOT__FA10__DOT__xor1));
        tracep->fullBit(oldp+32,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xaU))));
        tracep->fullBit(oldp+33,((1U & ((IData)(vlTOPp->rca__DOT__FA11__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xaU)))));
        tracep->fullBit(oldp+34,(vlTOPp->rca__DOT__FA11__DOT__xor1));
        tracep->fullBit(oldp+35,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xbU))));
        tracep->fullBit(oldp+36,((1U & ((IData)(vlTOPp->rca__DOT__FA12__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xbU)))));
        tracep->fullBit(oldp+37,(vlTOPp->rca__DOT__FA12__DOT__xor1));
        tracep->fullBit(oldp+38,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xcU))));
        tracep->fullBit(oldp+39,((1U & ((IData)(vlTOPp->rca__DOT__FA13__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xcU)))));
        tracep->fullBit(oldp+40,(vlTOPp->rca__DOT__FA13__DOT__xor1));
        tracep->fullBit(oldp+41,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xdU))));
        tracep->fullBit(oldp+42,((1U & ((IData)(vlTOPp->rca__DOT__FA14__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xdU)))));
        tracep->fullBit(oldp+43,(vlTOPp->rca__DOT__FA14__DOT__xor1));
        tracep->fullBit(oldp+44,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xeU))));
        tracep->fullBit(oldp+45,((1U & ((IData)(vlTOPp->rca__DOT__FA15__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xeU)))));
        tracep->fullBit(oldp+46,(vlTOPp->rca__DOT__FA15__DOT__xor1));
        tracep->fullBit(oldp+47,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0xfU))));
        tracep->fullBit(oldp+48,((1U & ((IData)(vlTOPp->rca__DOT__FA16__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0xfU)))));
        tracep->fullBit(oldp+49,(vlTOPp->rca__DOT__FA16__DOT__xor1));
        tracep->fullBit(oldp+50,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x10U))));
        tracep->fullBit(oldp+51,((1U & ((IData)(vlTOPp->rca__DOT__FA17__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x10U)))));
        tracep->fullBit(oldp+52,(vlTOPp->rca__DOT__FA17__DOT__xor1));
        tracep->fullBit(oldp+53,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x11U))));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlTOPp->rca__DOT__FA18__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x11U)))));
        tracep->fullBit(oldp+55,(vlTOPp->rca__DOT__FA18__DOT__xor1));
        tracep->fullBit(oldp+56,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x12U))));
        tracep->fullBit(oldp+57,((1U & ((IData)(vlTOPp->rca__DOT__FA19__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x12U)))));
        tracep->fullBit(oldp+58,(vlTOPp->rca__DOT__FA19__DOT__xor1));
        tracep->fullBit(oldp+59,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x13U))));
        tracep->fullBit(oldp+60,((1U & ((IData)(vlTOPp->rca__DOT__FA20__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x13U)))));
        tracep->fullBit(oldp+61,(vlTOPp->rca__DOT__FA20__DOT__xor1));
        tracep->fullBit(oldp+62,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x14U))));
        tracep->fullBit(oldp+63,((1U & ((IData)(vlTOPp->rca__DOT__FA21__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x14U)))));
        tracep->fullBit(oldp+64,(vlTOPp->rca__DOT__FA21__DOT__xor1));
        tracep->fullBit(oldp+65,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x15U))));
        tracep->fullBit(oldp+66,((1U & ((IData)(vlTOPp->rca__DOT__FA22__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x15U)))));
        tracep->fullBit(oldp+67,(vlTOPp->rca__DOT__FA22__DOT__xor1));
        tracep->fullBit(oldp+68,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x16U))));
        tracep->fullBit(oldp+69,((1U & ((IData)(vlTOPp->rca__DOT__FA23__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x16U)))));
        tracep->fullBit(oldp+70,(vlTOPp->rca__DOT__FA23__DOT__xor1));
        tracep->fullBit(oldp+71,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x17U))));
        tracep->fullBit(oldp+72,((1U & ((IData)(vlTOPp->rca__DOT__FA24__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x17U)))));
        tracep->fullBit(oldp+73,(vlTOPp->rca__DOT__FA24__DOT__xor1));
        tracep->fullBit(oldp+74,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x18U))));
        tracep->fullBit(oldp+75,((1U & ((IData)(vlTOPp->rca__DOT__FA25__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x18U)))));
        tracep->fullBit(oldp+76,(vlTOPp->rca__DOT__FA25__DOT__xor1));
        tracep->fullBit(oldp+77,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x19U))));
        tracep->fullBit(oldp+78,((1U & ((IData)(vlTOPp->rca__DOT__FA26__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x19U)))));
        tracep->fullBit(oldp+79,(vlTOPp->rca__DOT__FA26__DOT__xor1));
        tracep->fullBit(oldp+80,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x1aU))));
        tracep->fullBit(oldp+81,((1U & ((IData)(vlTOPp->rca__DOT__FA27__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x1aU)))));
        tracep->fullBit(oldp+82,(vlTOPp->rca__DOT__FA27__DOT__xor1));
        tracep->fullBit(oldp+83,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x1bU))));
        tracep->fullBit(oldp+84,((1U & ((IData)(vlTOPp->rca__DOT__FA28__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x1bU)))));
        tracep->fullBit(oldp+85,(vlTOPp->rca__DOT__FA28__DOT__xor1));
        tracep->fullBit(oldp+86,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x1cU))));
        tracep->fullBit(oldp+87,((1U & ((IData)(vlTOPp->rca__DOT__FA29__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x1cU)))));
        tracep->fullBit(oldp+88,(vlTOPp->rca__DOT__FA29__DOT__xor1));
        tracep->fullBit(oldp+89,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x1dU))));
        tracep->fullBit(oldp+90,((1U & ((IData)(vlTOPp->rca__DOT__FA30__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x1dU)))));
        tracep->fullBit(oldp+91,(vlTOPp->rca__DOT__FA30__DOT__xor1));
        tracep->fullBit(oldp+92,((1U & (vlTOPp->rca__DOT__carry 
                                        >> 0x1eU))));
        tracep->fullBit(oldp+93,((1U & ((IData)(vlTOPp->rca__DOT__FA31__DOT__xor1) 
                                        ^ (vlTOPp->rca__DOT__carry 
                                           >> 0x1eU)))));
        tracep->fullBit(oldp+94,(vlTOPp->rca__DOT__FA31__DOT__xor1));
        tracep->fullIData(oldp+95,(vlTOPp->i_data_a),32);
        tracep->fullIData(oldp+96,(vlTOPp->i_data_b),32);
        tracep->fullIData(oldp+97,(vlTOPp->o_data),32);
        tracep->fullBit(oldp+98,((1U & vlTOPp->i_data_a)));
        tracep->fullBit(oldp+99,((1U & vlTOPp->i_data_b)));
        tracep->fullBit(oldp+100,((1U & (vlTOPp->i_data_a 
                                         ^ vlTOPp->i_data_b))));
        tracep->fullBit(oldp+101,((1U & (vlTOPp->i_data_a 
                                         & vlTOPp->i_data_b))));
        tracep->fullBit(oldp+102,((1U & (vlTOPp->i_data_a 
                                         >> 1U))));
        tracep->fullBit(oldp+103,((1U & (vlTOPp->i_data_b 
                                         >> 1U))));
        tracep->fullBit(oldp+104,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 1U) | 
                                         (vlTOPp->rca__DOT__carry 
                                          & (IData)(vlTOPp->rca__DOT__FA1__DOT__xor1))))));
        tracep->fullBit(oldp+105,((1U & (vlTOPp->i_data_a 
                                         >> 2U))));
        tracep->fullBit(oldp+106,((1U & (vlTOPp->i_data_b 
                                         >> 2U))));
        tracep->fullBit(oldp+107,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 2U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 1U) & (IData)(vlTOPp->rca__DOT__FA2__DOT__xor1))))));
        tracep->fullBit(oldp+108,((1U & (vlTOPp->i_data_a 
                                         >> 3U))));
        tracep->fullBit(oldp+109,((1U & (vlTOPp->i_data_b 
                                         >> 3U))));
        tracep->fullBit(oldp+110,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 3U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 2U) & (IData)(vlTOPp->rca__DOT__FA3__DOT__xor1))))));
        tracep->fullBit(oldp+111,((1U & (vlTOPp->i_data_a 
                                         >> 4U))));
        tracep->fullBit(oldp+112,((1U & (vlTOPp->i_data_b 
                                         >> 4U))));
        tracep->fullBit(oldp+113,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 4U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 3U) & (IData)(vlTOPp->rca__DOT__FA4__DOT__xor1))))));
        tracep->fullBit(oldp+114,((1U & (vlTOPp->i_data_a 
                                         >> 5U))));
        tracep->fullBit(oldp+115,((1U & (vlTOPp->i_data_b 
                                         >> 5U))));
        tracep->fullBit(oldp+116,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 5U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 4U) & (IData)(vlTOPp->rca__DOT__FA5__DOT__xor1))))));
        tracep->fullBit(oldp+117,((1U & (vlTOPp->i_data_a 
                                         >> 6U))));
        tracep->fullBit(oldp+118,((1U & (vlTOPp->i_data_b 
                                         >> 6U))));
        tracep->fullBit(oldp+119,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 6U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 5U) & (IData)(vlTOPp->rca__DOT__FA6__DOT__xor1))))));
        tracep->fullBit(oldp+120,((1U & (vlTOPp->i_data_a 
                                         >> 7U))));
        tracep->fullBit(oldp+121,((1U & (vlTOPp->i_data_b 
                                         >> 7U))));
        tracep->fullBit(oldp+122,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 7U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 6U) & (IData)(vlTOPp->rca__DOT__FA7__DOT__xor1))))));
        tracep->fullBit(oldp+123,((1U & (vlTOPp->i_data_a 
                                         >> 8U))));
        tracep->fullBit(oldp+124,((1U & (vlTOPp->i_data_b 
                                         >> 8U))));
        tracep->fullBit(oldp+125,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 8U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 7U) & (IData)(vlTOPp->rca__DOT__FA8__DOT__xor1))))));
        tracep->fullBit(oldp+126,((1U & (vlTOPp->i_data_a 
                                         >> 9U))));
        tracep->fullBit(oldp+127,((1U & (vlTOPp->i_data_b 
                                         >> 9U))));
        tracep->fullBit(oldp+128,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 9U) | 
                                         ((vlTOPp->rca__DOT__carry 
                                           >> 8U) & (IData)(vlTOPp->rca__DOT__FA9__DOT__xor1))))));
        tracep->fullBit(oldp+129,((1U & (vlTOPp->i_data_a 
                                         >> 0xaU))));
        tracep->fullBit(oldp+130,((1U & (vlTOPp->i_data_b 
                                         >> 0xaU))));
        tracep->fullBit(oldp+131,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xaU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 9U) 
                                            & (IData)(vlTOPp->rca__DOT__FA10__DOT__xor1))))));
        tracep->fullBit(oldp+132,((1U & (vlTOPp->i_data_a 
                                         >> 0xbU))));
        tracep->fullBit(oldp+133,((1U & (vlTOPp->i_data_b 
                                         >> 0xbU))));
        tracep->fullBit(oldp+134,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xbU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xaU) 
                                            & (IData)(vlTOPp->rca__DOT__FA11__DOT__xor1))))));
        tracep->fullBit(oldp+135,((1U & (vlTOPp->i_data_a 
                                         >> 0xcU))));
        tracep->fullBit(oldp+136,((1U & (vlTOPp->i_data_b 
                                         >> 0xcU))));
        tracep->fullBit(oldp+137,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xcU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xbU) 
                                            & (IData)(vlTOPp->rca__DOT__FA12__DOT__xor1))))));
        tracep->fullBit(oldp+138,((1U & (vlTOPp->i_data_a 
                                         >> 0xdU))));
        tracep->fullBit(oldp+139,((1U & (vlTOPp->i_data_b 
                                         >> 0xdU))));
        tracep->fullBit(oldp+140,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xdU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xcU) 
                                            & (IData)(vlTOPp->rca__DOT__FA13__DOT__xor1))))));
        tracep->fullBit(oldp+141,((1U & (vlTOPp->i_data_a 
                                         >> 0xeU))));
        tracep->fullBit(oldp+142,((1U & (vlTOPp->i_data_b 
                                         >> 0xeU))));
        tracep->fullBit(oldp+143,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xeU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xdU) 
                                            & (IData)(vlTOPp->rca__DOT__FA14__DOT__xor1))))));
        tracep->fullBit(oldp+144,((1U & (vlTOPp->i_data_a 
                                         >> 0xfU))));
        tracep->fullBit(oldp+145,((1U & (vlTOPp->i_data_b 
                                         >> 0xfU))));
        tracep->fullBit(oldp+146,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0xfU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xeU) 
                                            & (IData)(vlTOPp->rca__DOT__FA15__DOT__xor1))))));
        tracep->fullBit(oldp+147,((1U & (vlTOPp->i_data_a 
                                         >> 0x10U))));
        tracep->fullBit(oldp+148,((1U & (vlTOPp->i_data_b 
                                         >> 0x10U))));
        tracep->fullBit(oldp+149,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x10U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0xfU) 
                                            & (IData)(vlTOPp->rca__DOT__FA16__DOT__xor1))))));
        tracep->fullBit(oldp+150,((1U & (vlTOPp->i_data_a 
                                         >> 0x11U))));
        tracep->fullBit(oldp+151,((1U & (vlTOPp->i_data_b 
                                         >> 0x11U))));
        tracep->fullBit(oldp+152,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x11U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x10U) 
                                            & (IData)(vlTOPp->rca__DOT__FA17__DOT__xor1))))));
        tracep->fullBit(oldp+153,((1U & (vlTOPp->i_data_a 
                                         >> 0x12U))));
        tracep->fullBit(oldp+154,((1U & (vlTOPp->i_data_b 
                                         >> 0x12U))));
        tracep->fullBit(oldp+155,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x12U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x11U) 
                                            & (IData)(vlTOPp->rca__DOT__FA18__DOT__xor1))))));
        tracep->fullBit(oldp+156,((1U & (vlTOPp->i_data_a 
                                         >> 0x13U))));
        tracep->fullBit(oldp+157,((1U & (vlTOPp->i_data_b 
                                         >> 0x13U))));
        tracep->fullBit(oldp+158,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x13U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x12U) 
                                            & (IData)(vlTOPp->rca__DOT__FA19__DOT__xor1))))));
        tracep->fullBit(oldp+159,((1U & (vlTOPp->i_data_a 
                                         >> 0x14U))));
        tracep->fullBit(oldp+160,((1U & (vlTOPp->i_data_b 
                                         >> 0x14U))));
        tracep->fullBit(oldp+161,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x14U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x13U) 
                                            & (IData)(vlTOPp->rca__DOT__FA20__DOT__xor1))))));
        tracep->fullBit(oldp+162,((1U & (vlTOPp->i_data_a 
                                         >> 0x15U))));
        tracep->fullBit(oldp+163,((1U & (vlTOPp->i_data_b 
                                         >> 0x15U))));
        tracep->fullBit(oldp+164,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x15U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x14U) 
                                            & (IData)(vlTOPp->rca__DOT__FA21__DOT__xor1))))));
        tracep->fullBit(oldp+165,((1U & (vlTOPp->i_data_a 
                                         >> 0x16U))));
        tracep->fullBit(oldp+166,((1U & (vlTOPp->i_data_b 
                                         >> 0x16U))));
        tracep->fullBit(oldp+167,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x16U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x15U) 
                                            & (IData)(vlTOPp->rca__DOT__FA22__DOT__xor1))))));
        tracep->fullBit(oldp+168,((1U & (vlTOPp->i_data_a 
                                         >> 0x17U))));
        tracep->fullBit(oldp+169,((1U & (vlTOPp->i_data_b 
                                         >> 0x17U))));
        tracep->fullBit(oldp+170,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x17U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x16U) 
                                            & (IData)(vlTOPp->rca__DOT__FA23__DOT__xor1))))));
        tracep->fullBit(oldp+171,((1U & (vlTOPp->i_data_a 
                                         >> 0x18U))));
        tracep->fullBit(oldp+172,((1U & (vlTOPp->i_data_b 
                                         >> 0x18U))));
        tracep->fullBit(oldp+173,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x18U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x17U) 
                                            & (IData)(vlTOPp->rca__DOT__FA24__DOT__xor1))))));
        tracep->fullBit(oldp+174,((1U & (vlTOPp->i_data_a 
                                         >> 0x19U))));
        tracep->fullBit(oldp+175,((1U & (vlTOPp->i_data_b 
                                         >> 0x19U))));
        tracep->fullBit(oldp+176,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x19U) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x18U) 
                                            & (IData)(vlTOPp->rca__DOT__FA25__DOT__xor1))))));
        tracep->fullBit(oldp+177,((1U & (vlTOPp->i_data_a 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+178,((1U & (vlTOPp->i_data_b 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+179,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1aU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x19U) 
                                            & (IData)(vlTOPp->rca__DOT__FA26__DOT__xor1))))));
        tracep->fullBit(oldp+180,((1U & (vlTOPp->i_data_a 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+181,((1U & (vlTOPp->i_data_b 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+182,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1bU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x1aU) 
                                            & (IData)(vlTOPp->rca__DOT__FA27__DOT__xor1))))));
        tracep->fullBit(oldp+183,((1U & (vlTOPp->i_data_a 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+184,((1U & (vlTOPp->i_data_b 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+185,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1cU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x1bU) 
                                            & (IData)(vlTOPp->rca__DOT__FA28__DOT__xor1))))));
        tracep->fullBit(oldp+186,((1U & (vlTOPp->i_data_a 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+187,((1U & (vlTOPp->i_data_b 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+188,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1dU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x1cU) 
                                            & (IData)(vlTOPp->rca__DOT__FA29__DOT__xor1))))));
        tracep->fullBit(oldp+189,((1U & (vlTOPp->i_data_a 
                                         >> 0x1eU))));
        tracep->fullBit(oldp+190,((1U & (vlTOPp->i_data_b 
                                         >> 0x1eU))));
        tracep->fullBit(oldp+191,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1eU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x1dU) 
                                            & (IData)(vlTOPp->rca__DOT__FA30__DOT__xor1))))));
        tracep->fullBit(oldp+192,((1U & (vlTOPp->i_data_a 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+193,((1U & (vlTOPp->i_data_b 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+194,((1U & (((vlTOPp->i_data_a 
                                           & vlTOPp->i_data_b) 
                                          >> 0x1fU) 
                                         | ((vlTOPp->rca__DOT__carry 
                                             >> 0x1eU) 
                                            & (IData)(vlTOPp->rca__DOT__FA31__DOT__xor1))))));
        tracep->fullBit(oldp+195,(0U));
    }
}
