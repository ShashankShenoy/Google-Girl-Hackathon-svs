// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_32bit.h for the primary calling header

#include "Valu_32bit.h"
#include "Valu_32bit__Syms.h"

//==========

VL_CTOR_IMP(Valu_32bit) {
    Valu_32bit__Syms* __restrict vlSymsp = __VlSymsp = new Valu_32bit__Syms(this, name());
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu_32bit::__Vconfigure(Valu_32bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Valu_32bit::~Valu_32bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Valu_32bit::_eval_initial(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_eval_initial\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu_32bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::final\n"); );
    // Variables
    Valu_32bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu_32bit::_eval_settle(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_eval_settle\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Valu_32bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(32);
    b = VL_RAND_RESET_I(32);
    op = VL_RAND_RESET_I(4);
    result = VL_RAND_RESET_I(32);
    zero = VL_RAND_RESET_I(1);
    overflow = VL_RAND_RESET_I(1);
    carry_out = VL_RAND_RESET_I(1);
    alu_32bit__DOT__sub_result = VL_RAND_RESET_I(32);
    alu_32bit__DOT__sub_cout = VL_RAND_RESET_I(1);
    alu_32bit__DOT__add_overflow = VL_RAND_RESET_I(1);
    alu_32bit__DOT__sub_overflow = VL_RAND_RESET_I(1);
    alu_32bit__DOT__adder_b = VL_RAND_RESET_I(32);
    alu_32bit__DOT__adder_result = VL_RAND_RESET_Q(33);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
