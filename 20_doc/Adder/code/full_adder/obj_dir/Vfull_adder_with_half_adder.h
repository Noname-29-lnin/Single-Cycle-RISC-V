// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFULL_ADDER_WITH_HALF_ADDER_H_
#define _VFULL_ADDER_WITH_HALF_ADDER_H_  // guard

#include "verilated.h"

//==========

class Vfull_adder_with_half_adder__Syms;

//----------

VL_MODULE(Vfull_adder_with_half_adder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_data_a,0,0);
    VL_IN8(i_data_b,0,0);
    VL_IN8(i_carry,0,0);
    VL_OUT8(o_data,0,0);
    VL_OUT8(o_carry,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ full_adder_with_half_adder__DOT__w1;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfull_adder_with_half_adder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfull_adder_with_half_adder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vfull_adder_with_half_adder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfull_adder_with_half_adder();
    
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
    static void _eval_initial_loop(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfull_adder_with_half_adder__Syms* symsp, bool first);
  private:
    static QData _change_request(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vfull_adder_with_half_adder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
