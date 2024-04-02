// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsingle_cycle_cpu.h for the primary calling header

#ifndef VERILATED_VSINGLE_CYCLE_CPU___024ROOT_H_
#define VERILATED_VSINGLE_CYCLE_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vsingle_cycle_cpu__Syms;

class Vsingle_cycle_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(rf_addr,4,0);
    CData/*0:0*/ single_cycle_cpu__DOT__inst_ADDU;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_SUBU;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_SLT;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_AND;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_NOR;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_OR;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_XOR;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_SLL;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_SRL;
    CData/*0:0*/ single_cycle_cpu__DOT__beq_taken;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_add;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_shf_sa;
    CData/*3:0*/ single_cycle_cpu__DOT__dm_wen;
    CData/*0:0*/ single_cycle_cpu__DOT__inst_wdest_rd;
    CData/*0:0*/ single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(mem_addr,31,0);
    VL_OUT(rf_data,31,0);
    VL_OUT(mem_data,31,0);
    VL_OUT(cpu_pc,31,0);
    VL_OUT(cpu_inst,31,0);
    IData/*31:0*/ single_cycle_cpu__DOT__pc;
    IData/*31:0*/ single_cycle_cpu__DOT__next_pc;
    IData/*31:0*/ single_cycle_cpu__DOT__inst;
    IData/*31:0*/ single_cycle_cpu__DOT__rs_value;
    IData/*31:0*/ single_cycle_cpu__DOT__rt_value;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_operand1;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_operand2;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_result;
    IData/*31:0*/ single_cycle_cpu__DOT__dm_rdata;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__add_sub_result;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__or_result;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__adder_operand2;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__sll_step1;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__sll_step2;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__srl_step1;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__srl_step2;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__sra_step1;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT__sra_step2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 20> single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom;
    VlUnpacked<IData/*31:0*/, 32> single_cycle_cpu__DOT__rf_module__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> single_cycle_cpu__DOT__data_ram_module__DOT__DM;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsingle_cycle_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsingle_cycle_cpu___024root(Vsingle_cycle_cpu__Syms* symsp, const char* name);
    ~Vsingle_cycle_cpu___024root();
    VL_UNCOPYABLE(Vsingle_cycle_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
