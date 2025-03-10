// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_32x8.h for the primary calling header

#include "Vram_32x8.h"
#include "Vram_32x8__Syms.h"

//==========

VL_CTOR_IMP(Vram_32x8) {
    Vram_32x8__Syms* __restrict vlSymsp = __VlSymsp = new Vram_32x8__Syms(this, name());
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vram_32x8::__Vconfigure(Vram_32x8__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vram_32x8::~Vram_32x8() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vram_32x8::_eval_initial(Vram_32x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8::_eval_initial\n"); );
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vram_32x8::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8::final\n"); );
    // Variables
    Vram_32x8__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vram_32x8::_eval_settle(Vram_32x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8::_eval_settle\n"); );
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vram_32x8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    write_enable = VL_RAND_RESET_I(1);
    address = VL_RAND_RESET_I(5);
    data_in = VL_RAND_RESET_I(8);
    data_out = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            ram_32x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
