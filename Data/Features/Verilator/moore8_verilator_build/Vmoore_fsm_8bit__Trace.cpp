// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmoore_fsm_8bit__Syms.h"


void Vmoore_fsm_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmoore_fsm_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->in));
        tracep->chgBit(oldp+3,(vlTOPp->out));
        tracep->chgCData(oldp+4,(vlTOPp->moore_fsm_8bit__DOT__state),8);
        tracep->chgCData(oldp+5,(((0xfeU & ((IData)(vlTOPp->moore_fsm_8bit__DOT__state) 
                                            << 1U)) 
                                  | (IData)(vlTOPp->in))),8);
    }
}

void Vmoore_fsm_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = static_cast<Vmoore_fsm_8bit__Syms*>(userp);
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
