// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_to_gray_converter.h for the primary calling header

#include "Vbinary_to_gray_converter.h"
#include "Vbinary_to_gray_converter__Syms.h"

//==========

VL_CTOR_IMP(Vbinary_to_gray_converter) {
    Vbinary_to_gray_converter__Syms* __restrict vlSymsp = __VlSymsp = new Vbinary_to_gray_converter__Syms(this, name());
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbinary_to_gray_converter::__Vconfigure(Vbinary_to_gray_converter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbinary_to_gray_converter::~Vbinary_to_gray_converter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vbinary_to_gray_converter::_eval_initial(Vbinary_to_gray_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray_converter::_eval_initial\n"); );
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbinary_to_gray_converter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray_converter::final\n"); );
    // Variables
    Vbinary_to_gray_converter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbinary_to_gray_converter::_eval_settle(Vbinary_to_gray_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray_converter::_eval_settle\n"); );
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vbinary_to_gray_converter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray_converter::_ctor_var_reset\n"); );
    // Body
    binary = VL_RAND_RESET_I(4);
    gray = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
