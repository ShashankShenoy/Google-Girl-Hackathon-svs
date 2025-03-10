// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmealy_fsm_4bit__Syms.h"


//======================

void Vmealy_fsm_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmealy_fsm_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmealy_fsm_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmealy_fsm_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmealy_fsm_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"in", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"mealy_fsm_4bit clk", false,-1);
        tracep->declBit(c+2,"mealy_fsm_4bit rst", false,-1);
        tracep->declBit(c+3,"mealy_fsm_4bit in", false,-1);
        tracep->declBit(c+4,"mealy_fsm_4bit out", false,-1);
        tracep->declBus(c+5,"mealy_fsm_4bit state", false,-1, 3,0);
        tracep->declBus(c+6,"mealy_fsm_4bit next_state", false,-1, 3,0);
    }
}

void Vmealy_fsm_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmealy_fsm_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmealy_fsm_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->in));
        tracep->fullBit(oldp+4,(vlTOPp->out));
        tracep->fullCData(oldp+5,(vlTOPp->mealy_fsm_4bit__DOT__state),4);
        tracep->fullCData(oldp+6,(((0xeU & ((IData)(vlTOPp->mealy_fsm_4bit__DOT__state) 
                                            << 1U)) 
                                   | (IData)(vlTOPp->in))),4);
    }
}
