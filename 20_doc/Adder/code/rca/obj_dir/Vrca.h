// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRCA_H_
#define _VRCA_H_  // guard

#include "verilated.h"

//==========

class Vrca__Syms;
class Vrca_VerilatedVcd;


//----------

VL_MODULE(Vrca) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN(i_data_a,31,0);
    VL_IN(i_data_b,31,0);
    VL_OUT(o_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ rca__DOT__FA1__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA2__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA3__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA4__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA5__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA6__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA7__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA8__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA9__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA10__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA11__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA12__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA13__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA14__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA15__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA16__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA17__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA18__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA19__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA20__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA21__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA22__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA23__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA24__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA25__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA26__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA27__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA28__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA29__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA30__DOT__xor1;
    CData/*0:0*/ rca__DOT__FA31__DOT__xor1;
    IData/*31:0*/ rca__DOT__carry;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ rca__DOT____Vcellout__FA1__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA2__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA3__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA4__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA5__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA6__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA7__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA8__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA9__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA10__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA11__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA12__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA13__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA14__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA15__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA16__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA17__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA18__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA19__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA20__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA21__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA22__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA23__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA24__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA25__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA26__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA27__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA28__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA29__o_carry;
    CData/*0:0*/ rca__DOT____Vcellout__FA30__o_carry;
    IData/*31:0*/ __Vchglast__TOP__rca__DOT__carry;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrca__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrca);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrca(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrca();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vrca__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vrca__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrca__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vrca__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vrca__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vrca__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vrca__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vrca__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
