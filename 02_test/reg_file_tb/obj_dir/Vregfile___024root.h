// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vregfile___024unit;


class Vregfile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile___024root final : public VerilatedModule {
  public:
    // CELLS
    Vregfile___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfile__DOT__clk;
    CData/*0:0*/ tb_regfile__DOT__rst_n;
    CData/*0:0*/ tb_regfile__DOT__rd_wren;
    CData/*4:0*/ tb_regfile__DOT__rs1_addr;
    CData/*4:0*/ tb_regfile__DOT__rs2_addr;
    CData/*4:0*/ tb_regfile__DOT__rd_addr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_regfile__DOT__rd_data;
    IData/*31:0*/ tb_regfile__DOT__uut__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb_regfile__DOT__uut__DOT__r_reg;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile___024root(Vregfile__Syms* symsp, const char* v__name);
    ~Vregfile___024root();
    VL_UNCOPYABLE(Vregfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
