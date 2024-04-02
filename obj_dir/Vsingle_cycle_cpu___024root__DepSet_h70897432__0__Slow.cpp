// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_cycle_cpu.h for the primary calling header

#include "verilated.h"

#include "Vsingle_cycle_cpu___024root.h"

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_static(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_initial__TOP(Vsingle_cycle_cpu___024root* vlSelf);

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_initial(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_initial\n"); );
    // Body
    Vsingle_cycle_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_initial__TOP(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0U] = 0x2401000aU;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[1U] = 0x11082U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[2U] = 0x411821U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[3U] = 0x32100U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[4U] = 0x822823U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[5U] = 0xac250016U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[6U] = 0xa23027U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[7U] = 0xc33825U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[8U] = 0xe64026U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[9U] = 0xac08001cU;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xaU] = 0xc7482aU;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xbU] = 0x11210002U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xcU] = 0x24010004U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xdU] = 0x8c2a0016U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xeU] = 0x15450003U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0xfU] = 0x415824U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0x10U] = 0xac0b001cU;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0x11U] = 0xac040010U;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0x12U] = 0x3c0c000cU;
    vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0x13U] = 0x8000000U;
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_final(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_triggers__stl(Vsingle_cycle_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__stl(Vsingle_cycle_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_stl(Vsingle_cycle_cpu___024root* vlSelf);

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_settle(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsingle_cycle_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsingle_cycle_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("single_cycle_cpu.v", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsingle_cycle_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__stl(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___stl_sequent__TOP__0(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ single_cycle_cpu__DOT____VdfgTmp_hca52443f__0;
    CData/*0:0*/ single_cycle_cpu__DOT____VdfgTmp_h6b86a6e1__0;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0;
    // Body
    vlSelf->cpu_pc = vlSelf->single_cycle_cpu__DOT__pc;
    vlSelf->rf_data = ((0x10U & (IData)(vlSelf->rf_addr))
                        ? ((8U & (IData)(vlSelf->rf_addr))
                            ? ((4U & (IData)(vlSelf->rf_addr))
                                ? ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x1fU] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x1eU]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->rf_addr))
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x1dU]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x1cU]))
                                : ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x1bU] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x1aU]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->rf_addr))
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x19U]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x18U])))
                            : ((4U & (IData)(vlSelf->rf_addr))
                                ? ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x17U] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x16U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->rf_addr))
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x15U]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x14U]))
                                : ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x13U] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0x12U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->rf_addr))
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x11U]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                   [0x10U]))))
                        : ((8U & (IData)(vlSelf->rf_addr))
                            ? ((4U & (IData)(vlSelf->rf_addr))
                                ? ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0xfU] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0xeU]) : ((1U 
                                                   & (IData)(vlSelf->rf_addr))
                                                   ? 
                                                  vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                  [0xdU]
                                                   : 
                                                  vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                  [0xcU]))
                                : ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0xbU] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [0xaU]) : ((1U 
                                                   & (IData)(vlSelf->rf_addr))
                                                   ? 
                                                  vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                  [9U]
                                                   : 
                                                  vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                  [8U])))
                            : ((4U & (IData)(vlSelf->rf_addr))
                                ? ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [7U] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [6U]) : ((1U 
                                                 & (IData)(vlSelf->rf_addr))
                                                 ? 
                                                vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                [5U]
                                                 : 
                                                vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                [4U]))
                                : ((2U & (IData)(vlSelf->rf_addr))
                                    ? ((1U & (IData)(vlSelf->rf_addr))
                                        ? vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [3U] : vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                       [2U]) : ((1U 
                                                 & (IData)(vlSelf->rf_addr))
                                                 ? 
                                                vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                [1U]
                                                 : 0U)))));
    vlSelf->mem_data = ((0x40U & vlSelf->mem_addr) ? 
                        ((0x20U & vlSelf->mem_addr)
                          ? ((0x10U & vlSelf->mem_addr)
                              ? ((8U & vlSelf->mem_addr)
                                  ? ((4U & vlSelf->mem_addr)
                                      ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x1fU] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x1eU]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x1dU]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x1cU]))
                              : ((8U & vlSelf->mem_addr)
                                  ? ((4U & vlSelf->mem_addr)
                                      ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x1bU] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x1aU]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x19U]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x18U])))
                          : ((0x10U & vlSelf->mem_addr)
                              ? ((8U & vlSelf->mem_addr)
                                  ? ((4U & vlSelf->mem_addr)
                                      ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x17U] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x16U]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x15U]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x14U]))
                              : ((8U & vlSelf->mem_addr)
                                  ? ((4U & vlSelf->mem_addr)
                                      ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x13U] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                     [0x12U]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x11U]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0x10U]))))
                         : ((0x20U & vlSelf->mem_addr)
                             ? ((0x10U & vlSelf->mem_addr)
                                 ? ((8U & vlSelf->mem_addr)
                                     ? ((4U & vlSelf->mem_addr)
                                         ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [0xfU] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [0xeU]) : (
                                                   (4U 
                                                    & vlSelf->mem_addr)
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                   [0xdU]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                   [0xcU]))
                                 : ((8U & vlSelf->mem_addr)
                                     ? ((4U & vlSelf->mem_addr)
                                         ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [0xbU] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [0xaU]) : (
                                                   (4U 
                                                    & vlSelf->mem_addr)
                                                    ? 
                                                   vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                   [9U]
                                                    : 
                                                   vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                   [8U])))
                             : ((0x10U & vlSelf->mem_addr)
                                 ? ((8U & vlSelf->mem_addr)
                                     ? ((4U & vlSelf->mem_addr)
                                         ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [7U] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [6U]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [5U]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [4U]))
                                 : ((8U & vlSelf->mem_addr)
                                     ? ((4U & vlSelf->mem_addr)
                                         ? vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [3U] : vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                        [2U]) : ((4U 
                                                  & vlSelf->mem_addr)
                                                  ? 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [1U]
                                                  : 
                                                 vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                 [0U])))));
    vlSelf->single_cycle_cpu__DOT__inst = ((0x40U & vlSelf->single_cycle_cpu__DOT__pc)
                                            ? ((0x20U 
                                                & vlSelf->single_cycle_cpu__DOT__pc)
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    & vlSelf->single_cycle_cpu__DOT__pc)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0x13U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0x12U])
                                                     : 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0x11U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0x10U]))))
                                            : ((0x20U 
                                                & vlSelf->single_cycle_cpu__DOT__pc)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->single_cycle_cpu__DOT__pc)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xfU]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xeU])
                                                     : 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xdU]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xcU]))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xbU]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0xaU])
                                                     : 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [9U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [8U])))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->single_cycle_cpu__DOT__pc)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [7U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [6U])
                                                     : 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [5U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [4U]))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [3U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [2U])
                                                     : 
                                                    ((4U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)
                                                      ? 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [1U]
                                                      : 
                                                     vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom
                                                     [0U])))));
    vlSelf->cpu_inst = vlSelf->single_cycle_cpu__DOT__inst;
    vlSelf->single_cycle_cpu__DOT__dm_wen = (0xfU & 
                                             (- (IData)(
                                                        ((0x2bU 
                                                          == 
                                                          (vlSelf->single_cycle_cpu__DOT__inst 
                                                           >> 0x1aU)) 
                                                         & (IData)(vlSelf->resetn)))));
    vlSelf->single_cycle_cpu__DOT__rt_value = ((0x100000U 
                                                & vlSelf->single_cycle_cpu__DOT__inst)
                                                ? (
                                                   (0x80000U 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1fU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1eU])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1dU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1cU]))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1bU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1aU])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x19U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x18U])))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x17U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x16U])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x15U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x14U]))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x13U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x12U])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x11U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x10U]))))
                                                : (
                                                   (0x80000U 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xfU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xeU])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xdU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xcU]))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xbU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xaU])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [9U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [8U])))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [7U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [6U])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [5U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [4U]))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [3U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [2U])
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [1U]
                                                       : 0U)))));
    vlSelf->single_cycle_cpu__DOT__rs_value = ((0x2000000U 
                                                & vlSelf->single_cycle_cpu__DOT__inst)
                                                ? (
                                                   (0x1000000U 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)
                                                    ? 
                                                   ((0x800000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1fU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1eU])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1dU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1cU]))
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1bU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x1aU])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x19U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x18U])))
                                                    : 
                                                   ((0x800000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x17U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x16U])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x15U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x14U]))
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x13U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x12U])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x11U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0x10U]))))
                                                : (
                                                   (0x1000000U 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)
                                                    ? 
                                                   ((0x800000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xfU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xeU])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xdU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xcU]))
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xbU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [0xaU])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [9U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [8U])))
                                                    : 
                                                   ((0x800000U 
                                                     & vlSelf->single_cycle_cpu__DOT__inst)
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [7U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [6U])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [5U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [4U]))
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->single_cycle_cpu__DOT__inst)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [3U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [2U])
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->single_cycle_cpu__DOT__inst)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf
                                                      [1U]
                                                       : 0U)))));
    single_cycle_cpu__DOT____VdfgTmp_hca52443f__0 = 
        (1U & ((~ (IData)((0U != (vlSelf->single_cycle_cpu__DOT__inst 
                                  >> 0x1aU)))) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1fU 
                                                              & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                 >> 6U)))))));
    vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0 
        = ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                      >> 0x1aU)) | (0x2bU == (vlSelf->single_cycle_cpu__DOT__inst 
                                              >> 0x1aU)));
    single_cycle_cpu__DOT____VdfgTmp_h6b86a6e1__0 = (IData)(
                                                            ((0U 
                                                              == 
                                                              (0x3e00000U 
                                                               & vlSelf->single_cycle_cpu__DOT__inst)) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->single_cycle_cpu__DOT__inst 
                                                                            >> 0x1aU))))));
    vlSelf->single_cycle_cpu__DOT__beq_taken = (vlSelf->single_cycle_cpu__DOT__rs_value 
                                                == vlSelf->single_cycle_cpu__DOT__rt_value);
    vlSelf->single_cycle_cpu__DOT__inst_SUBU = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                                & (0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_SLT = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                               & (0x2aU 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_AND = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                               & (0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_NOR = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                               & (0x27U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_OR = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                              & (0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_XOR = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                               & (0x26U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_ADDU = ((IData)(single_cycle_cpu__DOT____VdfgTmp_hca52443f__0) 
                                                & (0x21U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__alu_operand2 = (
                                                   ((9U 
                                                     == 
                                                     (vlSelf->single_cycle_cpu__DOT__inst 
                                                      >> 0x1aU)) 
                                                    | ((0xfU 
                                                        == 
                                                        (vlSelf->single_cycle_cpu__DOT__inst 
                                                         >> 0x1aU)) 
                                                       | (IData)(vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0)))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->single_cycle_cpu__DOT__inst))
                                                    : vlSelf->single_cycle_cpu__DOT__rt_value);
    vlSelf->single_cycle_cpu__DOT__inst_SLL = ((IData)(single_cycle_cpu__DOT____VdfgTmp_h6b86a6e1__0) 
                                               & (0U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__inst_SRL = ((IData)(single_cycle_cpu__DOT____VdfgTmp_h6b86a6e1__0) 
                                               & (2U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->single_cycle_cpu__DOT__inst)));
    vlSelf->single_cycle_cpu__DOT__next_pc = (((2U 
                                                == 
                                                (vlSelf->single_cycle_cpu__DOT__inst 
                                                 >> 0x1aU)) 
                                               | (((4U 
                                                    == 
                                                    (vlSelf->single_cycle_cpu__DOT__inst 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                                  | ((~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                                     & (5U 
                                                        == 
                                                        (vlSelf->single_cycle_cpu__DOT__inst 
                                                         >> 0x1aU)))))
                                               ? ((2U 
                                                   == 
                                                   (vlSelf->single_cycle_cpu__DOT__inst 
                                                    >> 0x1aU))
                                                   ? 
                                                  ((0xf0000000U 
                                                    & vlSelf->single_cycle_cpu__DOT__pc) 
                                                   | (0xffffffcU 
                                                      & (vlSelf->single_cycle_cpu__DOT__inst 
                                                         << 2U)))
                                                   : 
                                                  ((((vlSelf->single_cycle_cpu__DOT__pc 
                                                      >> 2U) 
                                                     + 
                                                     ((0x3fff0000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                         >> 0xfU)))) 
                                                          << 0x10U)) 
                                                      | (0xffffU 
                                                         & vlSelf->single_cycle_cpu__DOT__inst))) 
                                                    << 2U) 
                                                   | (3U 
                                                      & vlSelf->single_cycle_cpu__DOT__pc)))
                                               : ((
                                                   ((IData)(1U) 
                                                    + 
                                                    (vlSelf->single_cycle_cpu__DOT__pc 
                                                     >> 2U)) 
                                                   << 2U) 
                                                  | (3U 
                                                     & vlSelf->single_cycle_cpu__DOT__pc)));
    vlSelf->single_cycle_cpu__DOT__inst_add = ((IData)(vlSelf->single_cycle_cpu__DOT__inst_ADDU) 
                                               | ((9U 
                                                   == 
                                                   (vlSelf->single_cycle_cpu__DOT__inst 
                                                    >> 0x1aU)) 
                                                  | (IData)(vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0)));
    vlSelf->single_cycle_cpu__DOT__inst_shf_sa = ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLL) 
                                                  | (IData)(vlSelf->single_cycle_cpu__DOT__inst_SRL));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2 
        = ((IData)(vlSelf->single_cycle_cpu__DOT__inst_add)
            ? vlSelf->single_cycle_cpu__DOT__alu_operand2
            : (~ vlSelf->single_cycle_cpu__DOT__alu_operand2));
    vlSelf->single_cycle_cpu__DOT__inst_wdest_rd = 
        ((IData)(vlSelf->single_cycle_cpu__DOT__inst_ADDU) 
         | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SUBU) 
            | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLT) 
               | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_AND) 
                  | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_NOR) 
                     | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_OR) 
                        | ((IData)(vlSelf->single_cycle_cpu__DOT__inst_XOR) 
                           | (IData)(vlSelf->single_cycle_cpu__DOT__inst_shf_sa))))))));
    vlSelf->single_cycle_cpu__DOT__alu_operand1 = ((IData)(vlSelf->single_cycle_cpu__DOT__inst_shf_sa)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->single_cycle_cpu__DOT__inst 
                                                       >> 6U))
                                                    : vlSelf->single_cycle_cpu__DOT__rs_value);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result 
        = (vlSelf->single_cycle_cpu__DOT__alu_operand1 
           | vlSelf->single_cycle_cpu__DOT__alu_operand2);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result 
        = (vlSelf->single_cycle_cpu__DOT__alu_operand1 
           + (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2 
              + (1U & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add)))));
    single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0 
        = ((- (IData)((0U == (3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
           & vlSelf->single_cycle_cpu__DOT__alu_operand2);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
        = (single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0 
           | (((- (IData)((1U == (3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
               & ((0x80000000U & vlSelf->single_cycle_cpu__DOT__alu_operand2) 
                  | (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                     >> 1U))) | (((- (IData)((2U == 
                                              (3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                                  & (((- (IData)((vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                                  >> 0x1fU))) 
                                      << 0x1eU) | (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                                   >> 2U))) 
                                 | ((- (IData)((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                                    & (((- (IData)(
                                                   (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                                    >> 0x1fU))) 
                                        << 0x1dU) | 
                                       (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                        >> 3U))))));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1 
        = (single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0 
           | (((- (IData)((1U == (3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
               & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                  << 1U)) | (((- (IData)((2U == (3U 
                                                 & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                              & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                 << 2U)) | ((- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                                            & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                               << 3U)))));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1 
        = (single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0 
           | (((- (IData)((1U == (3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
               & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                  >> 1U)) | (((- (IData)((2U == (3U 
                                                 & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                              & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                 >> 2U)) | ((- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->single_cycle_cpu__DOT__alu_operand1)))) 
                                            & (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                               >> 3U)))));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 
        = (((- (IData)((0U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                     >> 2U))))) & vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1) 
           | (((- (IData)((1U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                        >> 2U))))) 
               & (((- (IData)((vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                               >> 0x1fU))) << 0x1cU) 
                  | (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                     >> 4U))) | (((- (IData)((2U == 
                                              (3U & 
                                               (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                >> 2U))))) 
                                  & (((- (IData)((vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                                                  >> 0x1fU))) 
                                      << 0x18U) | (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                                                   >> 8U))) 
                                 | ((- (IData)((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                    >> 2U))))) 
                                    & (((- (IData)(
                                                   (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 
                                        >> 0xcU))))));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2 
        = (((- (IData)((0U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                     >> 2U))))) & vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1) 
           | (((- (IData)((1U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                        >> 2U))))) 
               & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1 
                  << 4U)) | (((- (IData)((2U == (3U 
                                                 & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                    >> 2U))))) 
                              & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1 
                                 << 8U)) | ((- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                            >> 2U))))) 
                                            & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1 
                                               << 0xcU)))));
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2 
        = (((- (IData)((0U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                     >> 2U))))) & vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1) 
           | (((- (IData)((1U == (3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                        >> 2U))))) 
               & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1 
                  >> 4U)) | (((- (IData)((2U == (3U 
                                                 & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                    >> 2U))))) 
                              & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1 
                                 >> 8U)) | ((- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                            >> 2U))))) 
                                            & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1 
                                               >> 0xcU)))));
    vlSelf->single_cycle_cpu__DOT__alu_result = (((IData)(vlSelf->single_cycle_cpu__DOT__inst_add) 
                                                  | (IData)(vlSelf->single_cycle_cpu__DOT__inst_SUBU))
                                                  ? vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result
                                                  : 
                                                 ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLT)
                                                   ? 
                                                  (1U 
                                                   & (((~ 
                                                        (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                          >> 0x1fU)) 
                                                      | ((~ 
                                                          ((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                            ^ vlSelf->single_cycle_cpu__DOT__alu_operand2) 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result 
                                                            >> 0x1fU))))
                                                   : 
                                                  ((IData)(vlSelf->single_cycle_cpu__DOT__inst_AND)
                                                    ? 
                                                   (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                    & vlSelf->single_cycle_cpu__DOT__alu_operand2)
                                                    : 
                                                   ((IData)(vlSelf->single_cycle_cpu__DOT__inst_NOR)
                                                     ? 
                                                    (~ vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result)
                                                     : 
                                                    ((IData)(vlSelf->single_cycle_cpu__DOT__inst_OR)
                                                      ? vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result
                                                      : 
                                                     ((IData)(vlSelf->single_cycle_cpu__DOT__inst_XOR)
                                                       ? 
                                                      (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                                       ^ vlSelf->single_cycle_cpu__DOT__alu_operand2)
                                                       : 
                                                      ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLL)
                                                        ? 
                                                       ((0x10U 
                                                         & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                                                         ? 
                                                        (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2 
                                                         << 0x10U)
                                                         : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2)
                                                        : 
                                                       ((IData)(vlSelf->single_cycle_cpu__DOT__inst_SRL)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                                                          ? 
                                                         (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2 
                                                          >> 0x10U)
                                                          : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (vlSelf->single_cycle_cpu__DOT__inst 
                                                           >> 0x1aU))
                                                          ? 
                                                         (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                                          << 0x10U)
                                                          : 0U)))))))));
    vlSelf->single_cycle_cpu__DOT__dm_rdata = ((0x40U 
                                                & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1fU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1eU])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1dU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1cU]))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1bU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x1aU])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x19U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x18U])))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x17U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x16U])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x15U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x14U]))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x13U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x12U])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x11U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0x10U]))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xfU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xeU])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xdU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xcU]))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xbU]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0xaU])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [9U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [8U])))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [7U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [6U])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [5U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [4U]))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [3U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [2U])
                                                      : 
                                                     ((4U 
                                                       & vlSelf->single_cycle_cpu__DOT__alu_result)
                                                       ? 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [1U]
                                                       : 
                                                      vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                                                      [0U])))));
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___eval_stl(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vsingle_cycle_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__ico(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__act(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__nba(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsingle_cycle_cpu___024root___ctor_var_reset(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->rf_addr = VL_RAND_RESET_I(5);
    vlSelf->mem_addr = VL_RAND_RESET_I(32);
    vlSelf->rf_data = VL_RAND_RESET_I(32);
    vlSelf->mem_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_inst = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__inst_ADDU = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_SUBU = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_SLT = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_AND = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_NOR = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_OR = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_XOR = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_SLL = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_SRL = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__beq_taken = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__rs_value = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__rt_value = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__inst_shf_sa = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT__alu_operand1 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_operand2 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__dm_wen = VL_RAND_RESET_I(4);
    vlSelf->single_cycle_cpu__DOT__dm_rdata = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__inst_wdest_rd = VL_RAND_RESET_I(1);
    vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1 = VL_RAND_RESET_I(32);
    vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
