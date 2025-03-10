// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhalf_adder_aoi__Syms.h"


void Vhalf_adder_aoi::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vhalf_adder_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_adder_aoi__Syms*>(userp);
    Vhalf_adder_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vhalf_adder_aoi::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vhalf_adder_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_adder_aoi__Syms*>(userp);
    Vhalf_adder_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->sum));
        tracep->chgBit(oldp+3,(vlTOPp->carry));
    }
}

void Vhalf_adder_aoi::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vhalf_adder_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_adder_aoi__Syms*>(userp);
    Vhalf_adder_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
