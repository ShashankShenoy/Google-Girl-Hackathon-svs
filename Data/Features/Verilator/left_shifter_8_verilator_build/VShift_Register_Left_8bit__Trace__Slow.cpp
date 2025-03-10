// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShift_Register_Left_8bit__Syms.h"


//======================

void VShift_Register_Left_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VShift_Register_Left_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShift_Register_Left_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VShift_Register_Left_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VShift_Register_Left_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"D", false,-1, 7,0);
        tracep->declBit(c+2,"clk", false,-1);
        tracep->declBit(c+3,"rst", false,-1);
        tracep->declBit(c+4,"shift", false,-1);
        tracep->declBus(c+5,"Q", false,-1, 7,0);
        tracep->declBus(c+1,"Shift_Register_Left_8bit D", false,-1, 7,0);
        tracep->declBit(c+2,"Shift_Register_Left_8bit clk", false,-1);
        tracep->declBit(c+3,"Shift_Register_Left_8bit rst", false,-1);
        tracep->declBit(c+4,"Shift_Register_Left_8bit shift", false,-1);
        tracep->declBus(c+5,"Shift_Register_Left_8bit Q", false,-1, 7,0);
    }
}

void VShift_Register_Left_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VShift_Register_Left_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VShift_Register_Left_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->D),8);
        tracep->fullBit(oldp+2,(vlTOPp->clk));
        tracep->fullBit(oldp+3,(vlTOPp->rst));
        tracep->fullBit(oldp+4,(vlTOPp->shift));
        tracep->fullCData(oldp+5,(vlTOPp->Q),8);
    }
}
