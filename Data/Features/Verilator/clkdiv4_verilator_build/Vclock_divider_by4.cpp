// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider_by4.h for the primary calling header

#include "Vclock_divider_by4.h"
#include "Vclock_divider_by4__Syms.h"

//==========

void Vclock_divider_by4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclock_divider_by4::eval\n"); );
    Vclock_divider_by4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vclock_divider_by4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/clkdiv4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vclock_divider_by4::_eval_initial_loop(Vclock_divider_by4__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/clkdiv4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vclock_divider_by4::_sequent__TOP__1(Vclock_divider_by4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by4::_sequent__TOP__1\n"); );
    Vclock_divider_by4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__clock_divider_by4__DOT__count;
    CData/*0:0*/ __Vdly__clk_div4;
    // Body
    __Vdly__clk_div4 = vlTOPp->clk_div4;
    __Vdly__clock_divider_by4__DOT__count = vlTOPp->clock_divider_by4__DOT__count;
    if (vlTOPp->rst) {
        __Vdly__clock_divider_by4__DOT__count = 0U;
        __Vdly__clk_div4 = 0U;
    } else {
        __Vdly__clock_divider_by4__DOT__count = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->clock_divider_by4__DOT__count)));
        if ((3U == (IData)(vlTOPp->clock_divider_by4__DOT__count))) {
            __Vdly__clk_div4 = (1U & (~ (IData)(vlTOPp->clk_div4)));
        }
    }
    vlTOPp->clock_divider_by4__DOT__count = __Vdly__clock_divider_by4__DOT__count;
    vlTOPp->clk_div4 = __Vdly__clk_div4;
}

void Vclock_divider_by4::_eval(Vclock_divider_by4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by4::_eval\n"); );
    Vclock_divider_by4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

VL_INLINE_OPT QData Vclock_divider_by4::_change_request(Vclock_divider_by4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by4::_change_request\n"); );
    Vclock_divider_by4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vclock_divider_by4::_change_request_1(Vclock_divider_by4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by4::_change_request_1\n"); );
    Vclock_divider_by4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vclock_divider_by4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
