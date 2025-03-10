// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier_8bit.h for the primary calling header

#include "VMultiplier_8bit.h"
#include "VMultiplier_8bit__Syms.h"

//==========

VL_CTOR_IMP(VMultiplier_8bit) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = __VlSymsp = new VMultiplier_8bit__Syms(this, name());
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMultiplier_8bit::__Vconfigure(VMultiplier_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMultiplier_8bit::~VMultiplier_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VMultiplier_8bit::_eval_initial(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_eval_initial\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiplier_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::final\n"); );
    // Variables
    VMultiplier_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiplier_8bit::_eval_settle(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_eval_settle\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VMultiplier_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    B = VL_RAND_RESET_I(8);
    Product = VL_RAND_RESET_I(16);
    Multiplier_8bit__DOT__P = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
