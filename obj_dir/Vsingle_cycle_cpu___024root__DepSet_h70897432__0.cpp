// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_cycle_cpu.h for the primary calling header

#include "verilated.h"

#include "Vsingle_cycle_cpu___024root.h"

VL_INLINE_OPT void Vsingle_cycle_cpu___024root___ico_sequent__TOP__0(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___ico_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->single_cycle_cpu__DOT__dm_wen = (0xfU & 
                                             (- (IData)(
                                                        ((0x2bU 
                                                          == 
                                                          (vlSelf->single_cycle_cpu__DOT__inst 
                                                           >> 0x1aU)) 
                                                         & (IData)(vlSelf->resetn)))));
}

void Vsingle_cycle_cpu___024root___eval_ico(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vsingle_cycle_cpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vsingle_cycle_cpu___024root___eval_act(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsingle_cycle_cpu___024root___nba_sequent__TOP__0(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ single_cycle_cpu__DOT____VdfgTmp_hca52443f__0;
    CData/*0:0*/ single_cycle_cpu__DOT____VdfgTmp_h6b86a6e1__0;
    IData/*31:0*/ single_cycle_cpu__DOT__alu_module__DOT____VdfgTmp_h94a3ef64__0;
    CData/*4:0*/ __Vdlyvdim0__single_cycle_cpu__DOT__rf_module__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__single_cycle_cpu__DOT__rf_module__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__single_cycle_cpu__DOT__rf_module__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0;
    CData/*4:0*/ __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0;
    CData/*7:0*/ __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0;
    CData/*0:0*/ __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0;
    CData/*4:0*/ __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1;
    CData/*4:0*/ __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1;
    CData/*7:0*/ __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1;
    CData/*0:0*/ __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1;
    CData/*4:0*/ __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2;
    CData/*4:0*/ __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2;
    CData/*7:0*/ __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2;
    CData/*0:0*/ __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2;
    CData/*4:0*/ __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3;
    CData/*4:0*/ __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3;
    CData/*7:0*/ __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3;
    CData/*0:0*/ __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3;
    // Body
    __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0 = 0U;
    __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1 = 0U;
    __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2 = 0U;
    __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3 = 0U;
    __Vdlyvset__single_cycle_cpu__DOT__rf_module__DOT__rf__v0 = 0U;
    if ((8U & (IData)(vlSelf->single_cycle_cpu__DOT__dm_wen))) {
        __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0 
            = (vlSelf->single_cycle_cpu__DOT__rt_value 
               >> 0x18U);
        __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0 = 1U;
        __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0 = 0x18U;
        __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0 
            = (0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                        >> 2U));
    }
    if ((4U & (IData)(vlSelf->single_cycle_cpu__DOT__dm_wen))) {
        __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1 
            = (0xffU & (vlSelf->single_cycle_cpu__DOT__rt_value 
                        >> 0x10U));
        __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1 = 1U;
        __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1 = 0x10U;
        __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1 
            = (0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                        >> 2U));
    }
    if ((2U & (IData)(vlSelf->single_cycle_cpu__DOT__dm_wen))) {
        __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2 
            = (0xffU & (vlSelf->single_cycle_cpu__DOT__rt_value 
                        >> 8U));
        __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2 = 1U;
        __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2 = 8U;
        __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2 
            = (0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                        >> 2U));
    }
    if ((1U & (IData)(vlSelf->single_cycle_cpu__DOT__dm_wen))) {
        __Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3 
            = (0xffU & vlSelf->single_cycle_cpu__DOT__rt_value);
        __Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3 = 1U;
        __Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3 = 0U;
        __Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3 
            = (0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                        >> 2U));
    }
    if (((((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                   >> 0x1aU)) | ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                            >> 0x1aU)) 
                                 | (0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                             >> 0x1aU)))) 
          | (IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)) 
         & (IData)(vlSelf->resetn))) {
        __Vdlyvval__single_cycle_cpu__DOT__rf_module__DOT__rf__v0 
            = ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                          >> 0x1aU)) ? vlSelf->single_cycle_cpu__DOT__dm_rdata
                : vlSelf->single_cycle_cpu__DOT__alu_result);
        __Vdlyvset__single_cycle_cpu__DOT__rf_module__DOT__rf__v0 = 1U;
        __Vdlyvdim0__single_cycle_cpu__DOT__rf_module__DOT__rf__v0 
            = (0x1fU & ((IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)
                         ? (vlSelf->single_cycle_cpu__DOT__inst 
                            >> 0xbU) : (vlSelf->single_cycle_cpu__DOT__inst 
                                        >> 0x10U)));
    }
    vlSelf->single_cycle_cpu__DOT__pc = ((IData)(vlSelf->resetn)
                                          ? vlSelf->single_cycle_cpu__DOT__next_pc
                                          : 0U);
    if (__Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0) {
        vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0))) 
                & vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                [__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0) 
                                   << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v0))));
    }
    if (__Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1) {
        vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1))) 
                & vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                [__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1) 
                                   << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v1))));
    }
    if (__Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2) {
        vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2))) 
                & vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                [__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2) 
                                   << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v2))));
    }
    if (__Vdlyvset__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3) {
        vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3))) 
                & vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM
                [__Vdlyvdim0__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3) 
                                   << (IData)(__Vdlyvlsb__single_cycle_cpu__DOT__data_ram_module__DOT__DM__v3))));
    }
    if (__Vdlyvset__single_cycle_cpu__DOT__rf_module__DOT__rf__v0) {
        vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[__Vdlyvdim0__single_cycle_cpu__DOT__rf_module__DOT__rf__v0] 
            = __Vdlyvval__single_cycle_cpu__DOT__rf_module__DOT__rf__v0;
    }
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
    vlSelf->cpu_pc = vlSelf->single_cycle_cpu__DOT__pc;
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

void Vsingle_cycle_cpu___024root___eval_nba(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsingle_cycle_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsingle_cycle_cpu___024root___eval_triggers__ico(Vsingle_cycle_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__ico(Vsingle_cycle_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vsingle_cycle_cpu___024root___eval_triggers__act(Vsingle_cycle_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__act(Vsingle_cycle_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_cycle_cpu___024root___dump_triggers__nba(Vsingle_cycle_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vsingle_cycle_cpu___024root___eval(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsingle_cycle_cpu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vsingle_cycle_cpu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("single_cycle_cpu.v", 10, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsingle_cycle_cpu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsingle_cycle_cpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsingle_cycle_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("single_cycle_cpu.v", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsingle_cycle_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsingle_cycle_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("single_cycle_cpu.v", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsingle_cycle_cpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsingle_cycle_cpu___024root___eval_debug_assertions(Vsingle_cycle_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((vlSelf->rf_addr & 0xe0U))) {
        Verilated::overWidthError("rf_addr");}
}
#endif  // VL_DEBUG
