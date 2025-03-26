// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbrc.h for the primary calling header

#ifndef VERILATED_VBRC___024ROOT_H_
#define VERILATED_VBRC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbrc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbrc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ brc_tb__DOT__br_un;
    CData/*0:0*/ brc_tb__DOT__equal;
    CData/*0:0*/ brc_tb__DOT__less;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ brc_tb__DOT__rs1;
    IData/*31:0*/ brc_tb__DOT__rs2;
    IData/*31:0*/ brc_tb__DOT__correct_count;
    IData/*31:0*/ brc_tb__DOT__i;
    IData/*31:0*/ brc_tb__DOT__run_test__Vstatic__temp_test;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ brc_tb__DOT__uut__DOT__sub;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbrc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbrc___024root(Vbrc__Syms* symsp, const char* v__name);
    ~Vbrc___024root();
    VL_UNCOPYABLE(Vbrc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
