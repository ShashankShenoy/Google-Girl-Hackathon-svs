// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VALU_32BIT_H_
#define _VALU_32BIT_H_  // guard

#include "verilated.h"

//==========

class Valu_32bit__Syms;
class Valu_32bit_VerilatedVcd;


//----------

VL_MODULE(Valu_32bit) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(op,3,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(carry_out,0,0);
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(result,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ alu_32bit__DOT__sub_cout;
    CData/*0:0*/ alu_32bit__DOT__add_overflow;
    CData/*0:0*/ alu_32bit__DOT__sub_overflow;
    IData/*31:0*/ alu_32bit__DOT__sub_result;
    IData/*31:0*/ alu_32bit__DOT__adder_b;
    QData/*32:0*/ alu_32bit__DOT__adder_result;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Valu_32bit__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Valu_32bit);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Valu_32bit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Valu_32bit();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Valu_32bit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Valu_32bit__Syms* symsp, bool first);
  private:
    static QData _change_request(Valu_32bit__Syms* __restrict vlSymsp);
    static QData _change_request_1(Valu_32bit__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Valu_32bit__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Valu_32bit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Valu_32bit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Valu_32bit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
