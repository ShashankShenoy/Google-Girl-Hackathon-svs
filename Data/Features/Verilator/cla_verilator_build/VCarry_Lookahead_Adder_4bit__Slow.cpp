// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCarry_Lookahead_Adder_4bit.h for the primary calling header

#include "VCarry_Lookahead_Adder_4bit.h"
#include "VCarry_Lookahead_Adder_4bit__Syms.h"

//==========

VL_CTOR_IMP(VCarry_Lookahead_Adder_4bit) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VCarry_Lookahead_Adder_4bit__Syms(this, name());
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCarry_Lookahead_Adder_4bit::__Vconfigure(VCarry_Lookahead_Adder_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VCarry_Lookahead_Adder_4bit::~VCarry_Lookahead_Adder_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCarry_Lookahead_Adder_4bit::_eval_initial(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_eval_initial\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCarry_Lookahead_Adder_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::final\n"); );
    // Variables
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCarry_Lookahead_Adder_4bit::_eval_settle(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_eval_settle\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VCarry_Lookahead_Adder_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(4);
    B = VL_RAND_RESET_I(4);
    Cin = VL_RAND_RESET_I(1);
    Sum = VL_RAND_RESET_I(4);
    Cout = VL_RAND_RESET_I(1);
    Carry_Lookahead_Adder_4bit__DOT__P = VL_RAND_RESET_I(4);
    Carry_Lookahead_Adder_4bit__DOT__G = VL_RAND_RESET_I(4);
    Carry_Lookahead_Adder_4bit__DOT__C = VL_RAND_RESET_I(4);
    __Vchglast__TOP__Carry_Lookahead_Adder_4bit__DOT__C = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
