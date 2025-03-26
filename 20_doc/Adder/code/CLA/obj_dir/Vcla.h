// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCLA_H_
#define _VCLA_H_  // guard

#include "verilated.h"

//==========

class Vcla__Syms;

//----------

VL_MODULE(Vcla) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT8(o_carry,0,0);
    VL_IN(i_data_a,31,0);
    VL_IN(i_data_b,31,0);
    VL_OUT(o_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ cla__DOT__G;
    IData/*31:0*/ cla__DOT__P;
    QData/*32:0*/ cla__DOT__C;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    QData/*32:0*/ __Vchglast__TOP__cla__DOT__C;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcla__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcla);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcla(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcla();
    
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
    static void _eval_initial_loop(Vcla__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcla__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcla__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vcla__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vcla__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcla__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcla__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcla__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(Vcla__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
