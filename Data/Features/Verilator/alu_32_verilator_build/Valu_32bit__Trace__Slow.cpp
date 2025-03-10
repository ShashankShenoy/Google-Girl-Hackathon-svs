// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_32bit__Syms.h"


//======================

void Valu_32bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Valu_32bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Valu_32bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Valu_32bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Valu_32bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+7,"a", false,-1, 31,0);
        tracep->declBus(c+8,"b", false,-1, 31,0);
        tracep->declBus(c+9,"op", false,-1, 3,0);
        tracep->declBus(c+10,"result", false,-1, 31,0);
        tracep->declBit(c+11,"zero", false,-1);
        tracep->declBit(c+12,"overflow", false,-1);
        tracep->declBit(c+13,"carry_out", false,-1);
        tracep->declBus(c+7,"alu_32bit a", false,-1, 31,0);
        tracep->declBus(c+8,"alu_32bit b", false,-1, 31,0);
        tracep->declBus(c+9,"alu_32bit op", false,-1, 3,0);
        tracep->declBus(c+10,"alu_32bit result", false,-1, 31,0);
        tracep->declBit(c+11,"alu_32bit zero", false,-1);
        tracep->declBit(c+12,"alu_32bit overflow", false,-1);
        tracep->declBit(c+13,"alu_32bit carry_out", false,-1);
        tracep->declBus(c+16,"alu_32bit ADD", false,-1, 3,0);
        tracep->declBus(c+17,"alu_32bit SUB", false,-1, 3,0);
        tracep->declBus(c+18,"alu_32bit AND", false,-1, 3,0);
        tracep->declBus(c+19,"alu_32bit OR", false,-1, 3,0);
        tracep->declBus(c+20,"alu_32bit XOR", false,-1, 3,0);
        tracep->declBus(c+21,"alu_32bit NOR", false,-1, 3,0);
        tracep->declBus(c+22,"alu_32bit SLT", false,-1, 3,0);
        tracep->declBus(c+23,"alu_32bit SLL", false,-1, 3,0);
        tracep->declBus(c+24,"alu_32bit SRL", false,-1, 3,0);
        tracep->declBus(c+25,"alu_32bit SRA", false,-1, 3,0);
        tracep->declBus(c+1,"alu_32bit add_result", false,-1, 31,0);
        tracep->declBus(c+26,"alu_32bit sub_result", false,-1, 31,0);
        tracep->declBit(c+2,"alu_32bit add_cout", false,-1);
        tracep->declBit(c+27,"alu_32bit sub_cout", false,-1);
        tracep->declBit(c+3,"alu_32bit add_overflow", false,-1);
        tracep->declBit(c+28,"alu_32bit sub_overflow", false,-1);
        tracep->declBus(c+4,"alu_32bit adder_b", false,-1, 31,0);
        tracep->declBit(c+14,"alu_32bit adder_cin", false,-1);
        tracep->declQuad(c+5,"alu_32bit adder_result", false,-1, 32,0);
        tracep->declBit(c+15,"alu_32bit slt_result", false,-1);
    }
}

void Valu_32bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Valu_32bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Valu_32bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((IData)(vlTOPp->alu_32bit__DOT__adder_result)),32);
        tracep->fullBit(oldp+2,((1U & (IData)((vlTOPp->alu_32bit__DOT__adder_result 
                                               >> 0x20U)))));
        tracep->fullBit(oldp+3,(vlTOPp->alu_32bit__DOT__add_overflow));
        tracep->fullIData(oldp+4,(vlTOPp->alu_32bit__DOT__adder_b),32);
        tracep->fullQData(oldp+5,(vlTOPp->alu_32bit__DOT__adder_result),33);
        tracep->fullIData(oldp+7,(vlTOPp->a),32);
        tracep->fullIData(oldp+8,(vlTOPp->b),32);
        tracep->fullCData(oldp+9,(vlTOPp->op),4);
        tracep->fullIData(oldp+10,(vlTOPp->result),32);
        tracep->fullBit(oldp+11,(vlTOPp->zero));
        tracep->fullBit(oldp+12,(vlTOPp->overflow));
        tracep->fullBit(oldp+13,(vlTOPp->carry_out));
        tracep->fullBit(oldp+14,(((1U == (IData)(vlTOPp->op)) 
                                  | (6U == (IData)(vlTOPp->op)))));
        tracep->fullBit(oldp+15,((1U & (((1U & (vlTOPp->a 
                                                >> 0x1fU)) 
                                         != (1U & (vlTOPp->b 
                                                   >> 0x1fU)))
                                         ? (vlTOPp->a 
                                            >> 0x1fU)
                                         : (IData)(
                                                   (vlTOPp->alu_32bit__DOT__adder_result 
                                                    >> 0x1fU))))));
        tracep->fullCData(oldp+16,(0U),4);
        tracep->fullCData(oldp+17,(1U),4);
        tracep->fullCData(oldp+18,(2U),4);
        tracep->fullCData(oldp+19,(3U),4);
        tracep->fullCData(oldp+20,(4U),4);
        tracep->fullCData(oldp+21,(5U),4);
        tracep->fullCData(oldp+22,(6U),4);
        tracep->fullCData(oldp+23,(7U),4);
        tracep->fullCData(oldp+24,(8U),4);
        tracep->fullCData(oldp+25,(9U),4);
        tracep->fullIData(oldp+26,(vlTOPp->alu_32bit__DOT__sub_result),32);
        tracep->fullBit(oldp+27,(vlTOPp->alu_32bit__DOT__sub_cout));
        tracep->fullBit(oldp+28,(vlTOPp->alu_32bit__DOT__sub_overflow));
    }
}
