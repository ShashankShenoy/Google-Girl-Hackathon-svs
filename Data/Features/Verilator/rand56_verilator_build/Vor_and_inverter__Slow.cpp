// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_and_inverter.h for the primary calling header

#include "Vor_and_inverter.h"
#include "Vor_and_inverter__Syms.h"

//==========

VL_CTOR_IMP(Vor_and_inverter) {
    Vor_and_inverter__Syms* __restrict vlSymsp = __VlSymsp = new Vor_and_inverter__Syms(this, name());
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vor_and_inverter::__Vconfigure(Vor_and_inverter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vor_and_inverter::~Vor_and_inverter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vor_and_inverter::_eval_initial(Vor_and_inverter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_and_inverter::_eval_initial\n"); );
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_and_inverter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_and_inverter::final\n"); );
    // Variables
    Vor_and_inverter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_and_inverter::_eval_settle(Vor_and_inverter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_and_inverter::_eval_settle\n"); );
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vor_and_inverter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_and_inverter::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
