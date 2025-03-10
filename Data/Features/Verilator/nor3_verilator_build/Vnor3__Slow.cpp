// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnor3.h for the primary calling header

#include "Vnor3.h"
#include "Vnor3__Syms.h"

//==========

VL_CTOR_IMP(Vnor3) {
    Vnor3__Syms* __restrict vlSymsp = __VlSymsp = new Vnor3__Syms(this, name());
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vnor3::__Vconfigure(Vnor3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vnor3::~Vnor3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vnor3::_eval_initial(Vnor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor3::_eval_initial\n"); );
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnor3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor3::final\n"); );
    // Variables
    Vnor3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnor3::_eval_settle(Vnor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor3::_eval_settle\n"); );
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vnor3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
