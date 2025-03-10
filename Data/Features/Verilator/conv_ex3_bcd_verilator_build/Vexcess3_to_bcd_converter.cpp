// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexcess3_to_bcd_converter.h for the primary calling header

#include "Vexcess3_to_bcd_converter.h"
#include "Vexcess3_to_bcd_converter__Syms.h"

//==========

void Vexcess3_to_bcd_converter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexcess3_to_bcd_converter::eval\n"); );
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/conv_ex3_bcd.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vexcess3_to_bcd_converter::_eval_initial_loop(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/conv_ex3_bcd.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vexcess3_to_bcd_converter::_combo__TOP__1(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_combo__TOP__1\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->bcd = ((0xeU & (IData)(vlTOPp->bcd)) | 
                   (1U & (~ (IData)(vlTOPp->excess3))));
    vlTOPp->bcd = ((0xdU & (IData)(vlTOPp->bcd)) | 
                   (2U & ((0xfffffffeU & ((IData)(vlTOPp->excess3) 
                                          & ((IData)(vlTOPp->excess3) 
                                             << 1U))) 
                          | (((~ ((IData)(vlTOPp->excess3) 
                                  >> 1U)) & (~ (IData)(vlTOPp->excess3))) 
                             << 1U))));
    vlTOPp->bcd = ((0xbU & (IData)(vlTOPp->bcd)) | 
                   (4U & ((((0xfffffffcU & (((IData)(vlTOPp->excess3) 
                                             & ((IData)(vlTOPp->excess3) 
                                                << 2U)) 
                                            & ((IData)(vlTOPp->excess3) 
                                               << 1U))) 
                            | (0xfffffffcU & (((IData)(vlTOPp->excess3) 
                                               & ((~ (IData)(vlTOPp->excess3)) 
                                                  << 2U)) 
                                              & ((~ 
                                                  ((IData)(vlTOPp->excess3) 
                                                   >> 1U)) 
                                                 << 2U)))) 
                           | (0xfffffffcU & ((((~ ((IData)(vlTOPp->excess3) 
                                                   >> 2U)) 
                                               & (~ (IData)(vlTOPp->excess3))) 
                                              << 2U) 
                                             & ((IData)(vlTOPp->excess3) 
                                                << 1U)))) 
                          | ((((~ ((IData)(vlTOPp->excess3) 
                                   >> 2U)) & (IData)(vlTOPp->excess3)) 
                              & (~ ((IData)(vlTOPp->excess3) 
                                    >> 1U))) << 2U))));
    vlTOPp->bcd = ((7U & (IData)(vlTOPp->bcd)) | (8U 
                                                  & ((IData)(vlTOPp->excess3) 
                                                     & ((~ 
                                                         (((~ 
                                                            ((IData)(vlTOPp->excess3) 
                                                             >> 2U)) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->excess3) 
                                                               >> 1U))) 
                                                          & (~ (IData)(vlTOPp->excess3)))) 
                                                        << 3U))));
}

void Vexcess3_to_bcd_converter::_eval(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_eval\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vexcess3_to_bcd_converter::_change_request(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_change_request\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vexcess3_to_bcd_converter::_change_request_1(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_change_request_1\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexcess3_to_bcd_converter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((excess3 & 0xf0U))) {
        Verilated::overWidthError("excess3");}
}
#endif  // VL_DEBUG
