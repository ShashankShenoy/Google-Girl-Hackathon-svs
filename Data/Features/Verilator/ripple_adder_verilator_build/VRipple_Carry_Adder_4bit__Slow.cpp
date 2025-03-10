// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRipple_Carry_Adder_4bit.h for the primary calling header

#include "VRipple_Carry_Adder_4bit.h"
#include "VRipple_Carry_Adder_4bit__Syms.h"

//==========

VL_CTOR_IMP(VRipple_Carry_Adder_4bit) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VRipple_Carry_Adder_4bit__Syms(this, name());
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRipple_Carry_Adder_4bit::__Vconfigure(VRipple_Carry_Adder_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRipple_Carry_Adder_4bit::~VRipple_Carry_Adder_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRipple_Carry_Adder_4bit::_eval_initial(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_eval_initial\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRipple_Carry_Adder_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::final\n"); );
    // Variables
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRipple_Carry_Adder_4bit::_eval_settle(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_eval_settle\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VRipple_Carry_Adder_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(4);
    B = VL_RAND_RESET_I(4);
    Cin = VL_RAND_RESET_I(1);
    Sum = VL_RAND_RESET_I(4);
    Cout = VL_RAND_RESET_I(1);
    Ripple_Carry_Adder_4bit__DOT__C1 = VL_RAND_RESET_I(1);
    Ripple_Carry_Adder_4bit__DOT__C2 = VL_RAND_RESET_I(1);
    Ripple_Carry_Adder_4bit__DOT__C3 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
