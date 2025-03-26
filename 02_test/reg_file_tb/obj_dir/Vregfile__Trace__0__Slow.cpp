// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


VL_ATTR_COLD void Vregfile___024root__trace_init_sub__TOP__0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rd_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_rd_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"i_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"i_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("r_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile___024root__trace_init_top(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_top\n"); );
    // Body
    Vregfile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregfile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregfile___024root__trace_register(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vregfile___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregfile___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregfile___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregfile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregfile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_const_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vregfile___024root__trace_full_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_regfile__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_regfile__DOT__rd_wren));
    bufp->fullCData(oldp+3,(vlSelf->tb_regfile__DOT__rs1_addr),5);
    bufp->fullCData(oldp+4,(vlSelf->tb_regfile__DOT__rs2_addr),5);
    bufp->fullCData(oldp+5,(vlSelf->tb_regfile__DOT__rd_addr),5);
    bufp->fullIData(oldp+6,(vlSelf->tb_regfile__DOT__rd_data),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_regfile__DOT__uut__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[16]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[17]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[18]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[19]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[20]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[21]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[22]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[23]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[24]),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[25]),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[26]),32);
    bufp->fullIData(oldp+35,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[27]),32);
    bufp->fullIData(oldp+36,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[28]),32);
    bufp->fullIData(oldp+37,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[29]),32);
    bufp->fullIData(oldp+38,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[30]),32);
    bufp->fullIData(oldp+39,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[31]),32);
    bufp->fullBit(oldp+40,(vlSelf->tb_regfile__DOT__clk));
    bufp->fullIData(oldp+41,(((0U != (IData)(vlSelf->tb_regfile__DOT__rs1_addr))
                               ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                              [vlSelf->tb_regfile__DOT__rs1_addr]
                               : 0U)),32);
    bufp->fullIData(oldp+42,(((0U != (IData)(vlSelf->tb_regfile__DOT__rs2_addr))
                               ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                              [vlSelf->tb_regfile__DOT__rs2_addr]
                               : 0U)),32);
}
