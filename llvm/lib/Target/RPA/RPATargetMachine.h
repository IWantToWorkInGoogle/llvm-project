#ifndef LLVM_LIB_TARGET_RPA_RPATARGETMACHINE_H
#define LLVM_LIB_TARGET_RPA_RPATARGETMACHINE_H
#include "llvm/Target/TargetMachine.h"
#include <optional>
namespace llvm {

extern Target TheRPATarget;

class RPATargetMachine : public LLVMTargetMachine {
public:
  RPATargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                   StringRef FS, const TargetOptions &Options,
                   std::optional<Reloc::Model> RM,
                   std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                   bool JIT);
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_RPA_RPATARGETMACHINE_H