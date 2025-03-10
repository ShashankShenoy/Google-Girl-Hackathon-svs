// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_16x8.h for the primary calling header

#include "Vram_16x8.h"
#include "Vram_16x8__Syms.h"

//==========

void Vram_16x8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram_16x8::eval\n"); );
    Vram_16x8__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ram_16x8.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vram_16x8::_eval_initial_loop(Vram_16x8__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ram_16x8.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vram_16x8::_sequent__TOP__1(Vram_16x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_16x8::_sequent__TOP__1\n"); );
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__ram_16x8__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__ram_16x8__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__ram_16x8__DOT__memory__v0;
    // Body
    __Vdlyvset__ram_16x8__DOT__memory__v0 = 0U;
    vlTOPp->data_out = vlTOPp->ram_16x8__DOT__memory
        [vlTOPp->address];
    if (vlTOPp->write_enable) {
        __Vdlyvval__ram_16x8__DOT__memory__v0 = vlTOPp->data_in;
        __Vdlyvset__ram_16x8__DOT__memory__v0 = 1U;
        __Vdlyvdim0__ram_16x8__DOT__memory__v0 = vlTOPp->address;
    }
    if (__Vdlyvset__ram_16x8__DOT__memory__v0) {
        vlTOPp->ram_16x8__DOT__memory[__Vdlyvdim0__ram_16x8__DOT__memory__v0] 
            = __Vdlyvval__ram_16x8__DOT__memory__v0;
    }
}

void Vram_16x8::_eval(Vram_16x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_16x8::_eval\n"); );
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vram_16x8::_change_request(Vram_16x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_16x8::_change_request\n"); );
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vram_16x8::_change_request_1(Vram_16x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_16x8::_change_request_1\n"); );
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vram_16x8::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_16x8::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
    if (VL_UNLIKELY((address & 0xf0U))) {
        Verilated::overWidthError("address");}
}
#endif  // VL_DEBUG
