// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO_4bit__Syms.h"


//======================

void VFIFO_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFIFO_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFIFO_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFIFO_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFIFO_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"clk", false,-1);
        tracep->declBit(c+8,"rst", false,-1);
        tracep->declBus(c+9,"data_in", false,-1, 3,0);
        tracep->declBit(c+10,"write", false,-1);
        tracep->declBit(c+11,"read", false,-1);
        tracep->declBus(c+12,"data_out", false,-1, 3,0);
        tracep->declBit(c+13,"full", false,-1);
        tracep->declBit(c+14,"empty", false,-1);
        tracep->declBit(c+7,"FIFO_4bit clk", false,-1);
        tracep->declBit(c+8,"FIFO_4bit rst", false,-1);
        tracep->declBus(c+9,"FIFO_4bit data_in", false,-1, 3,0);
        tracep->declBit(c+10,"FIFO_4bit write", false,-1);
        tracep->declBit(c+11,"FIFO_4bit read", false,-1);
        tracep->declBus(c+12,"FIFO_4bit data_out", false,-1, 3,0);
        tracep->declBit(c+13,"FIFO_4bit full", false,-1);
        tracep->declBit(c+14,"FIFO_4bit empty", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"FIFO_4bit fifo", true,(i+0), 3,0);}}
        tracep->declBus(c+5,"FIFO_4bit wr_ptr", false,-1, 1,0);
        tracep->declBus(c+6,"FIFO_4bit rd_ptr", false,-1, 1,0);
    }
}

void VFIFO_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFIFO_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFIFO_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->FIFO_4bit__DOT__fifo[0]),4);
        tracep->fullCData(oldp+2,(vlTOPp->FIFO_4bit__DOT__fifo[1]),4);
        tracep->fullCData(oldp+3,(vlTOPp->FIFO_4bit__DOT__fifo[2]),4);
        tracep->fullCData(oldp+4,(vlTOPp->FIFO_4bit__DOT__fifo[3]),4);
        tracep->fullCData(oldp+5,(vlTOPp->FIFO_4bit__DOT__wr_ptr),2);
        tracep->fullCData(oldp+6,(vlTOPp->FIFO_4bit__DOT__rd_ptr),2);
        tracep->fullBit(oldp+7,(vlTOPp->clk));
        tracep->fullBit(oldp+8,(vlTOPp->rst));
        tracep->fullCData(oldp+9,(vlTOPp->data_in),4);
        tracep->fullBit(oldp+10,(vlTOPp->write));
        tracep->fullBit(oldp+11,(vlTOPp->read));
        tracep->fullCData(oldp+12,(vlTOPp->data_out),4);
        tracep->fullBit(oldp+13,(vlTOPp->full));
        tracep->fullBit(oldp+14,(vlTOPp->empty));
    }
}
