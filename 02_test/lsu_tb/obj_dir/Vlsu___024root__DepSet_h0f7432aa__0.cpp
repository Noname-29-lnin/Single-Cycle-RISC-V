// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu___024root.h"

VL_ATTR_COLD void Vlsu___024root___eval_initial__TOP(Vlsu___024root* vlSelf);
VlCoroutine Vlsu___024root___eval_initial__TOP__Vtiming__0(Vlsu___024root* vlSelf);
VlCoroutine Vlsu___024root___eval_initial__TOP__Vtiming__1(Vlsu___024root* vlSelf);

void Vlsu___024root___eval_initial(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_initial\n"); );
    // Body
    Vlsu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vlsu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlsu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__clk__0 
        = vlSelf->lsu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__lsu_tb__DOT__rst_n__0 
        = vlSelf->lsu_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vlsu___024root___eval_initial__TOP__Vtiming__0(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->lsu_tb__DOT__clk = 0U;
    vlSelf->lsu_tb__DOT__rst_n = 0U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0U;
    vlSelf->lsu_tb__DOT__i_st_data = 0U;
    vlSelf->lsu_tb__DOT__i_instr = 0U;
    vlSelf->lsu_tb__DOT__i_io_sw = 0U;
    vlSelf->lsu_tb__DOT__i_io_btn = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x2000U;
    vlSelf->lsu_tb__DOT__i_st_data = 0x2909U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x2000U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("LOAD/STORE: %s\n",32,((0x2909U == (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                                                  | (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                                                     | vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6)))
                                      ? 0x50415353U
                                      : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__i_io_sw = 0x12345678U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7800U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("SW: %s\n",32,((0x12345678U == (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                                              | (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                                                 | vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6)))
                              ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__i_io_btn = 0xaU;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7810U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("BTN: %s\n",32,((0xaU == (0xfU & (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                                                | (vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                                                   | vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6))))
                               ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7020U;
    vlSelf->lsu_tb__DOT__i_st_data = 0xf0f0f0fU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("HEX DISPLAY: %s\n",32,(((0xfU == (0x7fU 
                                                 & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                 [0x20U])) 
                                       & (0xfU == (0x7fU 
                                                   & vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                   [0x21U])))
                                       ? 0x50415353U
                                       : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7010U;
    vlSelf->lsu_tb__DOT__i_st_data = 0x55aa55aaU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("LEDG: %s\n",32,((0x55aa55aaU == ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                 [0x13U] 
                                                 << 0x18U) 
                                                | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                    [0x12U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                       [0x11U] 
                                                       << 8U) 
                                                      | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                      [0x10U]))))
                                ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7000U;
    vlSelf->lsu_tb__DOT__i_st_data = 0xff00ff00U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("LEDR: %s\n",32,((0xff00ff00U == ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                      [0U]))))
                                ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 1U;
    vlSelf->lsu_tb__DOT__i_lsu_addr = 0x7030U;
    vlSelf->lsu_tb__DOT__i_st_data = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->lsu_tb__DOT__lsu_wren = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("LCD: %s\n",32,((0xcafebabeU == ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                [0x33U] 
                                                << 0x18U) 
                                               | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                   [0x32U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                      [0x31U] 
                                                      << 8U) 
                                                     | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                                     [0x30U]))))
                               ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "lsu_tb.sv", 
                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("lsu_tb.sv", 113, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vlsu___024root___eval_initial__TOP__Vtiming__1(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "lsu_tb.sv", 
                                           36);
        vlSelf->lsu_tb__DOT__clk = (1U & (~ (IData)(vlSelf->lsu_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vlsu___024root___act_sequent__TOP__0(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[0U] 
        = vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
        [(0x3eU & vlSelf->lsu_tb__DOT__i_lsu_addr)];
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[1U] 
        = ((0xffU >= ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[2U] 
        = ((0xffU >= ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[3U] 
        = ((0xffU >= ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0U] 
        = (0xffU & vlSelf->lsu_tb__DOT__i_io_sw);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[1U] 
        = (0xffU & (vlSelf->lsu_tb__DOT__i_io_sw >> 8U));
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[2U] 
        = (0xffU & (vlSelf->lsu_tb__DOT__i_io_sw >> 0x10U));
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[3U] 
        = (vlSelf->lsu_tb__DOT__i_io_sw >> 0x18U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0x10U] 
        = vlSelf->lsu_tb__DOT__i_io_btn;
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[0U] 
        = ((0x3fffU >= (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))
            ? ((0x3e7U >= (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr)]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[1U] 
        = ((0x3fffU >= ((IData)(1U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(1U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(1U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[2U] 
        = ((0x3fffU >= ((IData)(2U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(2U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(2U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[3U] 
        = ((0x3fffU >= ((IData)(3U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(3U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(3U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    if ((0x4000U & vlSelf->lsu_tb__DOT__i_instr)) {
        if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                    = vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                    [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)];
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                    = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                    [0U];
            }
            if ((0x1000U & vlSelf->lsu_tb__DOT__i_instr)) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                        [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                       [0U]);
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                        [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                       [0U]);
            }
        }
    }
    if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                          [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)] 
                                          >> 7U)))) 
                        << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                       [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)]);
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                          [0U] >> 7U)))) 
                        << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                       [0U]);
            }
            if ((0x1000U & vlSelf->lsu_tb__DOT__i_instr)) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                    = ((0x1fffe00U & ((- (IData)((1U 
                                                  & (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                                     [1U] 
                                                     >> 7U)))) 
                                      << 9U)) | ((0x100U 
                                                  & (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                     << 7U)) 
                                                 | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                                 [0U]));
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                          [1U] >> 7U)))) 
                        << 0x10U) | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                      [1U] << 8U) | 
                                     vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                     [0U]));
            }
        }
        if ((0x2000U & vlSelf->lsu_tb__DOT__i_instr)) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                             [0U])));
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                             [0U])));
            }
        }
    }
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[0U] 
        = ((0x1fU >= (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1eU & vlSelf->lsu_tb__DOT__i_lsu_addr)]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[1U] 
        = ((0x1fU >= ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[2U] 
        = ((0x1fU >= ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[3U] 
        = ((0x1fU >= ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    if ((0U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xcU)))) {
        vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
            = vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
            [0U];
    }
    if ((0U != (7U & (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xcU)))) {
        if ((1U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
            vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                = ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                    [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                   [0U]);
        }
        if ((1U != (7U & (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
            if ((2U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                              >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                             [0U])));
            }
        }
    }
    if ((0U != (0xfU & (2U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                              >> 0xcU))))) {
        if ((0U != (0xffU & (0x78U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                      >> 8U))))) {
            if ((1U & (~ (IData)((0U != (0xffU & (0x70U 
                                                  ^ 
                                                  (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                   >> 8U)))))))) {
                vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                    = (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                       | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                          | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                             | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                                | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5))));
            }
        }
        if ((1U & (~ (IData)((0U != (0xffU & (0x78U 
                                              ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                 >> 8U)))))))) {
            vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                = (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
                   | (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                      | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2));
        }
    }
    if ((1U & (~ (IData)((0U != (0xfU & (2U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                               >> 0xcU)))))))) {
        vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6 
            = (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
               | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                  | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                     | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                        | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4))));
    }
}

