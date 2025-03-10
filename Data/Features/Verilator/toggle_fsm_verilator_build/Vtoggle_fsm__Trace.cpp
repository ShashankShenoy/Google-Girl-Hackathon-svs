// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtoggle_fsm__Syms.h"


void Vtoggle_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtoggle_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->trigger));
        tracep->chgBit(oldp+3,(vlTOPp->state_out));
        tracep->chgBit(oldp+4,(vlTOPp->toggle_fsm__DOT__current_state));
        tracep->chgBit(oldp+5,(((IData)(vlTOPp->toggle_fsm__DOT__current_state)
                                 ? ((IData)(vlTOPp->toggle_fsm__DOT__current_state) 
                                    & (~ (IData)(vlTOPp->trigger)))
                                 : (IData)(vlTOPp->trigger))));
    }
}

void Vtoggle_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
