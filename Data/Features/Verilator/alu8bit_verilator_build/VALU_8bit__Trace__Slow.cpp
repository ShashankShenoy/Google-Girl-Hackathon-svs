// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_8bit__Syms.h"


//======================

void VALU_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VALU_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VALU_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VALU_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VALU_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 7,0);
        tracep->declBus(c+2,"B", false,-1, 7,0);
        tracep->declBus(c+3,"ALUControl", false,-1, 2,0);
        tracep->declBus(c+4,"Result", false,-1, 7,0);
        tracep->declBit(c+5,"Zero", false,-1);
        tracep->declBus(c+1,"ALU_8bit A", false,-1, 7,0);
        tracep->declBus(c+2,"ALU_8bit B", false,-1, 7,0);
        tracep->declBus(c+3,"ALU_8bit ALUControl", false,-1, 2,0);
        tracep->declBus(c+4,"ALU_8bit Result", false,-1, 7,0);
        tracep->declBit(c+5,"ALU_8bit Zero", false,-1);
    }
}

void VALU_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VALU_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VALU_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),8);
        tracep->fullCData(oldp+2,(vlTOPp->B),8);
        tracep->fullCData(oldp+3,(vlTOPp->ALUControl),3);
        tracep->fullCData(oldp+4,(vlTOPp->Result),8);
        tracep->fullBit(oldp+5,(vlTOPp->Zero));
    }
}
