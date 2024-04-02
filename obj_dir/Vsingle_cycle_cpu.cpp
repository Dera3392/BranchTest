// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsingle_cycle_cpu.h"
#include "Vsingle_cycle_cpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsingle_cycle_cpu::Vsingle_cycle_cpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsingle_cycle_cpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , rf_addr{vlSymsp->TOP.rf_addr}
    , mem_addr{vlSymsp->TOP.mem_addr}
    , rf_data{vlSymsp->TOP.rf_data}
    , mem_data{vlSymsp->TOP.mem_data}
    , cpu_pc{vlSymsp->TOP.cpu_pc}
    , cpu_inst{vlSymsp->TOP.cpu_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsingle_cycle_cpu::Vsingle_cycle_cpu(const char* _vcname__)
    : Vsingle_cycle_cpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsingle_cycle_cpu::~Vsingle_cycle_cpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsingle_cycle_cpu___024root___eval_debug_assertions(Vsingle_cycle_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vsingle_cycle_cpu___024root___eval_static(Vsingle_cycle_cpu___024root* vlSelf);
void Vsingle_cycle_cpu___024root___eval_initial(Vsingle_cycle_cpu___024root* vlSelf);
void Vsingle_cycle_cpu___024root___eval_settle(Vsingle_cycle_cpu___024root* vlSelf);
void Vsingle_cycle_cpu___024root___eval(Vsingle_cycle_cpu___024root* vlSelf);

void Vsingle_cycle_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsingle_cycle_cpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsingle_cycle_cpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsingle_cycle_cpu___024root___eval_static(&(vlSymsp->TOP));
        Vsingle_cycle_cpu___024root___eval_initial(&(vlSymsp->TOP));
        Vsingle_cycle_cpu___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsingle_cycle_cpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsingle_cycle_cpu::eventsPending() { return false; }

uint64_t Vsingle_cycle_cpu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsingle_cycle_cpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsingle_cycle_cpu___024root___eval_final(Vsingle_cycle_cpu___024root* vlSelf);

VL_ATTR_COLD void Vsingle_cycle_cpu::final() {
    Vsingle_cycle_cpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsingle_cycle_cpu::hierName() const { return vlSymsp->name(); }
const char* Vsingle_cycle_cpu::modelName() const { return "Vsingle_cycle_cpu"; }
unsigned Vsingle_cycle_cpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsingle_cycle_cpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsingle_cycle_cpu___024root__trace_init_top(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsingle_cycle_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingle_cycle_cpu___024root*>(voidSelf);
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsingle_cycle_cpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_register(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsingle_cycle_cpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsingle_cycle_cpu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsingle_cycle_cpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
