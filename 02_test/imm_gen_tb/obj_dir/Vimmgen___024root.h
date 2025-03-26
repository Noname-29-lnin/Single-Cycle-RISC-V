// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimmgen.h for the primary calling header

#ifndef VERILATED_VIMMGEN___024ROOT_H_
#define VERILATED_VIMMGEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimmgen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimmgen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_immgen__DOT__i_instr;
    IData/*31:0*/ tb_immgen__DOT__o_immgen;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimmgen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimmgen___024root(Vimmgen__Syms* symsp, const char* v__name);
    ~Vimmgen___024root();
    VL_UNCOPYABLE(Vimmgen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
