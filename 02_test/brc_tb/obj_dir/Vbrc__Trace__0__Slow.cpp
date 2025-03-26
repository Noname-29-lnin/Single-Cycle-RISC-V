// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbrc__Syms.h"


VL_ATTR_COLD void Vbrc___024root__trace_init_sub__TOP__0(Vbrc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("brc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"br_un",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"correct_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"total_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"run_test__Vstatic__temp_test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"o_brc_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_brc_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+9,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbrc___024root__trace_init_top(Vbrc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_init_top\n"); );
    // Body
    Vbrc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbrc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbrc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbrc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbrc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbrc___024root__trace_register(Vbrc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vbrc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbrc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbrc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbrc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbrc___024root__trace_const_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbrc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_const_0\n"); );
    // Init
    Vbrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc___024root*>(voidSelf);
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbrc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbrc___024root__trace_const_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+11,(0x64U),32);
}

VL_ATTR_COLD void Vbrc___024root__trace_full_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbrc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_full_0\n"); );
    // Init
    Vbrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc___024root*>(voidSelf);
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbrc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbrc___024root__trace_full_0_sub_0(Vbrc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->brc_tb__DOT__rs1),32);
    bufp->fullIData(oldp+2,(vlSelf->brc_tb__DOT__rs2),32);
    bufp->fullBit(oldp+3,(vlSelf->brc_tb__DOT__br_un));
    bufp->fullBit(oldp+4,((1U & (~ (IData)((0U != (vlSelf->brc_tb__DOT__rs1 
                                                   ^ vlSelf->brc_tb__DOT__rs2)))))));
    bufp->fullIData(oldp+5,(vlSelf->brc_tb__DOT__correct_count),32);
    bufp->fullIData(oldp+6,(vlSelf->brc_tb__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->brc_tb__DOT__run_test__Vstatic__temp_test),32);
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->brc_tb__DOT__br_un)
                                  ? (((vlSelf->brc_tb__DOT__rs1 
                                       ^ vlSelf->brc_tb__DOT__rs2) 
                                      >> 0x1fU) ? (vlSelf->brc_tb__DOT__rs1 
                                                   >> 0x1fU)
                                      : (IData)((vlSelf->brc_tb__DOT__uut__DOT__sub 
                                                 >> 0x20U)))
                                  : (IData)((vlSelf->brc_tb__DOT__uut__DOT__sub 
                                             >> 0x20U))))));
    bufp->fullQData(oldp+9,(vlSelf->brc_tb__DOT__uut__DOT__sub),33);
}
