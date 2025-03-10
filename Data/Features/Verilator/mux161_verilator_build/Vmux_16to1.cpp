// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_16to1.h for the primary calling header

#include "Vmux_16to1.h"
#include "Vmux_16to1__Syms.h"

//==========

void Vmux_16to1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux_16to1::eval\n"); );
    Vmux_16to1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/mux161.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux_16to1::_eval_initial_loop(Vmux_16to1__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/mux161.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmux_16to1::_combo__TOP__1(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_combo__TOP__1\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (1U & ((8U & (IData)(vlTOPp->select))
                          ? ((4U & (IData)(vlTOPp->select))
                              ? ((2U & (IData)(vlTOPp->select))
                                  ? ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 0xfU) : 
                                     ((IData)(vlTOPp->data_in) 
                                      >> 0xeU)) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->select))
                                                    ? 
                                                   ((IData)(vlTOPp->data_in) 
                                                    >> 0xdU)
                                                    : 
                                                   ((IData)(vlTOPp->data_in) 
                                                    >> 0xcU)))
                              : ((2U & (IData)(vlTOPp->select))
                                  ? ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 0xbU) : 
                                     ((IData)(vlTOPp->data_in) 
                                      >> 0xaU)) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->select))
                                                    ? 
                                                   ((IData)(vlTOPp->data_in) 
                                                    >> 9U)
                                                    : 
                                                   ((IData)(vlTOPp->data_in) 
                                                    >> 8U))))
                          : ((4U & (IData)(vlTOPp->select))
                              ? ((2U & (IData)(vlTOPp->select))
                                  ? ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 7U) : ((IData)(vlTOPp->data_in) 
                                                   >> 6U))
                                  : ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 5U) : ((IData)(vlTOPp->data_in) 
                                                   >> 4U)))
                              : ((2U & (IData)(vlTOPp->select))
                                  ? ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 3U) : ((IData)(vlTOPp->data_in) 
                                                   >> 2U))
                                  : ((1U & (IData)(vlTOPp->select))
                                      ? ((IData)(vlTOPp->data_in) 
                                         >> 1U) : (IData)(vlTOPp->data_in))))));
}

void Vmux_16to1::_eval(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_eval\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vmux_16to1::_change_request(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_change_request\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmux_16to1::_change_request_1(Vmux_16to1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_change_request_1\n"); );
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux_16to1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_16to1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((select & 0xf0U))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
