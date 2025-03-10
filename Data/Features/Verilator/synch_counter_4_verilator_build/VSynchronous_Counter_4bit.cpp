// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSynchronous_Counter_4bit.h for the primary calling header

#include "VSynchronous_Counter_4bit.h"
#include "VSynchronous_Counter_4bit__Syms.h"

//==========

void VSynchronous_Counter_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSynchronous_Counter_4bit::eval\n"); );
    VSynchronous_Counter_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/synch_counter_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSynchronous_Counter_4bit::_eval_initial_loop(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/synch_counter_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSynchronous_Counter_4bit::_sequent__TOP__1(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_sequent__TOP__1\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__Q;
    // Body
    __Vdly__Q = vlTOPp->Q;
    if (vlTOPp->rst) {
        __Vdly__Q = 0U;
    } else {
        if (vlTOPp->enable) {
            __Vdly__Q = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Q)));
        }
    }
    vlTOPp->Q = __Vdly__Q;
}

void VSynchronous_Counter_4bit::_eval(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_eval\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

VL_INLINE_OPT QData VSynchronous_Counter_4bit::_change_request(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_change_request\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSynchronous_Counter_4bit::_change_request_1(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_change_request_1\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSynchronous_Counter_4bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
