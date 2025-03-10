// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFull_Adder.h for the primary calling header

#include "VFull_Adder.h"
#include "VFull_Adder__Syms.h"

//==========

VL_CTOR_IMP(VFull_Adder) {
    VFull_Adder__Syms* __restrict vlSymsp = __VlSymsp = new VFull_Adder__Syms(this, name());
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFull_Adder::__Vconfigure(VFull_Adder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFull_Adder::~VFull_Adder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VFull_Adder::_eval_initial(VFull_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Adder::_eval_initial\n"); );
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFull_Adder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Adder::final\n"); );
    // Variables
    VFull_Adder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFull_Adder::_eval_settle(VFull_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Adder::_eval_settle\n"); );
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VFull_Adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Adder::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Cin = VL_RAND_RESET_I(1);
    Sum = VL_RAND_RESET_I(1);
    Carry = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
