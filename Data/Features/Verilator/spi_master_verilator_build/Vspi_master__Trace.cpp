// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_master__Syms.h"


void Vspi_master::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vspi_master::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->spi_master__DOT__tx_data),8);
            tracep->chgCData(oldp+1,(vlTOPp->spi_master__DOT__rx_data),8);
            tracep->chgCData(oldp+2,(vlTOPp->spi_master__DOT__bit_count),4);
            tracep->chgCData(oldp+3,(vlTOPp->spi_master__DOT__clk_count),8);
            tracep->chgBit(oldp+4,(vlTOPp->spi_master__DOT__spi_clk_en));
            tracep->chgCData(oldp+5,(vlTOPp->spi_master__DOT__state),2);
        }
        tracep->chgBit(oldp+6,(vlTOPp->clk));
        tracep->chgBit(oldp+7,(vlTOPp->rst_n));
        tracep->chgBit(oldp+8,(vlTOPp->start));
        tracep->chgCData(oldp+9,(vlTOPp->data_in),8);
        tracep->chgBit(oldp+10,(vlTOPp->miso));
        tracep->chgBit(oldp+11,(vlTOPp->sclk));
        tracep->chgBit(oldp+12,(vlTOPp->mosi));
        tracep->chgBit(oldp+13,(vlTOPp->cs_n));
        tracep->chgBit(oldp+14,(vlTOPp->busy));
        tracep->chgCData(oldp+15,(vlTOPp->data_out),8);
        tracep->chgCData(oldp+16,(((2U & (IData)(vlTOPp->spi_master__DOT__state))
                                    ? ((1U & (IData)(vlTOPp->spi_master__DOT__state))
                                        ? 0U : ((((7U 
                                                   == (IData)(vlTOPp->spi_master__DOT__bit_count)) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->spi_master__DOT__clk_count))) 
                                                 & (IData)(vlTOPp->sclk))
                                                 ? 3U
                                                 : 2U))
                                    : ((1U & (IData)(vlTOPp->spi_master__DOT__state))
                                        ? 2U : ((IData)(vlTOPp->start)
                                                 ? 1U
                                                 : 0U)))),2);
    }
}

void Vspi_master::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
