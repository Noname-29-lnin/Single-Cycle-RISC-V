// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


void Vregfile___024root__trace_chg_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregfile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_chg_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregfile___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregfile___024root__trace_chg_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_regfile__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_regfile__DOT__rd_wren));
        bufp->chgCData(oldp+2,(vlSelf->tb_regfile__DOT__rs1_addr),5);
        bufp->chgCData(oldp+3,(vlSelf->tb_regfile__DOT__rs2_addr),5);
        bufp->chgCData(oldp+4,(vlSelf->tb_regfile__DOT__rd_addr),5);
        bufp->chgIData(oldp+5,(vlSelf->tb_regfile__DOT__rd_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->tb_regfile__DOT__uut__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[3]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[4]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[5]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[6]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[7]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[8]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[9]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[10]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[11]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[12]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[13]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[14]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[15]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[16]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[17]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[18]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[19]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[20]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[21]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[22]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[23]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[24]),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[25]),32);
        bufp->chgIData(oldp+33,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[26]),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[27]),32);
        bufp->chgIData(oldp+35,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[28]),32);
        bufp->chgIData(oldp+36,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[29]),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[30]),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_regfile__DOT__uut__DOT__r_reg[31]),32);
    }
    bufp->chgBit(oldp+39,(vlSelf->tb_regfile__DOT__clk));
    bufp->chgIData(oldp+40,(((0U != (IData)(vlSelf->tb_regfile__DOT__rs1_addr))
                              ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                             [vlSelf->tb_regfile__DOT__rs1_addr]
                              : 0U)),32);
    bufp->chgIData(oldp+41,(((0U != (IData)(vlSelf->tb_regfile__DOT__rs2_addr))
                              ? vlSelf->tb_regfile__DOT__uut__DOT__r_reg
                             [vlSelf->tb_regfile__DOT__rs2_addr]
                              : 0U)),32);
}

void Vregfile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_cleanup\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
