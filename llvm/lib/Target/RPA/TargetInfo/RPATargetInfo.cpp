#include "TargetInfo/RPATargetInfo.h"
#include "RPA.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;
Target &llvm::getTheRPATarget() {
  static Target TheRPATarget;
  return TheRPATarget;
}
extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeRPATargetInfo() {
  RegisterTarget<Triple::rpa> X(getTheRPATarget(), "RPA",
                                "Really primitive architecture", "RPA");
}