// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComparator_16bit.h for the primary calling header

#include "VComparator_16bit.h"
#include "VComparator_16bit__Syms.h"

//==========

VL_CTOR_IMP(VComparator_16bit) {
    VComparator_16bit__Syms* __restrict vlSymsp = __VlSymsp = new VComparator_16bit__Syms(this, name());
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VComparator_16bit::__Vconfigure(VComparator_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VComparator_16bit::~VComparator_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VComparator_16bit::_eval_initial(VComparator_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_16bit::_eval_initial\n"); );
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComparator_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_16bit::final\n"); );
    // Variables
    VComparator_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComparator_16bit::_eval_settle(VComparator_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_16bit::_eval_settle\n"); );
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VComparator_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_16bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(16);
    B = VL_RAND_RESET_I(16);
    A_eq_B = VL_RAND_RESET_I(1);
    A_gt_B = VL_RAND_RESET_I(1);
    A_lt_B = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
