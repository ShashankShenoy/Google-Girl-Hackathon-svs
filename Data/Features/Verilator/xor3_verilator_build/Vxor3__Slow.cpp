// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor3.h for the primary calling header

#include "Vxor3.h"
#include "Vxor3__Syms.h"

//==========

VL_CTOR_IMP(Vxor3) {
    Vxor3__Syms* __restrict vlSymsp = __VlSymsp = new Vxor3__Syms(this, name());
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vxor3::__Vconfigure(Vxor3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vxor3::~Vxor3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vxor3::_eval_initial(Vxor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor3::_eval_initial\n"); );
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor3::final\n"); );
    // Variables
    Vxor3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor3::_eval_settle(Vxor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor3::_eval_settle\n"); );
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vxor3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
