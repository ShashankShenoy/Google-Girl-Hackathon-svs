// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDemux_1to2.h for the primary calling header

#include "VDemux_1to2.h"
#include "VDemux_1to2__Syms.h"

//==========

VL_CTOR_IMP(VDemux_1to2) {
    VDemux_1to2__Syms* __restrict vlSymsp = __VlSymsp = new VDemux_1to2__Syms(this, name());
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDemux_1to2::__Vconfigure(VDemux_1to2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDemux_1to2::~VDemux_1to2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDemux_1to2::_eval_initial(VDemux_1to2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to2::_eval_initial\n"); );
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDemux_1to2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to2::final\n"); );
    // Variables
    VDemux_1to2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDemux_1to2::_eval_settle(VDemux_1to2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to2::_eval_settle\n"); );
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VDemux_1to2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to2::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    S = VL_RAND_RESET_I(1);
    Y0 = VL_RAND_RESET_I(1);
    Y1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
