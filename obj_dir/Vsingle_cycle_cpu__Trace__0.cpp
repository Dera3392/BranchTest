// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsingle_cycle_cpu__Syms.h"


void Vsingle_cycle_cpu___024root__trace_chg_sub_0(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsingle_cycle_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vsingle_cycle_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingle_cycle_cpu___024root*>(voidSelf);
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsingle_cycle_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsingle_cycle_cpu___024root__trace_chg_sub_0(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[19]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+20,(vlSelf->single_cycle_cpu__DOT__pc),32);
        bufp->chgIData(oldp+21,((((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0x1aU)) 
                                  | (((4U == (vlSelf->single_cycle_cpu__DOT__inst 
                                              >> 0x1aU)) 
                                      & (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                     | ((~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                        & (5U == (vlSelf->single_cycle_cpu__DOT__inst 
                                                  >> 0x1aU)))))
                                  ? ((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                             >> 0x1aU))
                                      ? ((0xf0000000U 
                                          & vlSelf->single_cycle_cpu__DOT__pc) 
                                         | (0xffffffcU 
                                            & (vlSelf->single_cycle_cpu__DOT__inst 
                                               << 2U)))
                                      : ((((vlSelf->single_cycle_cpu__DOT__pc 
                                            >> 2U) 
                                           + ((0x3fff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                 >> 0xfU)))) 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & vlSelf->single_cycle_cpu__DOT__inst))) 
                                          << 2U) | 
                                         (3U & vlSelf->single_cycle_cpu__DOT__pc)))
                                  : ((((IData)(1U) 
                                       + (vlSelf->single_cycle_cpu__DOT__pc 
                                          >> 2U)) << 2U) 
                                     | (3U & vlSelf->single_cycle_cpu__DOT__pc)))),32);
        bufp->chgIData(oldp+22,(((((IData)(1U) + (vlSelf->single_cycle_cpu__DOT__pc 
                                                  >> 2U)) 
                                  << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc))),32);
        bufp->chgIData(oldp+23,(((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                         >> 0x1aU))
                                  ? ((0xf0000000U & vlSelf->single_cycle_cpu__DOT__pc) 
                                     | (0xffffffcU 
                                        & (vlSelf->single_cycle_cpu__DOT__inst 
                                           << 2U)))
                                  : ((((vlSelf->single_cycle_cpu__DOT__pc 
                                        >> 2U) + ((0x3fff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                     >> 0xfU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & vlSelf->single_cycle_cpu__DOT__inst))) 
                                      << 2U) | (3U 
                                                & vlSelf->single_cycle_cpu__DOT__pc)))),32);
        bufp->chgBit(oldp+24,(((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x1aU)) | 
                               (((4U == (vlSelf->single_cycle_cpu__DOT__inst 
                                         >> 0x1aU)) 
                                 & (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                | ((~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                   & (5U == (vlSelf->single_cycle_cpu__DOT__inst 
                                             >> 0x1aU)))))));
        bufp->chgIData(oldp+25,(vlSelf->single_cycle_cpu__DOT__inst),32);
        bufp->chgCData(oldp+26,((vlSelf->single_cycle_cpu__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgCData(oldp+27,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0x15U))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0x10U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 6U))),5);
        bufp->chgCData(oldp+31,((0x3fU & vlSelf->single_cycle_cpu__DOT__inst)),6);
        bufp->chgSData(oldp+32,((0xffffU & vlSelf->single_cycle_cpu__DOT__inst)),16);
        bufp->chgIData(oldp+33,((0x3ffffffU & vlSelf->single_cycle_cpu__DOT__inst)),26);
        bufp->chgBit(oldp+34,((1U & (~ (IData)((0U 
                                                != 
                                                (vlSelf->single_cycle_cpu__DOT__inst 
                                                 >> 0x1aU)))))));
        bufp->chgBit(oldp+35,((1U & (~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->single_cycle_cpu__DOT__inst 
                                                    >> 6U))))))));
        bufp->chgBit(oldp+36,(vlSelf->single_cycle_cpu__DOT__inst_ADDU));
        bufp->chgBit(oldp+37,(vlSelf->single_cycle_cpu__DOT__inst_SUBU));
        bufp->chgBit(oldp+38,(vlSelf->single_cycle_cpu__DOT__inst_SLT));
        bufp->chgBit(oldp+39,(vlSelf->single_cycle_cpu__DOT__inst_AND));
        bufp->chgBit(oldp+40,(vlSelf->single_cycle_cpu__DOT__inst_NOR));
        bufp->chgBit(oldp+41,(vlSelf->single_cycle_cpu__DOT__inst_OR));
        bufp->chgBit(oldp+42,(vlSelf->single_cycle_cpu__DOT__inst_XOR));
        bufp->chgBit(oldp+43,(vlSelf->single_cycle_cpu__DOT__inst_SLL));
        bufp->chgBit(oldp+44,(vlSelf->single_cycle_cpu__DOT__inst_SRL));
        bufp->chgBit(oldp+45,((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+46,((4U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+47,((5U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+48,((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+49,((0x2bU == (vlSelf->single_cycle_cpu__DOT__inst 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+50,((0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                        >> 0x1aU))));
        bufp->chgBit(oldp+51,((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+52,(((0xf0000000U & vlSelf->single_cycle_cpu__DOT__pc) 
                                 | (0xffffffcU & (vlSelf->single_cycle_cpu__DOT__inst 
                                                  << 2U)))),32);
        bufp->chgBit(oldp+53,(vlSelf->single_cycle_cpu__DOT__beq_taken));
        bufp->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)))));
        bufp->chgIData(oldp+55,(((((vlSelf->single_cycle_cpu__DOT__pc 
                                    >> 2U) + ((0x3fff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                 >> 0xfU)))) 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & vlSelf->single_cycle_cpu__DOT__inst))) 
                                  << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc))),32);
        bufp->chgCData(oldp+56,((0x1fU & ((IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)
                                           ? (vlSelf->single_cycle_cpu__DOT__inst 
                                              >> 0xbU)
                                           : (vlSelf->single_cycle_cpu__DOT__inst 
                                              >> 0x10U)))),5);
        bufp->chgIData(oldp+57,(((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                            >> 0x1aU))
                                  ? vlSelf->single_cycle_cpu__DOT__dm_rdata
                                  : vlSelf->single_cycle_cpu__DOT__alu_result)),32);
        bufp->chgIData(oldp+58,(vlSelf->single_cycle_cpu__DOT__rs_value),32);
        bufp->chgIData(oldp+59,(vlSelf->single_cycle_cpu__DOT__rt_value),32);
        bufp->chgBit(oldp+60,(vlSelf->single_cycle_cpu__DOT__inst_add));
        bufp->chgIData(oldp+61,((((- (IData)((1U & 
                                              (vlSelf->single_cycle_cpu__DOT__inst 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->single_cycle_cpu__DOT__inst))),32);
        bufp->chgBit(oldp+62,(vlSelf->single_cycle_cpu__DOT__inst_shf_sa));
        bufp->chgBit(oldp+63,(((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x1aU)) | 
                               ((0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0x1aU)) 
                                | (IData)(vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0)))));
        bufp->chgIData(oldp+64,(vlSelf->single_cycle_cpu__DOT__alu_operand1),32);
        bufp->chgIData(oldp+65,(vlSelf->single_cycle_cpu__DOT__alu_operand2),32);
        bufp->chgSData(oldp+66,((((IData)(vlSelf->single_cycle_cpu__DOT__inst_add) 
                                  << 0xbU) | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_SUBU) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLT) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_AND) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_NOR) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_OR) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_XOR) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_SLL) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->single_cycle_cpu__DOT__inst_SRL) 
                                                                    << 2U) 
                                                                   | (0xfU 
                                                                      == 
                                                                      (vlSelf->single_cycle_cpu__DOT__inst 
                                                                       >> 0x1aU)))))))))))),12);
        bufp->chgIData(oldp+67,(vlSelf->single_cycle_cpu__DOT__alu_result),32);
        bufp->chgIData(oldp+68,(vlSelf->single_cycle_cpu__DOT__dm_rdata),32);
        bufp->chgBit(oldp+69,(((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x1aU)) | 
                               ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                           >> 0x1aU)) 
                                | (0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+70,(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd));
        bufp->chgIData(oldp+71,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result),32);
        bufp->chgIData(oldp+72,((1U & (((~ (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                            >> 0x1fU)) 
                                        & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                           >> 0x1fU)) 
                                       | ((~ ((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                               ^ vlSelf->single_cycle_cpu__DOT__alu_operand2) 
                                              >> 0x1fU)) 
                                          & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result 
                                             >> 0x1fU))))),32);
        bufp->chgIData(oldp+73,((1U & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_operand1)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2)) 
                                                       + (QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add))))))) 
                                                     >> 0x20U)))))),32);
        bufp->chgIData(oldp+74,((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                 & vlSelf->single_cycle_cpu__DOT__alu_operand2)),32);
        bufp->chgIData(oldp+75,((~ vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result)),32);
        bufp->chgIData(oldp+76,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result),32);
        bufp->chgIData(oldp+77,((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                 ^ vlSelf->single_cycle_cpu__DOT__alu_operand2)),32);
        bufp->chgIData(oldp+78,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                                  ? (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2 
                                     << 0x10U) : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2)),32);
        bufp->chgIData(oldp+79,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                                  ? (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2 
                                     >> 0x10U) : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2)),32);
        bufp->chgIData(oldp+80,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                                  ? (((- (IData)((vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 
                                                  >> 0x1fU))) 
                                      << 0x10U) | (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 
                                                   >> 0x10U))
                                  : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2)),32);
        bufp->chgIData(oldp+81,((vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                 << 0x10U)),32);
        bufp->chgIData(oldp+82,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2),32);
        bufp->chgBit(oldp+83,((1U & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add)))));
        bufp->chgBit(oldp+84,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_operand1)) 
                                               + ((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2)) 
                                                  + (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add))))))) 
                                              >> 0x20U))))));
        bufp->chgCData(oldp+85,((0x1fU & vlSelf->single_cycle_cpu__DOT__alu_operand1)),5);
        bufp->chgCData(oldp+86,((3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)),2);
        bufp->chgCData(oldp+87,((3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                       >> 2U))),2);
        bufp->chgIData(oldp+88,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1),32);
        bufp->chgIData(oldp+89,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2),32);
        bufp->chgIData(oldp+90,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1),32);
        bufp->chgIData(oldp+91,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2),32);
        bufp->chgIData(oldp+92,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1),32);
        bufp->chgIData(oldp+93,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2),32);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                                          >> 2U))),5);
        bufp->chgIData(oldp+95,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[0]),32);
        bufp->chgIData(oldp+96,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[1]),32);
        bufp->chgIData(oldp+97,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[2]),32);
        bufp->chgIData(oldp+98,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[3]),32);
        bufp->chgIData(oldp+99,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[4]),32);
        bufp->chgIData(oldp+100,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[5]),32);
        bufp->chgIData(oldp+101,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[6]),32);
        bufp->chgIData(oldp+102,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[7]),32);
        bufp->chgIData(oldp+103,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[8]),32);
        bufp->chgIData(oldp+104,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[9]),32);
        bufp->chgIData(oldp+105,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[10]),32);
        bufp->chgIData(oldp+106,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[11]),32);
        bufp->chgIData(oldp+107,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[12]),32);
        bufp->chgIData(oldp+108,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[13]),32);
        bufp->chgIData(oldp+109,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[14]),32);
        bufp->chgIData(oldp+110,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[15]),32);
        bufp->chgIData(oldp+111,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[16]),32);
        bufp->chgIData(oldp+112,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[17]),32);
        bufp->chgIData(oldp+113,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[18]),32);
        bufp->chgIData(oldp+114,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[19]),32);
        bufp->chgIData(oldp+115,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[20]),32);
        bufp->chgIData(oldp+116,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[21]),32);
        bufp->chgIData(oldp+117,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[22]),32);
        bufp->chgIData(oldp+118,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[23]),32);
        bufp->chgIData(oldp+119,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[24]),32);
        bufp->chgIData(oldp+120,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[25]),32);
        bufp->chgIData(oldp+121,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[26]),32);
        bufp->chgIData(oldp+122,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[27]),32);
        bufp->chgIData(oldp+123,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[28]),32);
        bufp->chgIData(oldp+124,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[29]),32);
        bufp->chgIData(oldp+125,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[30]),32);
        bufp->chgIData(oldp+126,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[31]),32);
        bufp->chgCData(oldp+127,((0x1fU & (vlSelf->single_cycle_cpu__DOT__pc 
                                           >> 2U))),5);
        bufp->chgIData(oldp+128,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[0]),32);
        bufp->chgIData(oldp+129,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[1]),32);
        bufp->chgIData(oldp+130,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[2]),32);
        bufp->chgIData(oldp+131,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[3]),32);
        bufp->chgIData(oldp+132,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[4]),32);
        bufp->chgIData(oldp+133,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[5]),32);
        bufp->chgIData(oldp+134,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[6]),32);
        bufp->chgIData(oldp+135,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[7]),32);
        bufp->chgIData(oldp+136,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[8]),32);
        bufp->chgIData(oldp+137,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[9]),32);
        bufp->chgIData(oldp+138,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[10]),32);
        bufp->chgIData(oldp+139,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[11]),32);
        bufp->chgIData(oldp+140,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[12]),32);
        bufp->chgIData(oldp+141,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[13]),32);
        bufp->chgIData(oldp+142,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[14]),32);
        bufp->chgIData(oldp+143,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[15]),32);
        bufp->chgIData(oldp+144,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[16]),32);
        bufp->chgIData(oldp+145,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[17]),32);
        bufp->chgIData(oldp+146,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[18]),32);
        bufp->chgIData(oldp+147,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[19]),32);
        bufp->chgIData(oldp+148,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[20]),32);
        bufp->chgIData(oldp+149,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[21]),32);
        bufp->chgIData(oldp+150,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[22]),32);
        bufp->chgIData(oldp+151,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[23]),32);
        bufp->chgIData(oldp+152,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[24]),32);
        bufp->chgIData(oldp+153,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[25]),32);
        bufp->chgIData(oldp+154,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[26]),32);
        bufp->chgIData(oldp+155,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[27]),32);
        bufp->chgIData(oldp+156,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[28]),32);
        bufp->chgIData(oldp+157,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[29]),32);
        bufp->chgIData(oldp+158,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[30]),32);
        bufp->chgIData(oldp+159,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+160,(vlSelf->clk));
    bufp->chgBit(oldp+161,(vlSelf->resetn));
    bufp->chgCData(oldp+162,(vlSelf->rf_addr),5);
    bufp->chgIData(oldp+163,(vlSelf->mem_addr),32);
    bufp->chgIData(oldp+164,(vlSelf->rf_data),32);
    bufp->chgIData(oldp+165,(vlSelf->mem_data),32);
    bufp->chgIData(oldp+166,(vlSelf->cpu_pc),32);
    bufp->chgIData(oldp+167,(vlSelf->cpu_inst),32);
    bufp->chgBit(oldp+168,(((((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU)) | 
                              ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                          >> 0x1aU)) 
                               | (0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                           >> 0x1aU)))) 
                             | (IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)) 
                            & (IData)(vlSelf->resetn))));
    bufp->chgCData(oldp+169,(vlSelf->single_cycle_cpu__DOT__dm_wen),4);
    bufp->chgCData(oldp+170,((0x1fU & (vlSelf->mem_addr 
                                       >> 2U))),5);
}

void Vsingle_cycle_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_cleanup\n"); );
    // Init
    Vsingle_cycle_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingle_cycle_cpu___024root*>(voidSelf);
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
