// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvending_machine_fsm__Syms.h"


void Vvending_machine_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vvending_machine_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->nickel));
        tracep->chgBit(oldp+3,(vlTOPp->dime));
        tracep->chgBit(oldp+4,(vlTOPp->quarter));
        tracep->chgBit(oldp+5,(vlTOPp->dispense));
        tracep->chgCData(oldp+6,(vlTOPp->credit),6);
        tracep->chgCData(oldp+7,(vlTOPp->vending_machine_fsm__DOT__state),2);
        tracep->chgCData(oldp+8,(((0U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
                                   ? ((((IData)(vlTOPp->nickel) 
                                        | (IData)(vlTOPp->dime)) 
                                       | (IData)(vlTOPp->quarter))
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
                                    ? ((0x19U <= (IData)(vlTOPp->credit))
                                        ? 2U : 1U) : 0U))),2);
    }
}

void Vvending_machine_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
