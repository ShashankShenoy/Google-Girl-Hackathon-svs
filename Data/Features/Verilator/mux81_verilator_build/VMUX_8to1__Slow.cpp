// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX_8to1.h for the primary calling header

#include "VMUX_8to1.h"
#include "VMUX_8to1__Syms.h"

//==========

VL_CTOR_IMP(VMUX_8to1) {
    VMUX_8to1__Syms* __restrict vlSymsp = __VlSymsp = new VMUX_8to1__Syms(this, name());
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMUX_8to1::__Vconfigure(VMUX_8to1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMUX_8to1::~VMUX_8to1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VMUX_8to1::_eval_initial(VMUX_8to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX_8to1::_eval_initial\n"); );
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMUX_8to1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX_8to1::final\n"); );
    // Variables
    VMUX_8to1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMUX_8to1::_eval_settle(VMUX_8to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX_8to1::_eval_settle\n"); );
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VMUX_8to1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX_8to1::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    C = VL_RAND_RESET_I(1);
    D = VL_RAND_RESET_I(1);
    E = VL_RAND_RESET_I(1);
    F = VL_RAND_RESET_I(1);
    G = VL_RAND_RESET_I(1);
    H = VL_RAND_RESET_I(1);
    S = VL_RAND_RESET_I(3);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
