// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfull_adder_flipflop__Syms.h"


void Vfull_adder_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vfull_adder_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->a));
        tracep->chgBit(oldp+3,(vlTOPp->b));
        tracep->chgBit(oldp+4,(vlTOPp->cin));
        tracep->chgBit(oldp+5,(vlTOPp->sum));
        tracep->chgBit(oldp+6,((((IData)(vlTOPp->a) 
                                 ^ (IData)(vlTOPp->b)) 
                                ^ (IData)(vlTOPp->cin))));
        tracep->chgBit(oldp+7,(((((IData)(vlTOPp->a) 
                                  & (IData)(vlTOPp->b)) 
                                 | ((IData)(vlTOPp->b) 
                                    & (IData)(vlTOPp->cin))) 
                                | ((IData)(vlTOPp->a) 
                                   & (IData)(vlTOPp->cin)))));
    }
}

void Vfull_adder_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
