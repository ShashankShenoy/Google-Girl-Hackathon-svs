// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_16bit.h for the primary calling header

#include "VALU_16bit.h"
#include "VALU_16bit__Syms.h"

//==========

VL_CTOR_IMP(VALU_16bit) {
    VALU_16bit__Syms* __restrict vlSymsp = __VlSymsp = new VALU_16bit__Syms(this, name());
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VALU_16bit::__Vconfigure(VALU_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VALU_16bit::~VALU_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VALU_16bit::_eval_initial(VALU_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_16bit::_eval_initial\n"); );
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VALU_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_16bit::final\n"); );
    // Variables
    VALU_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VALU_16bit::_eval_settle(VALU_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_16bit::_eval_settle\n"); );
    VALU_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VALU_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_16bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(16);
    B = VL_RAND_RESET_I(16);
    ALUControl = VL_RAND_RESET_I(4);
    Result = VL_RAND_RESET_I(16);
    Zero = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
