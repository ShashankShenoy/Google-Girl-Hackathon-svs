// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand4_or.h for the primary calling header

#include "Vand4_or.h"
#include "Vand4_or__Syms.h"

//==========

VL_CTOR_IMP(Vand4_or) {
    Vand4_or__Syms* __restrict vlSymsp = __VlSymsp = new Vand4_or__Syms(this, name());
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vand4_or::__Vconfigure(Vand4_or__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vand4_or::~Vand4_or() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vand4_or::_eval_initial(Vand4_or__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand4_or::_eval_initial\n"); );
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand4_or::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand4_or::final\n"); );
    // Variables
    Vand4_or__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand4_or::_eval_settle(Vand4_or__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand4_or::_eval_settle\n"); );
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vand4_or::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand4_or::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    d = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
