// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimmgen__Syms.h"


VL_ATTR_COLD void Vimmgen___024root__trace_init_sub__TOP__0(Vimmgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_immgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_immgen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_immgen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"L_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"SB_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"UL_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"UA_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"UJ_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"IJ_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimmgen___024root__trace_init_top(Vimmgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_init_top\n"); );
    // Body
    Vimmgen___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimmgen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vimmgen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimmgen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimmgen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vimmgen___024root__trace_register(Vimmgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vimmgen___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vimmgen___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vimmgen___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vimmgen___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vimmgen___024root__trace_const_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimmgen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_const_0\n"); );
    // Init
    Vimmgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen___024root*>(voidSelf);
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimmgen___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimmgen___024root__trace_const_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+3,(0xcU),5);
    bufp->fullCData(oldp+4,(4U),5);
    bufp->fullCData(oldp+5,(8U),5);
    bufp->fullCData(oldp+6,(0U),5);
    bufp->fullCData(oldp+7,(0x18U),5);
    bufp->fullCData(oldp+8,(0xdU),5);
    bufp->fullCData(oldp+9,(5U),5);
    bufp->fullCData(oldp+10,(0x1bU),5);
    bufp->fullCData(oldp+11,(0x19U),5);
}

VL_ATTR_COLD void Vimmgen___024root__trace_full_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimmgen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_full_0\n"); );
    // Init
    Vimmgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen___024root*>(voidSelf);
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimmgen___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimmgen___024root__trace_full_0_sub_0(Vimmgen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_immgen__DOT__i_instr),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_immgen__DOT__o_immgen),32);
}
