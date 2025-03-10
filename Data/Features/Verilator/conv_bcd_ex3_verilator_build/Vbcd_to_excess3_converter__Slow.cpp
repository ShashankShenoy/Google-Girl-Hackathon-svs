// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcd_to_excess3_converter.h for the primary calling header

#include "Vbcd_to_excess3_converter.h"
#include "Vbcd_to_excess3_converter__Syms.h"

//==========

VL_CTOR_IMP(Vbcd_to_excess3_converter) {
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = __VlSymsp = new Vbcd_to_excess3_converter__Syms(this, name());
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbcd_to_excess3_converter::__Vconfigure(Vbcd_to_excess3_converter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbcd_to_excess3_converter::~Vbcd_to_excess3_converter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vbcd_to_excess3_converter::_eval_initial(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_eval_initial\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbcd_to_excess3_converter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::final\n"); );
    // Variables
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbcd_to_excess3_converter::_eval_settle(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_eval_settle\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vbcd_to_excess3_converter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_ctor_var_reset\n"); );
    // Body
    bcd = VL_RAND_RESET_I(4);
    excess3 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
