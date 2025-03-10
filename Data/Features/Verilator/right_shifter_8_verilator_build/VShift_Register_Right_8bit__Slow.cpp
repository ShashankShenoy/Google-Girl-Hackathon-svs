// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShift_Register_Right_8bit.h for the primary calling header

#include "VShift_Register_Right_8bit.h"
#include "VShift_Register_Right_8bit__Syms.h"

//==========

VL_CTOR_IMP(VShift_Register_Right_8bit) {
    VShift_Register_Right_8bit__Syms* __restrict vlSymsp = __VlSymsp = new VShift_Register_Right_8bit__Syms(this, name());
    VShift_Register_Right_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VShift_Register_Right_8bit::__Vconfigure(VShift_Register_Right_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VShift_Register_Right_8bit::~VShift_Register_Right_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VShift_Register_Right_8bit::_eval_initial(VShift_Register_Right_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShift_Register_Right_8bit::_eval_initial\n"); );
    VShift_Register_Right_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VShift_Register_Right_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShift_Register_Right_8bit::final\n"); );
    // Variables
    VShift_Register_Right_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShift_Register_Right_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShift_Register_Right_8bit::_eval_settle(VShift_Register_Right_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShift_Register_Right_8bit::_eval_settle\n"); );
    VShift_Register_Right_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShift_Register_Right_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShift_Register_Right_8bit::_ctor_var_reset\n"); );
    // Body
    D = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    shift = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
