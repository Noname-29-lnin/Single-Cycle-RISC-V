// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen.h for the primary calling header

#include "Vimmgen__pch.h"
#include "Vimmgen__Syms.h"
#include "Vimmgen___024root.h"

VL_INLINE_OPT VlCoroutine Vimmgen___024root___eval_initial__TOP__Vtiming__0(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_immgen__DOT__check_result__0__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__0__expected;
    __Vtask_tb_immgen__DOT__check_result__0__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__1__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__1__expected;
    __Vtask_tb_immgen__DOT__check_result__1__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__2__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__2__expected;
    __Vtask_tb_immgen__DOT__check_result__2__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__3__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__3__expected;
    __Vtask_tb_immgen__DOT__check_result__3__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__4__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__4__expected;
    __Vtask_tb_immgen__DOT__check_result__4__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__5__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__5__expected;
    __Vtask_tb_immgen__DOT__check_result__5__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__6__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__6__expected;
    __Vtask_tb_immgen__DOT__check_result__6__expected = 0;
    std::string __Vtask_tb_immgen__DOT__check_result__7__test_name;
    IData/*31:0*/ __Vtask_tb_immgen__DOT__check_result__7__expected;
    __Vtask_tb_immgen__DOT__check_result__7__expected = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6d67656eU;
    __Vtemp_1[2U] = 0x625f696dU;
    __Vtemp_1[3U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_immgen__DOT__i_instr = 0x33U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       30);
    __Vtask_tb_immgen__DOT__check_result__0__expected = 0U;
    __Vtask_tb_immgen__DOT__check_result__0__test_name = 
        std::string{"R-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__0__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__0__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__0__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__0__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__0__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0xfe320493U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       35);
    __Vtask_tb_immgen__DOT__check_result__1__expected = 0xffffffe3U;
    __Vtask_tb_immgen__DOT__check_result__1__test_name = 
        std::string{"I-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__1__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__1__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__1__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__1__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__1__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0x294a203U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       39);
    __Vtask_tb_immgen__DOT__check_result__2__expected = 0x29U;
    __Vtask_tb_immgen__DOT__check_result__2__test_name = 
        std::string{"L-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__2__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__2__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__2__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__2__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__2__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0x922ea3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       44);
    __Vtask_tb_immgen__DOT__check_result__3__expected = 0x1dU;
    __Vtask_tb_immgen__DOT__check_result__3__test_name = 
        std::string{"S-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__3__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__3__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__3__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__3__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__3__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0xfe4481e3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       49);
    __Vtask_tb_immgen__DOT__check_result__4__expected = 0xffffffe2U;
    __Vtask_tb_immgen__DOT__check_result__4__test_name = 
        std::string{"SB-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__4__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__4__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__4__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__4__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__4__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0x2909037U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       54);
    __Vtask_tb_immgen__DOT__check_result__5__expected = 0x2909000U;
    __Vtask_tb_immgen__DOT__check_result__5__test_name = 
        std::string{"U-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__5__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__5__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__5__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__5__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__5__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0x280026fU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       59);
    __Vtask_tb_immgen__DOT__check_result__6__expected = 0x26e00U;
    __Vtask_tb_immgen__DOT__check_result__6__test_name = 
        std::string{"UJ-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__6__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__6__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__6__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__6__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__6__expected);
    }
    vlSelf->tb_immgen__DOT__i_instr = 0x29204e7U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_immgen.sv", 
                                       64);
    __Vtask_tb_immgen__DOT__check_result__7__expected = 0x29U;
    __Vtask_tb_immgen__DOT__check_result__7__test_name = 
        std::string{"IJ-Type Test"};
    if ((vlSelf->tb_immgen__DOT__o_immgen == __Vtask_tb_immgen__DOT__check_result__7__expected)) {
        VL_WRITEF("[%@] PASS: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__7__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__7__expected);
    } else {
        VL_WRITEF("[%@] FAIL: o_immgen = %0# (Expected = %0#)\n",
                  -1,&(__Vtask_tb_immgen__DOT__check_result__7__test_name),
                  32,vlSelf->tb_immgen__DOT__o_immgen,
                  32,__Vtask_tb_immgen__DOT__check_result__7__expected);
    }
    VL_FINISH_MT("tb_immgen.sv", 67, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen___024root___dump_triggers__act(Vimmgen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmgen___024root___eval_triggers__act(Vimmgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimmgen___024root___dump_triggers__act(vlSelf);
    }
#endif
}
