// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_cycle_cpu.h for the primary calling header

#include "verilated.h"

#include "Vsingle_cycle_cpu__Syms.h"
#include "Vsingle_cycle_cpu___024root.h"

void Vsingle_cycle_cpu___024root___ctor_var_reset(Vsingle_cycle_cpu___024root* vlSelf);

Vsingle_cycle_cpu___024root::Vsingle_cycle_cpu___024root(Vsingle_cycle_cpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsingle_cycle_cpu___024root___ctor_var_reset(this);
}

void Vsingle_cycle_cpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsingle_cycle_cpu___024root::~Vsingle_cycle_cpu___024root() {
}
