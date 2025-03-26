// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfull_adder_with_half_adder__Syms.h"
#include "Vfull_adder_with_half_adder.h"



// FUNCTIONS
Vfull_adder_with_half_adder__Syms::Vfull_adder_with_half_adder__Syms(Vfull_adder_with_half_adder* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
