// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmealy_fsm_4bit__Syms.h"


void Vmealy_fsm_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmealy_fsm_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->in));
        tracep->chgBit(oldp+3,(vlTOPp->out));
        tracep->chgCData(oldp+4,(vlTOPp->mealy_fsm_4bit__DOT__state),4);
        tracep->chgCData(oldp+5,(((0xeU & ((IData)(vlTOPp->mealy_fsm_4bit__DOT__state) 
                                           << 1U)) 
                                  | (IData)(vlTOPp->in))),4);
    }
}

void Vmealy_fsm_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = static_cast<Vmealy_fsm_4bit__Syms*>(userp);
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
