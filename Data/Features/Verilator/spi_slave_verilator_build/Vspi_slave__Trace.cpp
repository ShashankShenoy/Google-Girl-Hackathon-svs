// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_slave__Syms.h"


void Vspi_slave::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vspi_slave::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->spi_slave__DOT__rx_data),8);
            tracep->chgCData(oldp+1,(vlTOPp->spi_slave__DOT__tx_data),8);
            tracep->chgCData(oldp+2,(vlTOPp->spi_slave__DOT__bit_count),3);
            tracep->chgBit(oldp+3,(vlTOPp->spi_slave__DOT__sclk_prev));
            tracep->chgBit(oldp+4,(vlTOPp->spi_slave__DOT__sclk_prev2));
            tracep->chgBit(oldp+5,(((IData)(vlTOPp->spi_slave__DOT__sclk_prev) 
                                    & (~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev2)))));
            tracep->chgBit(oldp+6,(((~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev)) 
                                    & (IData)(vlTOPp->spi_slave__DOT__sclk_prev2))));
        }
        tracep->chgBit(oldp+7,(vlTOPp->clk));
        tracep->chgBit(oldp+8,(vlTOPp->rst_n));
        tracep->chgBit(oldp+9,(vlTOPp->sclk));
        tracep->chgBit(oldp+10,(vlTOPp->cs_n));
        tracep->chgBit(oldp+11,(vlTOPp->mosi));
        tracep->chgCData(oldp+12,(vlTOPp->data_in),8);
        tracep->chgBit(oldp+13,(vlTOPp->miso));
        tracep->chgBit(oldp+14,(vlTOPp->data_valid));
        tracep->chgCData(oldp+15,(vlTOPp->data_out),8);
    }
}

void Vspi_slave::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
