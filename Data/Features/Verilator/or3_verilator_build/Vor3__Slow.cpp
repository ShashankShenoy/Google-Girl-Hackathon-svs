// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor3.h for the primary calling header

#include "Vor3.h"
#include "Vor3__Syms.h"

//==========

VL_CTOR_IMP(Vor3) {
    Vor3__Syms* __restrict vlSymsp = __VlSymsp = new Vor3__Syms(this, name());
    Vor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vor3::__Vconfigure(Vor3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vor3::~Vor3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vor3::_eval_initial(Vor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor3::_eval_initial\n"); );
    Vor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor3::final\n"); );
    // Variables
    Vor3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor3::_eval_settle(Vor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor3::_eval_settle\n"); );
    Vor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vor3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