void Vlsu___024root___eval_act(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vlsu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vlsu___024root___nba_sequent__TOP__0(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf__v0;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 = 0;
    SData/*9:0*/ __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6;
    __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6;
    __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 = 0;
    // Body
    __Vdlyvset__lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf__v0 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 = 0U;
    __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 = 0U;
    if ((1U & (~ (IData)(vlSelf->lsu_tb__DOT__rst_n)))) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i = 0ULL;
        while (VL_GTS_IQQ(64, 0x3e8ULL, vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i)) {
            vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h81a15a3f__0 = 0U;
            if (VL_LIKELY((0x3e7U >= (0x3ffU & (IData)(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i))))) {
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[(0x3ffU 
                                                                & (IData)(vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i))] 
                    = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h81a15a3f__0;
            }
            vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i 
                = (1ULL + vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__i);
        }
        __Vdlyvset__lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf__v0 = 1U;
    }
    if (vlSelf->lsu_tb__DOT__rst_n) {
        if (((IData)(vlSelf->lsu_tb__DOT__lsu_wren) 
             & (0x7000U == (0xff00U & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
            if ((0U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                              >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3fU 
                                                                         & vlSelf->lsu_tb__DOT__i_lsu_addr)] 
                    = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
            } else if ((1U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                                     >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3eU 
                                                                         & vlSelf->lsu_tb__DOT__i_lsu_addr)] 
                    = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
                if ((0xffU >= ((IData)(1U) + (0xfeU 
                                              & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3fU 
                                                                             & ((IData)(1U) 
                                                                                + 
                                                                                (0xfeU 
                                                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))] 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 8U));
                }
            } else if ((2U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                                     >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3eU 
                                                                         & vlSelf->lsu_tb__DOT__i_lsu_addr)] 
                    = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
                if ((0xffU >= ((IData)(1U) + (0xfeU 
                                              & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3fU 
                                                                             & ((IData)(1U) 
                                                                                + 
                                                                                (0xfeU 
                                                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))] 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 8U));
                }
                if ((0xffU >= ((IData)(2U) + (0xfeU 
                                              & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3fU 
                                                                             & ((IData)(2U) 
                                                                                + 
                                                                                (0xfeU 
                                                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))] 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 0x10U));
                }
                if ((0xffU >= ((IData)(3U) + (0xfeU 
                                              & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[(0x3fU 
                                                                             & ((IData)(3U) 
                                                                                + 
                                                                                (0xfeU 
                                                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))] 
                        = (vlSelf->lsu_tb__DOT__i_st_data 
                           >> 0x18U);
                }
            }
        }
        if (((IData)(vlSelf->lsu_tb__DOT__lsu_wren) 
             & ((2U == (0xfU & (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                >> 0xcU))) | (3U == 
                                              (0xfU 
                                               & (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                  >> 0xcU)))))) {
            if ((0U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                              >> 0xcU)))) {
                if ((0x3fffU >= (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__0 
                        = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
                    if ((0x3e7U >= (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__0;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0 
                            = (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr);
                    }
                }
            } else if ((1U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                                     >> 0xcU)))) {
                if ((0x3fffU >= (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__1 
                        = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
                    if ((0x3e7U >= (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__1;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1 
                            = (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr);
                    }
                }
                if ((0x3fffU >= ((IData)(1U) + (0xffffU 
                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__0 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 8U));
                    if ((0x3e7U >= (0x3ffU & ((IData)(1U) 
                                              + (0xffffU 
                                                 & vlSelf->lsu_tb__DOT__i_lsu_addr))))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__0;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2 
                            = (0x3ffU & ((IData)(1U) 
                                         + (0xffffU 
                                            & vlSelf->lsu_tb__DOT__i_lsu_addr)));
                    }
                }
            } else if ((2U == (3U & (vlSelf->lsu_tb__DOT__i_instr 
                                     >> 0xcU)))) {
                if ((0x3fffU >= (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__2 
                        = (0xffU & vlSelf->lsu_tb__DOT__i_st_data);
                    if ((0x3e7U >= (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__2;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3 
                            = (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr);
                    }
                }
                if ((0x3fffU >= ((IData)(1U) + (0xffffU 
                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__1 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 8U));
                    if ((0x3e7U >= (0x3ffU & ((IData)(1U) 
                                              + (0xffffU 
                                                 & vlSelf->lsu_tb__DOT__i_lsu_addr))))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__1;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4 
                            = (0x3ffU & ((IData)(1U) 
                                         + (0xffffU 
                                            & vlSelf->lsu_tb__DOT__i_lsu_addr)));
                    }
                }
                if ((0x3fffU >= ((IData)(2U) + (0xffffU 
                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9cfbe__0 
                        = (0xffU & (vlSelf->lsu_tb__DOT__i_st_data 
                                    >> 0x10U));
                    if ((0x3e7U >= (0x3ffU & ((IData)(2U) 
                                              + (0xffffU 
                                                 & vlSelf->lsu_tb__DOT__i_lsu_addr))))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9cfbe__0;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5 
                            = (0x3ffU & ((IData)(2U) 
                                         + (0xffffU 
                                            & vlSelf->lsu_tb__DOT__i_lsu_addr)));
                    }
                }
                if ((0x3fffU >= ((IData)(3U) + (0xffffU 
                                                & vlSelf->lsu_tb__DOT__i_lsu_addr)))) {
                    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9f610__0 
                        = (vlSelf->lsu_tb__DOT__i_st_data 
                           >> 0x18U);
                    if ((0x3e7U >= (0x3ffU & ((IData)(3U) 
                                              + (0xffffU 
                                                 & vlSelf->lsu_tb__DOT__i_lsu_addr))))) {
                        __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 
                            = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9f610__0;
                        __Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 = 1U;
                        __Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6 
                            = (0x3ffU & ((IData)(3U) 
                                         + (0xffffU 
                                            & vlSelf->lsu_tb__DOT__i_lsu_addr)));
                    }
                }
            }
        }
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf__v0) {
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[1U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[2U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[3U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x10U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x11U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x20U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x21U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x22U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x23U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x24U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x25U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x26U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x27U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x30U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x31U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x32U] = 0U;
        vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf[0x33U] = 0U;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v0;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v1;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v2;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v3;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v4;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v5;
    }
    if (__Vdlyvset__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6) {
        vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem[__Vdlyvdim0__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6] 
            = __Vdlyvval__lsu_tb__DOT__uut__DOT__dmem__DOT__dmem__v6;
    }
}

VL_INLINE_OPT void Vlsu___024root___nba_sequent__TOP__1(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0U] 
        = (0xffU & vlSelf->lsu_tb__DOT__i_io_sw);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[1U] 
        = (0xffU & (vlSelf->lsu_tb__DOT__i_io_sw >> 8U));
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[2U] 
        = (0xffU & (vlSelf->lsu_tb__DOT__i_io_sw >> 0x10U));
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[3U] 
        = (vlSelf->lsu_tb__DOT__i_io_sw >> 0x18U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf[0x10U] 
        = vlSelf->lsu_tb__DOT__i_io_btn;
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[0U] 
        = ((0x1fU >= (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1eU & vlSelf->lsu_tb__DOT__i_lsu_addr)]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[1U] 
        = ((0x1fU >= ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[2U] 
        = ((0x1fU >= ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data[3U] 
        = ((0x1fU >= ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf
           [(0x1fU & ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    if ((0U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xcU)))) {
        vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
            = vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
            [0U];
    }
    if ((0U != (7U & (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xcU)))) {
        if ((1U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
            vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                = ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                    [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                   [0U]);
        }
        if ((1U != (7U & (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
            if ((2U == (7U & (vlSelf->lsu_tb__DOT__i_instr 
                              >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data
                                             [0U])));
            }
        }
    }
    if ((0U != (0xfU & (2U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                              >> 0xcU))))) {
        if ((1U & (~ (IData)((0U != (0xffU & (0x78U 
                                              ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                 >> 8U)))))))) {
            vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5 
                = (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0 
                   | (vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1 
                      | vlSelf->lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2));
        }
    }
}

VL_INLINE_OPT void Vlsu___024root___nba_comb__TOP__0(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[0U] 
        = vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
        [(0x3eU & vlSelf->lsu_tb__DOT__i_lsu_addr)];
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[1U] 
        = ((0xffU >= ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(1U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[2U] 
        = ((0xffU >= ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(2U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data[3U] 
        = ((0xffU >= ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
           [(0x3fU & ((IData)(3U) + (0xfeU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
            : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[0U] 
        = ((0x3fffU >= (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))
            ? ((0x3e7U >= (0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & vlSelf->lsu_tb__DOT__i_lsu_addr)]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[1U] 
        = ((0x3fffU >= ((IData)(1U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(1U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(1U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[2U] 
        = ((0x3fffU >= ((IData)(2U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(2U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(2U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data[3U] 
        = ((0x3fffU >= ((IData)(3U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))
            ? ((0x3e7U >= (0x3ffU & ((IData)(3U) + 
                                     (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr))))
                ? vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__dmem
               [(0x3ffU & ((IData)(3U) + (0xffffU & vlSelf->lsu_tb__DOT__i_lsu_addr)))]
                : 0U) : 0U);
    if ((0x4000U & vlSelf->lsu_tb__DOT__i_instr)) {
        if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                    = vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                    [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)];
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                    = vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                    [0U];
            }
            if ((0x1000U & vlSelf->lsu_tb__DOT__i_instr)) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                        [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                       [0U]);
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                        [1U] << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                       [0U]);
            }
        }
    }
    if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                                          [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)] 
                                          >> 7U)))) 
                        << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf
                       [(0x3fU & vlSelf->lsu_tb__DOT__i_lsu_addr)]);
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                          [0U] >> 7U)))) 
                        << 8U) | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                       [0U]);
            }
            if ((0x1000U & vlSelf->lsu_tb__DOT__i_instr)) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                    = ((0x1fffe00U & ((- (IData)((1U 
                                                  & (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                                     [1U] 
                                                     >> 7U)))) 
                                      << 9U)) | ((0x100U 
                                                  & (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                     << 7U)) 
                                                 | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                                 [0U]));
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                    = (((- (IData)((1U & (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                          [1U] >> 7U)))) 
                        << 0x10U) | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                      [1U] << 8U) | 
                                     vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                     [0U]));
            }
        }
        if ((0x2000U & vlSelf->lsu_tb__DOT__i_instr)) {
            if ((1U & (~ (vlSelf->lsu_tb__DOT__i_instr 
                          >> 0xcU)))) {
                vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data
                                             [0U])));
                vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                    = ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                        [3U] << 0x18U) | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                           [2U] << 0x10U) 
                                          | ((vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data
                                             [0U])));
            }
        }
    }
    if ((0U != (0xfU & (2U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                              >> 0xcU))))) {
        if ((0U != (0xffU & (0x78U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                      >> 8U))))) {
            if ((1U & (~ (IData)((0U != (0xffU & (0x70U 
                                                  ^ 
                                                  (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                                   >> 8U)))))))) {
                vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4 
                    = (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1 
                       | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2 
                          | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3 
                             | (vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4 
                                | vlSelf->lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5))));
            }
        }
    }
    if ((1U & (~ (IData)((0U != (0xfU & (2U ^ (vlSelf->lsu_tb__DOT__i_lsu_addr 
                                               >> 0xcU)))))))) {
        vlSelf->lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6 
            = (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0 
               | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1 
                  | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2 
                     | (vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3 
                        | vlSelf->lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4))));
    }
}

void Vlsu___024root___eval_nba(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlsu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vlsu___024root___timing_resume(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vlsu___024root___eval_triggers__act(Vlsu___024root* vlSelf);

bool Vlsu___024root___eval_phase__act(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlsu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vlsu___024root___timing_resume(vlSelf);
        Vlsu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlsu___024root___eval_phase__nba(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlsu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__nba(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__act(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG

void Vlsu___024root___eval(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlsu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lsu_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vlsu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lsu_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vlsu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vlsu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlsu___024root___eval_debug_assertions(Vlsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
