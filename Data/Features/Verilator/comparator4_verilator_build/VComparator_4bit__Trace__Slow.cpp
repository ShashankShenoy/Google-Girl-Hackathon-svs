// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComparator_4bit__Syms.h"


//======================

void VComparator_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VComparator_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VComparator_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VComparator_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VComparator_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 3,0);
        tracep->declBus(c+2,"B", false,-1, 3,0);
        tracep->declBit(c+3,"A_eq_B", false,-1);
        tracep->declBit(c+4,"A_gt_B", false,-1);
        tracep->declBit(c+5,"A_lt_B", false,-1);
        tracep->declBus(c+1,"Comparator_4bit A", false,-1, 3,0);
        tracep->declBus(c+2,"Comparator_4bit B", false,-1, 3,0);
        tracep->declBit(c+3,"Comparator_4bit A_eq_B", false,-1);
        tracep->declBit(c+4,"Comparator_4bit A_gt_B", false,-1);
        tracep->declBit(c+5,"Comparator_4bit A_lt_B", false,-1);
    }
}

void VComparator_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VComparator_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VComparator_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),4);
        tracep->fullCData(oldp+2,(vlTOPp->B),4);
        tracep->fullBit(oldp+3,(vlTOPp->A_eq_B));
        tracep->fullBit(oldp+4,(vlTOPp->A_gt_B));
        tracep->fullBit(oldp+5,(vlTOPp->A_lt_B));
    }
}
