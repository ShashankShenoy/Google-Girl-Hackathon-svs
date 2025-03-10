// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_mux_flipflop__Syms.h"


void Vxor_mux_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vxor_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_mux_flipflop__Syms*>(userp);
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vxor_mux_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_mux_flipflop__Syms*>(userp);
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->x));
        tracep->chgBit(oldp+3,(vlTOPp->y));
        tracep->chgBit(oldp+4,(vlTOPp->sel));
        tracep->chgBit(oldp+5,(vlTOPp->q));
        tracep->chgBit(oldp+6,(((IData)(vlTOPp->x) 
                                ^ (IData)(vlTOPp->y))));
        tracep->chgBit(oldp+7,(((IData)(vlTOPp->sel)
                                 ? ((IData)(vlTOPp->x) 
                                    ^ (IData)(vlTOPp->y))
                                 : (IData)(vlTOPp->y))));
    }
}

void Vxor_mux_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vxor_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_mux_flipflop__Syms*>(userp);
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
