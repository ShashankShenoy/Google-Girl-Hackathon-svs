// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcarry_lookahead_adder_16bit.h for the primary calling header

#include "Vcarry_lookahead_adder_16bit.h"
#include "Vcarry_lookahead_adder_16bit__Syms.h"

//==========

VL_CTOR_IMP(Vcarry_lookahead_adder_16bit) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = __VlSymsp = new Vcarry_lookahead_adder_16bit__Syms(this, name());
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcarry_lookahead_adder_16bit::__Vconfigure(Vcarry_lookahead_adder_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcarry_lookahead_adder_16bit::~Vcarry_lookahead_adder_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcarry_lookahead_adder_16bit::_eval_initial(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_eval_initial\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcarry_lookahead_adder_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::final\n"); );
    // Variables
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcarry_lookahead_adder_16bit::_eval_settle(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_eval_settle\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vcarry_lookahead_adder_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(16);
    cout = VL_RAND_RESET_I(1);
    carry_lookahead_adder_16bit__DOT__p = VL_RAND_RESET_I(16);
    carry_lookahead_adder_16bit__DOT__g = VL_RAND_RESET_I(16);
    carry_lookahead_adder_16bit__DOT__c = VL_RAND_RESET_I(17);
    __Vchglast__TOP__carry_lookahead_adder_16bit__DOT__c = VL_RAND_RESET_I(17);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
