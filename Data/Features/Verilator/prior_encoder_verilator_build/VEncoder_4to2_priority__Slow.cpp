// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncoder_4to2_priority.h for the primary calling header

#include "VEncoder_4to2_priority.h"
#include "VEncoder_4to2_priority__Syms.h"

//==========
CData/*1:0*/ VEncoder_4to2_priority::__Vtable1_Y[16];
CData/*0:0*/ VEncoder_4to2_priority::__Vtable1_valid[16];

VL_CTOR_IMP(VEncoder_4to2_priority) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = __VlSymsp = new VEncoder_4to2_priority__Syms(this, name());
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEncoder_4to2_priority::__Vconfigure(VEncoder_4to2_priority__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VEncoder_4to2_priority::~VEncoder_4to2_priority() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VEncoder_4to2_priority::_eval_initial(VEncoder_4to2_priority__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_4to2_priority::_eval_initial\n"); );
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEncoder_4to2_priority::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_4to2_priority::final\n"); );
    // Variables
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEncoder_4to2_priority::_eval_settle(VEncoder_4to2_priority__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_4to2_priority::_eval_settle\n"); );
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VEncoder_4to2_priority::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_4to2_priority::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(4);
    Y = VL_RAND_RESET_I(2);
    valid = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_Y[0] = 0U;
    __Vtable1_Y[1] = 0U;
    __Vtable1_Y[2] = 1U;
    __Vtable1_Y[3] = 0U;
    __Vtable1_Y[4] = 2U;
    __Vtable1_Y[5] = 0U;
    __Vtable1_Y[6] = 0U;
    __Vtable1_Y[7] = 0U;
    __Vtable1_Y[8] = 3U;
    __Vtable1_Y[9] = 0U;
    __Vtable1_Y[10] = 0U;
    __Vtable1_Y[11] = 0U;
    __Vtable1_Y[12] = 0U;
    __Vtable1_Y[13] = 0U;
    __Vtable1_Y[14] = 0U;
    __Vtable1_Y[15] = 0U;
    __Vtable1_valid[0] = 0U;
    __Vtable1_valid[1] = 1U;
    __Vtable1_valid[2] = 1U;
    __Vtable1_valid[3] = 0U;
    __Vtable1_valid[4] = 1U;
    __Vtable1_valid[5] = 0U;
    __Vtable1_valid[6] = 0U;
    __Vtable1_valid[7] = 0U;
    __Vtable1_valid[8] = 1U;
    __Vtable1_valid[9] = 0U;
    __Vtable1_valid[10] = 0U;
    __Vtable1_valid[11] = 0U;
    __Vtable1_valid[12] = 0U;
    __Vtable1_valid[13] = 0U;
    __Vtable1_valid[14] = 0U;
    __Vtable1_valid[15] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
