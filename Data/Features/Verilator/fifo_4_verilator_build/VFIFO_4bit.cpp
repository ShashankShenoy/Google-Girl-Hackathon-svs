// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_4bit.h for the primary calling header

#include "VFIFO_4bit.h"
#include "VFIFO_4bit__Syms.h"

//==========

void VFIFO_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFIFO_4bit::eval\n"); );
    VFIFO_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/fifo_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFIFO_4bit::_eval_initial_loop(VFIFO_4bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/fifo_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFIFO_4bit::_sequent__TOP__1(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_sequent__TOP__1\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__FIFO_4bit__DOT__wr_ptr;
    CData/*1:0*/ __Vdly__FIFO_4bit__DOT__rd_ptr;
    CData/*0:0*/ __Vdly__full;
    CData/*0:0*/ __Vdly__empty;
    CData/*1:0*/ __Vdlyvdim0__FIFO_4bit__DOT__fifo__v0;
    CData/*3:0*/ __Vdlyvval__FIFO_4bit__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__FIFO_4bit__DOT__fifo__v0;
    // Body
    __Vdly__empty = vlTOPp->empty;
    __Vdly__full = vlTOPp->full;
    __Vdly__FIFO_4bit__DOT__rd_ptr = vlTOPp->FIFO_4bit__DOT__rd_ptr;
    __Vdly__FIFO_4bit__DOT__wr_ptr = vlTOPp->FIFO_4bit__DOT__wr_ptr;
    __Vdlyvset__FIFO_4bit__DOT__fifo__v0 = 0U;
    if (vlTOPp->rst) {
        __Vdly__FIFO_4bit__DOT__wr_ptr = 0U;
        __Vdly__FIFO_4bit__DOT__rd_ptr = 0U;
        __Vdly__full = 0U;
        __Vdly__empty = 1U;
    } else {
        if (((IData)(vlTOPp->write) & (~ (IData)(vlTOPp->full)))) {
            __Vdlyvval__FIFO_4bit__DOT__fifo__v0 = vlTOPp->data_in;
            __Vdlyvset__FIFO_4bit__DOT__fifo__v0 = 1U;
            __Vdlyvdim0__FIFO_4bit__DOT__fifo__v0 = vlTOPp->FIFO_4bit__DOT__wr_ptr;
            __Vdly__empty = 0U;
            __Vdly__FIFO_4bit__DOT__wr_ptr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlTOPp->FIFO_4bit__DOT__wr_ptr)));
            if (((IData)(vlTOPp->FIFO_4bit__DOT__wr_ptr) 
                 == (IData)(vlTOPp->FIFO_4bit__DOT__rd_ptr))) {
                __Vdly__full = 1U;
            }
        }
        if (((IData)(vlTOPp->read) & (~ (IData)(vlTOPp->empty)))) {
            vlTOPp->data_out = vlTOPp->FIFO_4bit__DOT__fifo
                [vlTOPp->FIFO_4bit__DOT__rd_ptr];
            __Vdly__full = 0U;
            __Vdly__FIFO_4bit__DOT__rd_ptr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlTOPp->FIFO_4bit__DOT__rd_ptr)));
            if (((IData)(vlTOPp->FIFO_4bit__DOT__rd_ptr) 
                 == (IData)(vlTOPp->FIFO_4bit__DOT__wr_ptr))) {
                __Vdly__empty = 1U;
            }
        }
    }
    vlTOPp->FIFO_4bit__DOT__wr_ptr = __Vdly__FIFO_4bit__DOT__wr_ptr;
    vlTOPp->FIFO_4bit__DOT__rd_ptr = __Vdly__FIFO_4bit__DOT__rd_ptr;
    vlTOPp->full = __Vdly__full;
    vlTOPp->empty = __Vdly__empty;
    if (__Vdlyvset__FIFO_4bit__DOT__fifo__v0) {
        vlTOPp->FIFO_4bit__DOT__fifo[__Vdlyvdim0__FIFO_4bit__DOT__fifo__v0] 
            = __Vdlyvval__FIFO_4bit__DOT__fifo__v0;
    }
}

void VFIFO_4bit::_eval(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_eval\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

VL_INLINE_OPT QData VFIFO_4bit::_change_request(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_change_request\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFIFO_4bit::_change_request_1(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_change_request_1\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFIFO_4bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((data_in & 0xf0U))) {
        Verilated::overWidthError("data_in");}
    if (VL_UNLIKELY((write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((read & 0xfeU))) {
        Verilated::overWidthError("read");}
}
#endif  // VL_DEBUG
