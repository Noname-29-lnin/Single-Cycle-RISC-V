// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vimmgen__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vimmgen::Vimmgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vimmgen__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vimmgen::Vimmgen(const char* _vcname__)
    : Vimmgen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vimmgen::~Vimmgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vimmgen___024root___eval_debug_assertions(Vimmgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vimmgen___024root___eval_static(Vimmgen___024root* vlSelf);
void Vimmgen___024root___eval_initial(Vimmgen___024root* vlSelf);
void Vimmgen___024root___eval_settle(Vimmgen___024root* vlSelf);
void Vimmgen___024root___eval(Vimmgen___024root* vlSelf);

void Vimmgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vimmgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vimmgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vimmgen___024root___eval_static(&(vlSymsp->TOP));
        Vimmgen___024root___eval_initial(&(vlSymsp->TOP));
        Vimmgen___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vimmgen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vimmgen::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vimmgen::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vimmgen::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vimmgen::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vimmgen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vimmgen___024root___eval_final(Vimmgen___024root* vlSelf);

VL_ATTR_COLD void Vimmgen::final() {
    Vimmgen___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vimmgen::hierName() const { return vlSymsp->name(); }
const char* Vimmgen::modelName() const { return "Vimmgen"; }
unsigned Vimmgen::threads() const { return 1; }
void Vimmgen::prepareClone() const { contextp()->prepareClone(); }
void Vimmgen::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vimmgen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vimmgen___024root__trace_decl_types(VerilatedVcd* tracep);

void Vimmgen___024root__trace_init_top(Vimmgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vimmgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen___024root*>(voidSelf);
    Vimmgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vimmgen___024root__trace_decl_types(tracep);
    Vimmgen___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimmgen___024root__trace_register(Vimmgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vimmgen::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vimmgen::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vimmgen___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
