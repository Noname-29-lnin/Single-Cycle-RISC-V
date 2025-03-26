// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbrc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbrc::Vbrc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbrc__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbrc::Vbrc(const char* _vcname__)
    : Vbrc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbrc::~Vbrc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbrc___024root___eval_debug_assertions(Vbrc___024root* vlSelf);
#endif  // VL_DEBUG
void Vbrc___024root___eval_static(Vbrc___024root* vlSelf);
void Vbrc___024root___eval_initial(Vbrc___024root* vlSelf);
void Vbrc___024root___eval_settle(Vbrc___024root* vlSelf);
void Vbrc___024root___eval(Vbrc___024root* vlSelf);

void Vbrc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbrc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbrc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbrc___024root___eval_static(&(vlSymsp->TOP));
        Vbrc___024root___eval_initial(&(vlSymsp->TOP));
        Vbrc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbrc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vbrc::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vbrc::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vbrc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbrc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbrc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbrc___024root___eval_final(Vbrc___024root* vlSelf);

VL_ATTR_COLD void Vbrc::final() {
    Vbrc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbrc::hierName() const { return vlSymsp->name(); }
const char* Vbrc::modelName() const { return "Vbrc"; }
unsigned Vbrc::threads() const { return 1; }
void Vbrc::prepareClone() const { contextp()->prepareClone(); }
void Vbrc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbrc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbrc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbrc___024root__trace_init_top(Vbrc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc___024root*>(voidSelf);
    Vbrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbrc___024root__trace_decl_types(tracep);
    Vbrc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbrc___024root__trace_register(Vbrc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbrc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbrc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbrc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
