// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO_4bit__Syms.h"


void VFIFO_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFIFO_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->FIFO_4bit__DOT__fifo[0]),4);
            tracep->chgCData(oldp+1,(vlTOPp->FIFO_4bit__DOT__fifo[1]),4);
            tracep->chgCData(oldp+2,(vlTOPp->FIFO_4bit__DOT__fifo[2]),4);
            tracep->chgCData(oldp+3,(vlTOPp->FIFO_4bit__DOT__fifo[3]),4);
            tracep->chgCData(oldp+4,(vlTOPp->FIFO_4bit__DOT__wr_ptr),2);
            tracep->chgCData(oldp+5,(vlTOPp->FIFO_4bit__DOT__rd_ptr),2);
        }
        tracep->chgBit(oldp+6,(vlTOPp->clk));
        tracep->chgBit(oldp+7,(vlTOPp->rst));
        tracep->chgCData(oldp+8,(vlTOPp->data_in),4);
        tracep->chgBit(oldp+9,(vlTOPp->write));
        tracep->chgBit(oldp+10,(vlTOPp->read));
        tracep->chgCData(oldp+11,(vlTOPp->data_out),4);
        tracep->chgBit(oldp+12,(vlTOPp->full));
        tracep->chgBit(oldp+13,(vlTOPp->empty));
    }
}

void VFIFO_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFIFO_4bit__Syms* __restrict vlSymsp = static_cast<VFIFO_4bit__Syms*>(userp);
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
