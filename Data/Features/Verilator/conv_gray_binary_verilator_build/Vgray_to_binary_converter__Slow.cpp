// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgray_to_binary_converter.h for the primary calling header

#include "Vgray_to_binary_converter.h"
#include "Vgray_to_binary_converter__Syms.h"

//==========

VL_CTOR_IMP(Vgray_to_binary_converter) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = __VlSymsp = new Vgray_to_binary_converter__Syms(this, name());
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vgray_to_binary_converter::__Vconfigure(Vgray_to_binary_converter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vgray_to_binary_converter::~Vgray_to_binary_converter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vgray_to_binary_converter::_eval_initial(Vgray_to_binary_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary_converter::_eval_initial\n"); );
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vgray_to_binary_converter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary_converter::final\n"); );
    // Variables
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vgray_to_binary_converter::_eval_settle(Vgray_to_binary_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary_converter::_eval_settle\n"); );
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vgray_to_binary_converter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary_converter::_ctor_var_reset\n"); );
    // Body
    gray = VL_RAND_RESET_I(4);
    binary = VL_RAND_RESET_I(4);
    __Vchglast__TOP__binary = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
