// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmoore_fsm_8bit__Syms.h"


//======================

void Vmoore_fsm_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmoore_fsm_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmoore_fsm_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmoore_fsm_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmoore_fsm_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"in", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"moore_fsm_8bit clk", false,-1);
        tracep->declBit(c+2,"moore_fsm_8bit rst", false,-1);
        tracep->declBit(c+3,"moore_fsm_8bit in", false,-1);
        tracep->declBit(c+4,"moore_fsm_8bit out", false,-1);
        tracep->declBus(c+5,"moore_fsm_8bit state", false,-1, 7,0);
        tracep->declBus(c+6,"moore_fsm_8bit next_state", false,-1, 7,0);
    }
}

void Vmoore_fsm_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmoore_fsm_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmoore_fsm_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->in));
        tracep->fullBit(oldp+4,(vlTOPp->out));
        tracep->fullCData(oldp+5,(vlTOPp->moore_fsm_8bit__DOT__state),8);
        tracep->fullCData(oldp+6,(((0xfeU & ((IData)(vlTOPp->moore_fsm_8bit__DOT__state) 
                                             << 1U)) 
                                   | (IData)(vlTOPp->in))),8);
    }
}
