// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSINGLE_CYCLE_CPU__SYMS_H_
#define VERILATED_VSINGLE_CYCLE_CPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsingle_cycle_cpu.h"

// INCLUDE MODULE CLASSES
#include "Vsingle_cycle_cpu___024root.h"

// SYMS CLASS (contains all model state)
class Vsingle_cycle_cpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsingle_cycle_cpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsingle_cycle_cpu___024root    TOP;

    // CONSTRUCTORS
    Vsingle_cycle_cpu__Syms(VerilatedContext* contextp, const char* namep, Vsingle_cycle_cpu* modelp);
    ~Vsingle_cycle_cpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
