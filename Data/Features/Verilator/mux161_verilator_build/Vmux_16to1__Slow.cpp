// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_16to1.h for the primary calling header

#include "Vmux_16to1.h"
#include "Vmux_16to1__Syms.h"

//==========

VL_CTOR_IMP(Vmux_16to1) {
    Vmux_16to1__Syms* __restrict vlSymsp = __VlSymsp = new Vmux_16to1__Syms(this, name());
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmux_16to1::__Vconfigure(Vmux_16to1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmux_16to1::~Vmux_16to1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmux_16to1::_eval_initial(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_eval_initial\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_16to1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::final\n"); );
    // Variables
    Vmux_16to1__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_16to1::_eval_settle(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_eval_settle\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vmux_16to1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_ctor_var_reset\n"); );
    // Body
    data_in = VL_RAND_RESET_I(16);
    select = VL_RAND_RESET_I(4);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
