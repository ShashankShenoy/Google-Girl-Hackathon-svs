// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcarry_lookahead_adder_16bit__Syms.h"


//======================

void Vcarry_lookahead_adder_16bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vcarry_lookahead_adder_16bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcarry_lookahead_adder_16bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vcarry_lookahead_adder_16bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vcarry_lookahead_adder_16bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+4,"a", false,-1, 15,0);
        tracep->declBus(c+5,"b", false,-1, 15,0);
        tracep->declBit(c+6,"cin", false,-1);
        tracep->declBus(c+7,"sum", false,-1, 15,0);
        tracep->declBit(c+8,"cout", false,-1);
        tracep->declBus(c+4,"carry_lookahead_adder_16bit a", false,-1, 15,0);
        tracep->declBus(c+5,"carry_lookahead_adder_16bit b", false,-1, 15,0);
        tracep->declBit(c+6,"carry_lookahead_adder_16bit cin", false,-1);
        tracep->declBus(c+7,"carry_lookahead_adder_16bit sum", false,-1, 15,0);
        tracep->declBit(c+8,"carry_lookahead_adder_16bit cout", false,-1);
        tracep->declBus(c+1,"carry_lookahead_adder_16bit p", false,-1, 15,0);
        tracep->declBus(c+2,"carry_lookahead_adder_16bit g", false,-1, 15,0);
        tracep->declBus(c+3,"carry_lookahead_adder_16bit c", false,-1, 16,0);
    }
}

void Vcarry_lookahead_adder_16bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vcarry_lookahead_adder_16bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vcarry_lookahead_adder_16bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->carry_lookahead_adder_16bit__DOT__p),16);
        tracep->fullSData(oldp+2,(vlTOPp->carry_lookahead_adder_16bit__DOT__g),16);
        tracep->fullIData(oldp+3,(vlTOPp->carry_lookahead_adder_16bit__DOT__c),17);
        tracep->fullSData(oldp+4,(vlTOPp->a),16);
        tracep->fullSData(oldp+5,(vlTOPp->b),16);
        tracep->fullBit(oldp+6,(vlTOPp->cin));
        tracep->fullSData(oldp+7,(vlTOPp->sum),16);
        tracep->fullBit(oldp+8,(vlTOPp->cout));
    }
}
