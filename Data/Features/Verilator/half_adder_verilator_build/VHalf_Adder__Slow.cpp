// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHalf_Adder.h for the primary calling header

#include "VHalf_Adder.h"
#include "VHalf_Adder__Syms.h"

//==========

VL_CTOR_IMP(VHalf_Adder) {
    VHalf_Adder__Syms* __restrict vlSymsp = __VlSymsp = new VHalf_Adder__Syms(this, name());
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHalf_Adder::__Vconfigure(VHalf_Adder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VHalf_Adder::~VHalf_Adder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VHalf_Adder::_eval_initial(VHalf_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHalf_Adder::_eval_initial\n"); );
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHalf_Adder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHalf_Adder::final\n"); );
    // Variables
    VHalf_Adder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHalf_Adder::_eval_settle(VHalf_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHalf_Adder::_eval_settle\n"); );
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VHalf_Adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHalf_Adder::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Sum = VL_RAND_RESET_I(1);
    Carry = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
