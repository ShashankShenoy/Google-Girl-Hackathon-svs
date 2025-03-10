// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsr_latch_nand__Syms.h"


//======================

void Vsr_latch_nand::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsr_latch_nand::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsr_latch_nand::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsr_latch_nand::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsr_latch_nand::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"s", false,-1);
        tracep->declBit(c+2,"r", false,-1);
        tracep->declBit(c+3,"q", false,-1);
        tracep->declBit(c+4,"q_bar", false,-1);
        tracep->declBit(c+1,"sr_latch_nand s", false,-1);
        tracep->declBit(c+2,"sr_latch_nand r", false,-1);
        tracep->declBit(c+3,"sr_latch_nand q", false,-1);
        tracep->declBit(c+4,"sr_latch_nand q_bar", false,-1);
    }
}

void Vsr_latch_nand::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsr_latch_nand::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsr_latch_nand::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->s));
        tracep->fullBit(oldp+2,(vlTOPp->r));
        tracep->fullBit(oldp+3,(vlTOPp->q));
        tracep->fullBit(oldp+4,(vlTOPp->q_bar));
    }
}
