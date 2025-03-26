// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc.h for the primary calling header

#include "Vbrc__pch.h"
#include "Vbrc__Syms.h"
#include "Vbrc___024root.h"

void Vbrc___024root___ctor_var_reset(Vbrc___024root* vlSelf);

Vbrc___024root::Vbrc___024root(Vbrc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbrc___024root___ctor_var_reset(this);
}

void Vbrc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbrc___024root::~Vbrc___024root() {
}
