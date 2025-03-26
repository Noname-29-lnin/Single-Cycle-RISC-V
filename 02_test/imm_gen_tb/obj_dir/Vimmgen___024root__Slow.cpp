// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen.h for the primary calling header

#include "Vimmgen__pch.h"
#include "Vimmgen__Syms.h"
#include "Vimmgen___024root.h"

void Vimmgen___024root___ctor_var_reset(Vimmgen___024root* vlSelf);

Vimmgen___024root::Vimmgen___024root(Vimmgen__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimmgen___024root___ctor_var_reset(this);
}

void Vimmgen___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vimmgen___024root::~Vimmgen___024root() {
}
