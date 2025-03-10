// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdoor_lock_controller_fsm__Syms.h"


void Vdoor_lock_controller_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdoor_lock_controller_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->password),4);
        tracep->chgBit(oldp+3,(vlTOPp->try_unlock));
        tracep->chgBit(oldp+4,(vlTOPp->unlocked));
        tracep->chgBit(oldp+5,(vlTOPp->error));
        tracep->chgCData(oldp+6,(vlTOPp->door_lock_controller_fsm__DOT__state),2);
        tracep->chgCData(oldp+7,(vlTOPp->door_lock_controller_fsm__DOT__failed_attempts),2);
    }
}

void Vdoor_lock_controller_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
