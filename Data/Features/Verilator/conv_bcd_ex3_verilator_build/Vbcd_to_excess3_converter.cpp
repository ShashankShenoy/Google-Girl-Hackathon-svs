// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcd_to_excess3_converter.h for the primary calling header

#include "Vbcd_to_excess3_converter.h"
#include "Vbcd_to_excess3_converter__Syms.h"

//==========

void Vbcd_to_excess3_converter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbcd_to_excess3_converter::eval\n"); );
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/conv_bcd_ex3.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbcd_to_excess3_converter::_eval_initial_loop(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/conv_bcd_ex3.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vbcd_to_excess3_converter::_combo__TOP__1(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_combo__TOP__1\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->excess3 = ((0xeU & (IData)(vlTOPp->excess3)) 
                       | (1U & (~ (IData)(vlTOPp->bcd))));
    vlTOPp->excess3 = ((0xdU & (IData)(vlTOPp->excess3)) 
                       | (2U & ((0xfffffffeU & ((IData)(vlTOPp->bcd) 
                                                & ((IData)(vlTOPp->bcd) 
                                                   << 1U))) 
                                | (((~ ((IData)(vlTOPp->bcd) 
                                        >> 1U)) & (~ (IData)(vlTOPp->bcd))) 
                                   << 1U))));
    vlTOPp->excess3 = ((0xbU & (IData)(vlTOPp->excess3)) 
                       | (4U & ((0xfffffffcU & ((IData)(vlTOPp->bcd) 
                                                & (((IData)(vlTOPp->bcd) 
                                                    << 2U) 
                                                   | ((IData)(vlTOPp->bcd) 
                                                      << 1U)))) 
                                | ((((~ ((IData)(vlTOPp->bcd) 
                                         >> 2U)) & 
                                     (~ ((IData)(vlTOPp->bcd) 
                                         >> 1U))) & 
                                    (~ (IData)(vlTOPp->bcd))) 
                                   << 2U))));
    vlTOPp->excess3 = ((7U & (IData)(vlTOPp->excess3)) 
                       | (8U & (((IData)(vlTOPp->bcd) 
                                 | (((IData)(vlTOPp->bcd) 
                                     << 1U) & ((IData)(vlTOPp->bcd) 
                                               << 3U))) 
                                | (((IData)(vlTOPp->bcd) 
                                    << 1U) & ((IData)(vlTOPp->bcd) 
                                              << 2U)))));
}

void Vbcd_to_excess3_converter::_eval(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_eval\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vbcd_to_excess3_converter::_change_request(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_change_request\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vbcd_to_excess3_converter::_change_request_1(Vbcd_to_excess3_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_change_request_1\n"); );
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbcd_to_excess3_converter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_to_excess3_converter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((bcd & 0xf0U))) {
        Verilated::overWidthError("bcd");}
}
#endif  // VL_DEBUG
