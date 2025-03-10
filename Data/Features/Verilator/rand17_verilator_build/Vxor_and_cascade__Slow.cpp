// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor_and_cascade.h for the primary calling header

#include "Vxor_and_cascade.h"
#include "Vxor_and_cascade__Syms.h"

//==========

VL_CTOR_IMP(Vxor_and_cascade) {
    Vxor_and_cascade__Syms* __restrict vlSymsp = __VlSymsp = new Vxor_and_cascade__Syms(this, name());
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vxor_and_cascade::__Vconfigure(Vxor_and_cascade__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vxor_and_cascade::~Vxor_and_cascade() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vxor_and_cascade::_eval_initial(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_eval_initial\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor_and_cascade::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::final\n"); );
    // Variables
    Vxor_and_cascade__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor_and_cascade::_eval_settle(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_eval_settle\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vxor_and_cascade::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
