// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsequence_detector_1001.h for the primary calling header

#include "Vsequence_detector_1001.h"
#include "Vsequence_detector_1001__Syms.h"

//==========

void Vsequence_detector_1001::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsequence_detector_1001::eval\n"); );
    Vsequence_detector_1001__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/seq_det3.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsequence_detector_1001::_eval_initial_loop(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/seq_det3.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsequence_detector_1001::_sequent__TOP__1(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_sequent__TOP__1\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sequence_detector_1001__DOT__current_state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->sequence_detector_1001__DOT__next_state));
}

VL_INLINE_OPT void Vsequence_detector_1001::_settle__TOP__2(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_settle__TOP__2\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->detected = ((3U == (IData)(vlTOPp->sequence_detector_1001__DOT__current_state)) 
                        & (IData)(vlTOPp->data_in));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->data_in) 
                             << 2U) | (IData)(vlTOPp->sequence_detector_1001__DOT__current_state));
    vlTOPp->sequence_detector_1001__DOT__next_state 
        = vlTOPp->__Vtable1_sequence_detector_1001__DOT__next_state
        [vlTOPp->__Vtableidx1];
}

void Vsequence_detector_1001::_eval(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_eval\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vsequence_detector_1001::_change_request(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_change_request\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsequence_detector_1001::_change_request_1(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_change_request_1\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsequence_detector_1001::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((data_in & 0xfeU))) {
        Verilated::overWidthError("data_in");}
}
#endif  // VL_DEBUG
