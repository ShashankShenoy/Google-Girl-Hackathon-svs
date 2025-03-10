// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCarry_Lookahead_Adder_4bit__Syms.h"


//======================

void VCarry_Lookahead_Adder_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCarry_Lookahead_Adder_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCarry_Lookahead_Adder_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCarry_Lookahead_Adder_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VCarry_Lookahead_Adder_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+4,"A", false,-1, 3,0);
        tracep->declBus(c+5,"B", false,-1, 3,0);
        tracep->declBit(c+6,"Cin", false,-1);
        tracep->declBus(c+7,"Sum", false,-1, 3,0);
        tracep->declBit(c+8,"Cout", false,-1);
        tracep->declBus(c+4,"Carry_Lookahead_Adder_4bit A", false,-1, 3,0);
        tracep->declBus(c+5,"Carry_Lookahead_Adder_4bit B", false,-1, 3,0);
        tracep->declBit(c+6,"Carry_Lookahead_Adder_4bit Cin", false,-1);
        tracep->declBus(c+7,"Carry_Lookahead_Adder_4bit Sum", false,-1, 3,0);
        tracep->declBit(c+8,"Carry_Lookahead_Adder_4bit Cout", false,-1);
        tracep->declBus(c+1,"Carry_Lookahead_Adder_4bit P", false,-1, 3,0);
        tracep->declBus(c+2,"Carry_Lookahead_Adder_4bit G", false,-1, 3,0);
        tracep->declBus(c+3,"Carry_Lookahead_Adder_4bit C", false,-1, 3,0);
    }
}

void VCarry_Lookahead_Adder_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCarry_Lookahead_Adder_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VCarry_Lookahead_Adder_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P),4);
        tracep->fullCData(oldp+2,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G),4);
        tracep->fullCData(oldp+3,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C),4);
        tracep->fullCData(oldp+4,(vlTOPp->A),4);
        tracep->fullCData(oldp+5,(vlTOPp->B),4);
        tracep->fullBit(oldp+6,(vlTOPp->Cin));
        tracep->fullCData(oldp+7,(vlTOPp->Sum),4);
        tracep->fullBit(oldp+8,(vlTOPp->Cout));
    }
}
