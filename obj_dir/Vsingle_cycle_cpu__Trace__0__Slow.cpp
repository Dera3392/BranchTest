// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsingle_cycle_cpu__Syms.h"


VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_init_sub__TOP__0(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"resetn", false,-1);
    tracep->declBus(c+163,"rf_addr", false,-1, 4,0);
    tracep->declBus(c+164,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+165,"rf_data", false,-1, 31,0);
    tracep->declBus(c+166,"mem_data", false,-1, 31,0);
    tracep->declBus(c+167,"cpu_pc", false,-1, 31,0);
    tracep->declBus(c+168,"cpu_inst", false,-1, 31,0);
    tracep->pushNamePrefix("single_cycle_cpu ");
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"resetn", false,-1);
    tracep->declBus(c+163,"rf_addr", false,-1, 4,0);
    tracep->declBus(c+164,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+165,"rf_data", false,-1, 31,0);
    tracep->declBus(c+166,"mem_data", false,-1, 31,0);
    tracep->declBus(c+167,"cpu_pc", false,-1, 31,0);
    tracep->declBus(c+168,"cpu_inst", false,-1, 31,0);
    tracep->declBus(c+21,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"next_pc", false,-1, 31,0);
    tracep->declBus(c+23,"seq_pc", false,-1, 31,0);
    tracep->declBus(c+24,"jbr_target", false,-1, 31,0);
    tracep->declBit(c+25,"jbr_taken", false,-1);
    tracep->declBus(c+167,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+26,"inst", false,-1, 31,0);
    tracep->declBus(c+27,"op", false,-1, 5,0);
    tracep->declBus(c+28,"rs", false,-1, 4,0);
    tracep->declBus(c+29,"rt", false,-1, 4,0);
    tracep->declBus(c+30,"rd", false,-1, 4,0);
    tracep->declBus(c+31,"sa", false,-1, 4,0);
    tracep->declBus(c+32,"funct", false,-1, 5,0);
    tracep->declBus(c+33,"imm", false,-1, 15,0);
    tracep->declBus(c+33,"offset", false,-1, 15,0);
    tracep->declBus(c+34,"target", false,-1, 25,0);
    tracep->declBit(c+35,"op_zero", false,-1);
    tracep->declBit(c+36,"sa_zero", false,-1);
    tracep->declBit(c+37,"inst_ADDU", false,-1);
    tracep->declBit(c+38,"inst_SUBU", false,-1);
    tracep->declBit(c+39,"inst_SLT", false,-1);
    tracep->declBit(c+40,"inst_AND", false,-1);
    tracep->declBit(c+41,"inst_NOR", false,-1);
    tracep->declBit(c+42,"inst_OR", false,-1);
    tracep->declBit(c+43,"inst_XOR", false,-1);
    tracep->declBit(c+44,"inst_SLL", false,-1);
    tracep->declBit(c+45,"inst_SRL", false,-1);
    tracep->declBit(c+46,"inst_ADDIU", false,-1);
    tracep->declBit(c+47,"inst_BEQ", false,-1);
    tracep->declBit(c+48,"inst_BNE", false,-1);
    tracep->declBit(c+49,"inst_LW", false,-1);
    tracep->declBit(c+50,"inst_SW", false,-1);
    tracep->declBit(c+51,"inst_LUI", false,-1);
    tracep->declBit(c+52,"inst_J", false,-1);
    tracep->declBit(c+52,"j_taken", false,-1);
    tracep->declBus(c+53,"j_target", false,-1, 31,0);
    tracep->declBit(c+54,"beq_taken", false,-1);
    tracep->declBit(c+55,"bne_taken", false,-1);
    tracep->declBus(c+56,"br_target", false,-1, 31,0);
    tracep->declBit(c+169,"rf_wen", false,-1);
    tracep->declBus(c+57,"rf_waddr", false,-1, 4,0);
    tracep->declBus(c+58,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+59,"rs_value", false,-1, 31,0);
    tracep->declBus(c+60,"rt_value", false,-1, 31,0);
    tracep->declBit(c+61,"inst_add", false,-1);
    tracep->declBit(c+38,"inst_sub", false,-1);
    tracep->declBit(c+39,"inst_slt", false,-1);
    tracep->declBit(c+172,"inst_sltu", false,-1);
    tracep->declBit(c+40,"inst_and", false,-1);
    tracep->declBit(c+41,"inst_nor", false,-1);
    tracep->declBit(c+42,"inst_or", false,-1);
    tracep->declBit(c+43,"inst_xor", false,-1);
    tracep->declBit(c+44,"inst_sll", false,-1);
    tracep->declBit(c+45,"inst_srl", false,-1);
    tracep->declBit(c+172,"inst_sra", false,-1);
    tracep->declBit(c+51,"inst_lui", false,-1);
    tracep->declBus(c+62,"sext_imm", false,-1, 31,0);
    tracep->declBit(c+63,"inst_shf_sa", false,-1);
    tracep->declBit(c+64,"inst_imm_sign", false,-1);
    tracep->declBus(c+65,"alu_operand1", false,-1, 31,0);
    tracep->declBus(c+66,"alu_operand2", false,-1, 31,0);
    tracep->declBus(c+67,"alu_control", false,-1, 11,0);
    tracep->declBus(c+68,"alu_result", false,-1, 31,0);
    tracep->declBus(c+170,"dm_wen", false,-1, 3,0);
    tracep->declBus(c+68,"dm_addr", false,-1, 31,0);
    tracep->declBus(c+60,"dm_wdata", false,-1, 31,0);
    tracep->declBus(c+69,"dm_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"inst_wdest_rt", false,-1);
    tracep->declBit(c+71,"inst_wdest_rd", false,-1);
    tracep->pushNamePrefix("alu_module ");
    tracep->declBus(c+67,"alu_control", false,-1, 11,0);
    tracep->declBus(c+65,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+66,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+68,"alu_result", false,-1, 31,0);
    tracep->declBit(c+61,"alu_add", false,-1);
    tracep->declBit(c+38,"alu_sub", false,-1);
    tracep->declBit(c+39,"alu_slt", false,-1);
    tracep->declBit(c+172,"alu_sltu", false,-1);
    tracep->declBit(c+40,"alu_and", false,-1);
    tracep->declBit(c+41,"alu_nor", false,-1);
    tracep->declBit(c+42,"alu_or", false,-1);
    tracep->declBit(c+43,"alu_xor", false,-1);
    tracep->declBit(c+44,"alu_sll", false,-1);
    tracep->declBit(c+45,"alu_srl", false,-1);
    tracep->declBit(c+172,"alu_sra", false,-1);
    tracep->declBit(c+51,"alu_lui", false,-1);
    tracep->declBus(c+72,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+73,"slt_result", false,-1, 31,0);
    tracep->declBus(c+74,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+75,"and_result", false,-1, 31,0);
    tracep->declBus(c+76,"nor_result", false,-1, 31,0);
    tracep->declBus(c+77,"or_result", false,-1, 31,0);
    tracep->declBus(c+78,"xor_result", false,-1, 31,0);
    tracep->declBus(c+79,"sll_result", false,-1, 31,0);
    tracep->declBus(c+80,"srl_result", false,-1, 31,0);
    tracep->declBus(c+81,"sra_result", false,-1, 31,0);
    tracep->declBus(c+82,"lui_result", false,-1, 31,0);
    tracep->declBus(c+65,"adder_operand1", false,-1, 31,0);
    tracep->declBus(c+83,"adder_operand2", false,-1, 31,0);
    tracep->declBit(c+84,"adder_cin", false,-1);
    tracep->declBus(c+72,"adder_result", false,-1, 31,0);
    tracep->declBit(c+85,"adder_cout", false,-1);
    tracep->declBus(c+86,"shf", false,-1, 4,0);
    tracep->declBus(c+87,"shf_1_0", false,-1, 1,0);
    tracep->declBus(c+88,"shf_3_2", false,-1, 1,0);
    tracep->declBus(c+89,"sll_step1", false,-1, 31,0);
    tracep->declBus(c+90,"sll_step2", false,-1, 31,0);
    tracep->declBus(c+91,"srl_step1", false,-1, 31,0);
    tracep->declBus(c+92,"srl_step2", false,-1, 31,0);
    tracep->declBus(c+93,"sra_step1", false,-1, 31,0);
    tracep->declBus(c+94,"sra_step2", false,-1, 31,0);
    tracep->pushNamePrefix("adder_module ");
    tracep->declBus(c+65,"operand1", false,-1, 31,0);
    tracep->declBus(c+83,"operand2", false,-1, 31,0);
    tracep->declBit(c+84,"cin", false,-1);
    tracep->declBus(c+72,"result", false,-1, 31,0);
    tracep->declBit(c+85,"cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_ram_module ");
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBus(c+170,"wen", false,-1, 3,0);
    tracep->declBus(c+95,"addr", false,-1, 4,0);
    tracep->declBus(c+60,"wdata", false,-1, 31,0);
    tracep->declBus(c+69,"rdata", false,-1, 31,0);
    tracep->declBus(c+171,"test_addr", false,-1, 4,0);
    tracep->declBus(c+166,"test_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+96+i*1,"DM", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_rom_module ");
    tracep->declBus(c+128,"addr", false,-1, 4,0);
    tracep->declBus(c+26,"inst", false,-1, 31,0);
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+1+i*1,"inst_rom", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf_module ");
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+169,"wen", false,-1);
    tracep->declBus(c+28,"raddr1", false,-1, 4,0);
    tracep->declBus(c+29,"raddr2", false,-1, 4,0);
    tracep->declBus(c+57,"waddr", false,-1, 4,0);
    tracep->declBus(c+58,"wdata", false,-1, 31,0);
    tracep->declBus(c+59,"rdata1", false,-1, 31,0);
    tracep->declBus(c+60,"rdata2", false,-1, 31,0);
    tracep->declBus(c+163,"test_addr", false,-1, 4,0);
    tracep->declBus(c+165,"test_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+129+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_init_top(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_init_top\n"); );
    // Body
    Vsingle_cycle_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsingle_cycle_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsingle_cycle_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_register(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsingle_cycle_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsingle_cycle_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsingle_cycle_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_full_sub_0(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vsingle_cycle_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingle_cycle_cpu___024root*>(voidSelf);
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsingle_cycle_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsingle_cycle_cpu___024root__trace_full_sub_0(Vsingle_cycle_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsingle_cycle_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_cycle_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->single_cycle_cpu__DOT__inst_rom_module__DOT__inst_rom[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->single_cycle_cpu__DOT__pc),32);
    bufp->fullIData(oldp+22,((((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x1aU)) | 
                               (((4U == (vlSelf->single_cycle_cpu__DOT__inst 
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
                                         >> 2U) + (
                                                   (0x3fff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->single_cycle_cpu__DOT__inst 
                                                                      >> 0xfU)))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlSelf->single_cycle_cpu__DOT__inst))) 
                                       << 2U) | (3U 
                                                 & vlSelf->single_cycle_cpu__DOT__pc)))
                               : ((((IData)(1U) + (vlSelf->single_cycle_cpu__DOT__pc 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+23,(((((IData)(1U) + (vlSelf->single_cycle_cpu__DOT__pc 
                                               >> 2U)) 
                               << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc))),32);
    bufp->fullIData(oldp+24,(((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU)) ? 
                              ((0xf0000000U & vlSelf->single_cycle_cpu__DOT__pc) 
                               | (0xffffffcU & (vlSelf->single_cycle_cpu__DOT__inst 
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
                                   << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc)))),32);
    bufp->fullBit(oldp+25,(((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                    >> 0x1aU)) | ((
                                                   (4U 
                                                    == 
                                                    (vlSelf->single_cycle_cpu__DOT__inst 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                                  | ((~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)) 
                                                     & (5U 
                                                        == 
                                                        (vlSelf->single_cycle_cpu__DOT__inst 
                                                         >> 0x1aU)))))));
    bufp->fullIData(oldp+26,(vlSelf->single_cycle_cpu__DOT__inst),32);
    bufp->fullCData(oldp+27,((vlSelf->single_cycle_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x15U))),5);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x10U))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0xbU))),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 6U))),5);
    bufp->fullCData(oldp+32,((0x3fU & vlSelf->single_cycle_cpu__DOT__inst)),6);
    bufp->fullSData(oldp+33,((0xffffU & vlSelf->single_cycle_cpu__DOT__inst)),16);
    bufp->fullIData(oldp+34,((0x3ffffffU & vlSelf->single_cycle_cpu__DOT__inst)),26);
    bufp->fullBit(oldp+35,((1U & (~ (IData)((0U != 
                                             (vlSelf->single_cycle_cpu__DOT__inst 
                                              >> 0x1aU)))))));
    bufp->fullBit(oldp+36,((1U & (~ (IData)((0U != 
                                             (0x1fU 
                                              & (vlSelf->single_cycle_cpu__DOT__inst 
                                                 >> 6U))))))));
    bufp->fullBit(oldp+37,(vlSelf->single_cycle_cpu__DOT__inst_ADDU));
    bufp->fullBit(oldp+38,(vlSelf->single_cycle_cpu__DOT__inst_SUBU));
    bufp->fullBit(oldp+39,(vlSelf->single_cycle_cpu__DOT__inst_SLT));
    bufp->fullBit(oldp+40,(vlSelf->single_cycle_cpu__DOT__inst_AND));
    bufp->fullBit(oldp+41,(vlSelf->single_cycle_cpu__DOT__inst_NOR));
    bufp->fullBit(oldp+42,(vlSelf->single_cycle_cpu__DOT__inst_OR));
    bufp->fullBit(oldp+43,(vlSelf->single_cycle_cpu__DOT__inst_XOR));
    bufp->fullBit(oldp+44,(vlSelf->single_cycle_cpu__DOT__inst_SLL));
    bufp->fullBit(oldp+45,(vlSelf->single_cycle_cpu__DOT__inst_SRL));
    bufp->fullBit(oldp+46,((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+47,((4U == (vlSelf->single_cycle_cpu__DOT__inst 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+48,((5U == (vlSelf->single_cycle_cpu__DOT__inst 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+49,((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+50,((0x2bU == (vlSelf->single_cycle_cpu__DOT__inst 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+51,((0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+52,((2U == (vlSelf->single_cycle_cpu__DOT__inst 
                                   >> 0x1aU))));
    bufp->fullIData(oldp+53,(((0xf0000000U & vlSelf->single_cycle_cpu__DOT__pc) 
                              | (0xffffffcU & (vlSelf->single_cycle_cpu__DOT__inst 
                                               << 2U)))),32);
    bufp->fullBit(oldp+54,(vlSelf->single_cycle_cpu__DOT__beq_taken));
    bufp->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->single_cycle_cpu__DOT__beq_taken)))));
    bufp->fullIData(oldp+56,(((((vlSelf->single_cycle_cpu__DOT__pc 
                                 >> 2U) + ((0x3fff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->single_cycle_cpu__DOT__inst 
                                                              >> 0xfU)))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & vlSelf->single_cycle_cpu__DOT__inst))) 
                               << 2U) | (3U & vlSelf->single_cycle_cpu__DOT__pc))),32);
    bufp->fullCData(oldp+57,((0x1fU & ((IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)
                                        ? (vlSelf->single_cycle_cpu__DOT__inst 
                                           >> 0xbU)
                                        : (vlSelf->single_cycle_cpu__DOT__inst 
                                           >> 0x10U)))),5);
    bufp->fullIData(oldp+58,(((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                         >> 0x1aU))
                               ? vlSelf->single_cycle_cpu__DOT__dm_rdata
                               : vlSelf->single_cycle_cpu__DOT__alu_result)),32);
    bufp->fullIData(oldp+59,(vlSelf->single_cycle_cpu__DOT__rs_value),32);
    bufp->fullIData(oldp+60,(vlSelf->single_cycle_cpu__DOT__rt_value),32);
    bufp->fullBit(oldp+61,(vlSelf->single_cycle_cpu__DOT__inst_add));
    bufp->fullIData(oldp+62,((((- (IData)((1U & (vlSelf->single_cycle_cpu__DOT__inst 
                                                 >> 0xfU)))) 
                               << 0x10U) | (0xffffU 
                                            & vlSelf->single_cycle_cpu__DOT__inst))),32);
    bufp->fullBit(oldp+63,(vlSelf->single_cycle_cpu__DOT__inst_shf_sa));
    bufp->fullBit(oldp+64,(((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                    >> 0x1aU)) | ((0xfU 
                                                   == 
                                                   (vlSelf->single_cycle_cpu__DOT__inst 
                                                    >> 0x1aU)) 
                                                  | (IData)(vlSelf->single_cycle_cpu__DOT____VdfgTmp_h0644f59e__0)))));
    bufp->fullIData(oldp+65,(vlSelf->single_cycle_cpu__DOT__alu_operand1),32);
    bufp->fullIData(oldp+66,(vlSelf->single_cycle_cpu__DOT__alu_operand2),32);
    bufp->fullSData(oldp+67,((((IData)(vlSelf->single_cycle_cpu__DOT__inst_add) 
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
    bufp->fullIData(oldp+68,(vlSelf->single_cycle_cpu__DOT__alu_result),32);
    bufp->fullIData(oldp+69,(vlSelf->single_cycle_cpu__DOT__dm_rdata),32);
    bufp->fullBit(oldp+70,(((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                    >> 0x1aU)) | ((0x23U 
                                                   == 
                                                   (vlSelf->single_cycle_cpu__DOT__inst 
                                                    >> 0x1aU)) 
                                                  | (0xfU 
                                                     == 
                                                     (vlSelf->single_cycle_cpu__DOT__inst 
                                                      >> 0x1aU))))));
    bufp->fullBit(oldp+71,(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd));
    bufp->fullIData(oldp+72,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result),32);
    bufp->fullIData(oldp+73,((1U & (((~ (vlSelf->single_cycle_cpu__DOT__alu_operand2 
                                         >> 0x1fU)) 
                                     & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                        >> 0x1fU)) 
                                    | ((~ ((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                            ^ vlSelf->single_cycle_cpu__DOT__alu_operand2) 
                                           >> 0x1fU)) 
                                       & (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__add_sub_result 
                                          >> 0x1fU))))),32);
    bufp->fullIData(oldp+74,((1U & (~ (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_operand1)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2)) 
                                                    + (QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add))))))) 
                                                  >> 0x20U)))))),32);
    bufp->fullIData(oldp+75,((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                              & vlSelf->single_cycle_cpu__DOT__alu_operand2)),32);
    bufp->fullIData(oldp+76,((~ vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result)),32);
    bufp->fullIData(oldp+77,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__or_result),32);
    bufp->fullIData(oldp+78,((vlSelf->single_cycle_cpu__DOT__alu_operand1 
                              ^ vlSelf->single_cycle_cpu__DOT__alu_operand2)),32);
    bufp->fullIData(oldp+79,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                               ? (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2 
                                  << 0x10U) : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2)),32);
    bufp->fullIData(oldp+80,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                               ? (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2 
                                  >> 0x10U) : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2)),32);
    bufp->fullIData(oldp+81,(((0x10U & vlSelf->single_cycle_cpu__DOT__alu_operand1)
                               ? (((- (IData)((vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 
                                               >> 0x1fU))) 
                                   << 0x10U) | (vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2 
                                                >> 0x10U))
                               : vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2)),32);
    bufp->fullIData(oldp+82,((vlSelf->single_cycle_cpu__DOT__alu_operand2 
                              << 0x10U)),32);
    bufp->fullIData(oldp+83,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2),32);
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add)))));
    bufp->fullBit(oldp+85,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_operand1)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__adder_operand2)) 
                                                    + (QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->single_cycle_cpu__DOT__inst_add))))))) 
                                                  >> 0x20U))))));
    bufp->fullCData(oldp+86,((0x1fU & vlSelf->single_cycle_cpu__DOT__alu_operand1)),5);
    bufp->fullCData(oldp+87,((3U & vlSelf->single_cycle_cpu__DOT__alu_operand1)),2);
    bufp->fullCData(oldp+88,((3U & (vlSelf->single_cycle_cpu__DOT__alu_operand1 
                                    >> 2U))),2);
    bufp->fullIData(oldp+89,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step1),32);
    bufp->fullIData(oldp+90,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sll_step2),32);
    bufp->fullIData(oldp+91,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step1),32);
    bufp->fullIData(oldp+92,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__srl_step2),32);
    bufp->fullIData(oldp+93,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step1),32);
    bufp->fullIData(oldp+94,(vlSelf->single_cycle_cpu__DOT__alu_module__DOT__sra_step2),32);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->single_cycle_cpu__DOT__alu_result 
                                       >> 2U))),5);
    bufp->fullIData(oldp+96,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[3]),32);
    bufp->fullIData(oldp+100,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[4]),32);
    bufp->fullIData(oldp+101,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[5]),32);
    bufp->fullIData(oldp+102,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[6]),32);
    bufp->fullIData(oldp+103,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[7]),32);
    bufp->fullIData(oldp+104,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[8]),32);
    bufp->fullIData(oldp+105,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[9]),32);
    bufp->fullIData(oldp+106,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[10]),32);
    bufp->fullIData(oldp+107,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[11]),32);
    bufp->fullIData(oldp+108,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[12]),32);
    bufp->fullIData(oldp+109,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[13]),32);
    bufp->fullIData(oldp+110,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[14]),32);
    bufp->fullIData(oldp+111,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[15]),32);
    bufp->fullIData(oldp+112,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[16]),32);
    bufp->fullIData(oldp+113,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[17]),32);
    bufp->fullIData(oldp+114,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[18]),32);
    bufp->fullIData(oldp+115,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[19]),32);
    bufp->fullIData(oldp+116,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[20]),32);
    bufp->fullIData(oldp+117,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[21]),32);
    bufp->fullIData(oldp+118,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[22]),32);
    bufp->fullIData(oldp+119,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[23]),32);
    bufp->fullIData(oldp+120,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[24]),32);
    bufp->fullIData(oldp+121,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[25]),32);
    bufp->fullIData(oldp+122,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[26]),32);
    bufp->fullIData(oldp+123,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[27]),32);
    bufp->fullIData(oldp+124,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[28]),32);
    bufp->fullIData(oldp+125,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[29]),32);
    bufp->fullIData(oldp+126,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[30]),32);
    bufp->fullIData(oldp+127,(vlSelf->single_cycle_cpu__DOT__data_ram_module__DOT__DM[31]),32);
    bufp->fullCData(oldp+128,((0x1fU & (vlSelf->single_cycle_cpu__DOT__pc 
                                        >> 2U))),5);
    bufp->fullIData(oldp+129,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[0]),32);
    bufp->fullIData(oldp+130,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[1]),32);
    bufp->fullIData(oldp+131,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[2]),32);
    bufp->fullIData(oldp+132,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[3]),32);
    bufp->fullIData(oldp+133,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[4]),32);
    bufp->fullIData(oldp+134,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[5]),32);
    bufp->fullIData(oldp+135,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[6]),32);
    bufp->fullIData(oldp+136,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[7]),32);
    bufp->fullIData(oldp+137,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[8]),32);
    bufp->fullIData(oldp+138,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[9]),32);
    bufp->fullIData(oldp+139,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[10]),32);
    bufp->fullIData(oldp+140,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[11]),32);
    bufp->fullIData(oldp+141,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[12]),32);
    bufp->fullIData(oldp+142,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[13]),32);
    bufp->fullIData(oldp+143,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[14]),32);
    bufp->fullIData(oldp+144,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[15]),32);
    bufp->fullIData(oldp+145,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[16]),32);
    bufp->fullIData(oldp+146,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[17]),32);
    bufp->fullIData(oldp+147,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[18]),32);
    bufp->fullIData(oldp+148,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[19]),32);
    bufp->fullIData(oldp+149,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[20]),32);
    bufp->fullIData(oldp+150,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[21]),32);
    bufp->fullIData(oldp+151,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[22]),32);
    bufp->fullIData(oldp+152,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[23]),32);
    bufp->fullIData(oldp+153,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[24]),32);
    bufp->fullIData(oldp+154,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[25]),32);
    bufp->fullIData(oldp+155,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[26]),32);
    bufp->fullIData(oldp+156,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[27]),32);
    bufp->fullIData(oldp+157,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[28]),32);
    bufp->fullIData(oldp+158,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[29]),32);
    bufp->fullIData(oldp+159,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[30]),32);
    bufp->fullIData(oldp+160,(vlSelf->single_cycle_cpu__DOT__rf_module__DOT__rf[31]),32);
    bufp->fullBit(oldp+161,(vlSelf->clk));
    bufp->fullBit(oldp+162,(vlSelf->resetn));
    bufp->fullCData(oldp+163,(vlSelf->rf_addr),5);
    bufp->fullIData(oldp+164,(vlSelf->mem_addr),32);
    bufp->fullIData(oldp+165,(vlSelf->rf_data),32);
    bufp->fullIData(oldp+166,(vlSelf->mem_data),32);
    bufp->fullIData(oldp+167,(vlSelf->cpu_pc),32);
    bufp->fullIData(oldp+168,(vlSelf->cpu_inst),32);
    bufp->fullBit(oldp+169,(((((9U == (vlSelf->single_cycle_cpu__DOT__inst 
                                       >> 0x1aU)) | 
                               ((0x23U == (vlSelf->single_cycle_cpu__DOT__inst 
                                           >> 0x1aU)) 
                                | (0xfU == (vlSelf->single_cycle_cpu__DOT__inst 
                                            >> 0x1aU)))) 
                              | (IData)(vlSelf->single_cycle_cpu__DOT__inst_wdest_rd)) 
                             & (IData)(vlSelf->resetn))));
    bufp->fullCData(oldp+170,(vlSelf->single_cycle_cpu__DOT__dm_wen),4);
    bufp->fullCData(oldp+171,((0x1fU & (vlSelf->mem_addr 
                                        >> 2U))),5);
    bufp->fullBit(oldp+172,(0U));
}
