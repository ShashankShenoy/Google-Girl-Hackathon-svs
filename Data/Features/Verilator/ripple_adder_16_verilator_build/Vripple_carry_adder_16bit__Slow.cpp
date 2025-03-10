// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_carry_adder_16bit.h for the primary calling header

#include "Vripple_carry_adder_16bit.h"
#include "Vripple_carry_adder_16bit__Syms.h"

//==========

VL_CTOR_IMP(Vripple_carry_adder_16bit) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = __VlSymsp = new Vripple_carry_adder_16bit__Syms(this, name());
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vripple_carry_adder_16bit::__Vconfigure(Vripple_carry_adder_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vripple_carry_adder_16bit::~Vripple_carry_adder_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vripple_carry_adder_16bit::_eval_initial(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_eval_initial\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vripple_carry_adder_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::final\n"); );
    // Variables
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vripple_carry_adder_16bit::_eval_settle(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_eval_settle\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vripple_carry_adder_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(16);
    b = VL_RAND_RESET_I(16);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(16);
    cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT__carry = VL_RAND_RESET_I(16);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__1__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__2__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__3__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__4__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__5__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__6__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__7__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__8__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__9__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__10__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__11__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__12__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__13__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__14__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__15__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    __Vchglast__TOP__ripple_carry_adder_16bit__DOT__carry = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
