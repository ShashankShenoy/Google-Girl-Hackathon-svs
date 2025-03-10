// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand3.h for the primary calling header

#include "Vand3.h"
#include "Vand3__Syms.h"

//==========

VL_CTOR_IMP(Vand3) {
    Vand3__Syms* __restrict vlSymsp = __VlSymsp = new Vand3__Syms(this, name());
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vand3::__Vconfigure(Vand3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vand3::~Vand3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vand3::_eval_initial(Vand3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand3::_eval_initial\n"); );
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand3::final\n"); );
    // Variables
    Vand3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand3::_eval_settle(Vand3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand3::_eval_settle\n"); );
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vand3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
