// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VFULL_ADDER_WITH_HALF_ADDER__SYMS_H_
#define _VFULL_ADDER_WITH_HALF_ADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vfull_adder_with_half_adder.h"

// SYMS CLASS
class Vfull_adder_with_half_adder__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vfull_adder_with_half_adder*   TOPp;
    
    // CREATORS
    Vfull_adder_with_half_adder__Syms(Vfull_adder_with_half_adder* topp, const char* namep);
    ~Vfull_adder_with_half_adder__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
