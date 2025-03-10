// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComparator_2bit__Syms.h"


//======================

void VComparator_2bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VComparator_2bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComparator_2bit__Syms* __restrict vlSymsp = static_cast<VComparator_2bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VComparator_2bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VComparator_2bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VComparator_2bit__Syms* __restrict vlSymsp = static_cast<VComparator_2bit__Syms*>(userp);
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VComparator_2bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_2bit__Syms* __restrict vlSymsp = static_cast<VComparator_2bit__Syms*>(userp);
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 1,0);
        tracep->declBus(c+2,"B", false,-1, 1,0);
        tracep->declBit(c+3,"A_eq_B", false,-1);
        tracep->declBit(c+4,"A_gt_B", false,-1);
        tracep->declBit(c+5,"A_lt_B", false,-1);
        tracep->declBus(c+1,"Comparator_2bit A", false,-1, 1,0);
        tracep->declBus(c+2,"Comparator_2bit B", false,-1, 1,0);
        tracep->declBit(c+3,"Comparator_2bit A_eq_B", false,-1);
        tracep->declBit(c+4,"Comparator_2bit A_gt_B", false,-1);
        tracep->declBit(c+5,"Comparator_2bit A_lt_B", false,-1);
    }
}

void VComparator_2bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VComparator_2bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VComparator_2bit__Syms* __restrict vlSymsp = static_cast<VComparator_2bit__Syms*>(userp);
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VComparator_2bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_2bit__Syms* __restrict vlSymsp = static_cast<VComparator_2bit__Syms*>(userp);
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),2);
        tracep->fullCData(oldp+2,(vlTOPp->B),2);
        tracep->fullBit(oldp+3,(vlTOPp->A_eq_B));
        tracep->fullBit(oldp+4,(vlTOPp->A_gt_B));
        tracep->fullBit(oldp+5,(vlTOPp->A_lt_B));
    }
}
