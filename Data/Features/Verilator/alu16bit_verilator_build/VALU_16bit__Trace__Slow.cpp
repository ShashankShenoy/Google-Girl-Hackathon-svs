// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_16bit__Syms.h"


//======================

void VALU_16bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VALU_16bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_16bit__Syms* __restrict vlSymsp = static_cast<VALU_16bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VALU_16bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VALU_16bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VALU_16bit__Syms* __restrict vlSymsp = static_cast<VALU_16bit__Syms*>(userp);
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VALU_16bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VALU_16bit__Syms* __restrict vlSymsp = static_cast<VALU_16bit__Syms*>(userp);
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 15,0);
        tracep->declBus(c+2,"B", false,-1, 15,0);
        tracep->declBus(c+3,"ALUControl", false,-1, 3,0);
        tracep->declBus(c+4,"Result", false,-1, 15,0);
        tracep->declBit(c+5,"Zero", false,-1);
        tracep->declBus(c+1,"ALU_16bit A", false,-1, 15,0);
        tracep->declBus(c+2,"ALU_16bit B", false,-1, 15,0);
        tracep->declBus(c+3,"ALU_16bit ALUControl", false,-1, 3,0);
        tracep->declBus(c+4,"ALU_16bit Result", false,-1, 15,0);
        tracep->declBit(c+5,"ALU_16bit Zero", false,-1);
    }
}

void VALU_16bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VALU_16bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VALU_16bit__Syms* __restrict vlSymsp = static_cast<VALU_16bit__Syms*>(userp);
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VALU_16bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VALU_16bit__Syms* __restrict vlSymsp = static_cast<VALU_16bit__Syms*>(userp);
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->A),16);
        tracep->fullSData(oldp+2,(vlTOPp->B),16);
        tracep->fullCData(oldp+3,(vlTOPp->ALUControl),4);
        tracep->fullSData(oldp+4,(vlTOPp->Result),16);
        tracep->fullBit(oldp+5,(vlTOPp->Zero));
    }
}
