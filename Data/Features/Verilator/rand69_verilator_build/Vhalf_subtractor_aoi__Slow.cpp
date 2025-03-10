// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_subtractor_aoi.h for the primary calling header

#include "Vhalf_subtractor_aoi.h"
#include "Vhalf_subtractor_aoi__Syms.h"

//==========

VL_CTOR_IMP(Vhalf_subtractor_aoi) {
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = __VlSymsp = new Vhalf_subtractor_aoi__Syms(this, name());
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhalf_subtractor_aoi::__Vconfigure(Vhalf_subtractor_aoi__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vhalf_subtractor_aoi::~Vhalf_subtractor_aoi() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vhalf_subtractor_aoi::_eval_initial(Vhalf_subtractor_aoi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_subtractor_aoi::_eval_initial\n"); );
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhalf_subtractor_aoi::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_subtractor_aoi::final\n"); );
    // Variables
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhalf_subtractor_aoi::_eval_settle(Vhalf_subtractor_aoi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_subtractor_aoi::_eval_settle\n"); );
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vhalf_subtractor_aoi::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_subtractor_aoi::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    diff = VL_RAND_RESET_I(1);
    borrow = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
