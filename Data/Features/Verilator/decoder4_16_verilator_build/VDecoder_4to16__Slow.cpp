// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_4to16.h for the primary calling header

#include "VDecoder_4to16.h"
#include "VDecoder_4to16__Syms.h"

//==========
SData/*15:0*/ VDecoder_4to16::__Vtable1_Y[16];

VL_CTOR_IMP(VDecoder_4to16) {
    VDecoder_4to16__Syms* __restrict vlSymsp = __VlSymsp = new VDecoder_4to16__Syms(this, name());
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDecoder_4to16::__Vconfigure(VDecoder_4to16__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDecoder_4to16::~VDecoder_4to16() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDecoder_4to16::_eval_initial(VDecoder_4to16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_4to16::_eval_initial\n"); );
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder_4to16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_4to16::final\n"); );
    // Variables
    VDecoder_4to16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder_4to16::_eval_settle(VDecoder_4to16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_4to16::_eval_settle\n"); );
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VDecoder_4to16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_4to16::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(4);
    Y = VL_RAND_RESET_I(16);
    __Vtableidx1 = 0;
    __Vtable1_Y[0] = 1U;
    __Vtable1_Y[1] = 2U;
    __Vtable1_Y[2] = 4U;
    __Vtable1_Y[3] = 8U;
    __Vtable1_Y[4] = 0x10U;
    __Vtable1_Y[5] = 0x20U;
    __Vtable1_Y[6] = 0x40U;
    __Vtable1_Y[7] = 0x80U;
    __Vtable1_Y[8] = 0x100U;
    __Vtable1_Y[9] = 0x200U;
    __Vtable1_Y[10] = 0x400U;
    __Vtable1_Y[11] = 0x800U;
    __Vtable1_Y[12] = 0x1000U;
    __Vtable1_Y[13] = 0x2000U;
    __Vtable1_Y[14] = 0x4000U;
    __Vtable1_Y[15] = 0x8000U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
