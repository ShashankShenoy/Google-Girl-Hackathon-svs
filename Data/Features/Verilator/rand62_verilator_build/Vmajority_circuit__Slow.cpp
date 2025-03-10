// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmajority_circuit.h for the primary calling header

#include "Vmajority_circuit.h"
#include "Vmajority_circuit__Syms.h"

//==========

VL_CTOR_IMP(Vmajority_circuit) {
    Vmajority_circuit__Syms* __restrict vlSymsp = __VlSymsp = new Vmajority_circuit__Syms(this, name());
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmajority_circuit::__Vconfigure(Vmajority_circuit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmajority_circuit::~Vmajority_circuit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmajority_circuit::_eval_initial(Vmajority_circuit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmajority_circuit::_eval_initial\n"); );
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmajority_circuit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmajority_circuit::final\n"); );
    // Variables
    Vmajority_circuit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmajority_circuit::_eval_settle(Vmajority_circuit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmajority_circuit::_eval_settle\n"); );
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vmajority_circuit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmajority_circuit::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
