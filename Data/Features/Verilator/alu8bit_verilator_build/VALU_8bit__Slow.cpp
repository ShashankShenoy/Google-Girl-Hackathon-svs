// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_8bit.h for the primary calling header

#include "VALU_8bit.h"
#include "VALU_8bit__Syms.h"

//==========

VL_CTOR_IMP(VALU_8bit) {
    VALU_8bit__Syms* __restrict vlSymsp = __VlSymsp = new VALU_8bit__Syms(this, name());
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VALU_8bit::__Vconfigure(VALU_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VALU_8bit::~VALU_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VALU_8bit::_eval_initial(VALU_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_8bit::_eval_initial\n"); );
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VALU_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_8bit::final\n"); );
    // Variables
    VALU_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VALU_8bit::_eval_settle(VALU_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_8bit::_eval_settle\n"); );
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VALU_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_8bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    B = VL_RAND_RESET_I(8);
    ALUControl = VL_RAND_RESET_I(3);
    Result = VL_RAND_RESET_I(8);
    Zero = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
