// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsu.h for the primary calling header

#ifndef VERILATED_VLSU___024ROOT_H_
#define VERILATED_VLSU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vlsu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlsu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ lsu_tb__DOT__clk;
    CData/*0:0*/ lsu_tb__DOT__rst_n;
    CData/*0:0*/ lsu_tb__DOT__lsu_wren;
    CData/*3:0*/ lsu_tb__DOT__i_io_btn;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__0;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__1;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__0;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h899268de__2;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c98033__1;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9cfbe__0;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h47c9f610__0;
    CData/*7:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT____Vlvbound_h81a15a3f__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lsu_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lsu_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ lsu_tb__DOT__i_lsu_addr;
    IData/*31:0*/ lsu_tb__DOT__i_st_data;
    IData/*31:0*/ lsu_tb__DOT__i_instr;
    IData/*31:0*/ lsu_tb__DOT__i_io_sw;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out4;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out5;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__o_ld_data__out__strong__out6;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out0;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out1;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__input_buf__DOT__o_input_buf_data__out__strong__out2;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out1;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out2;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out3;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out4;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__output_buf__DOT__o_output_buf_data__out__strong__out5;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out0;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out1;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out2;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out3;
    IData/*31:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__o_dmem_data__out__strong__out4;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ lsu_tb__DOT__uut__DOT__dmem__DOT__i;
    VlUnpacked<CData/*7:0*/, 32> lsu_tb__DOT__uut__DOT__input_buf__DOT__in_buf;
    VlUnpacked<CData/*7:0*/, 4> lsu_tb__DOT__uut__DOT__input_buf__DOT__temp_data;
    VlUnpacked<CData/*7:0*/, 64> lsu_tb__DOT__uut__DOT__output_buf__DOT__out_buf;
    VlUnpacked<CData/*7:0*/, 4> lsu_tb__DOT__uut__DOT__output_buf__DOT__temp_data;
    VlUnpacked<CData/*7:0*/, 4> lsu_tb__DOT__uut__DOT__dmem__DOT__temp_data;
    VlUnpacked<CData/*7:0*/, 1000> lsu_tb__DOT__uut__DOT__dmem__DOT__dmem;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlsu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsu___024root(Vlsu__Syms* symsp, const char* v__name);
    ~Vlsu___024root();
    VL_UNCOPYABLE(Vlsu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
