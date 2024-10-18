#ifndef LLVM_LIB_TARGET_RPA_RPA_H
#define LLVM_LIB_TARGET_RPA_RPA_H
#include "llvm/Support/raw_ostream.h"
#define RPA_DUMP(Color)                                                        \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define RPA_DUMP(Color) {}
#define RPA_DUMP_RED RPA_DUMP(llvm::raw_ostream::RED)
#define RPA_DUMP_GREEN RPA_DUMP(llvm::raw_ostream::GREEN)
#define RPA_DUMP_YELLOW RPA_DUMP(llvm::raw_ostream::YELLOW)
#define RPA_DUMP_CYAN RPA_DUMP(llvm::raw_ostream::CYAN)
#define RPA_DUMP_MAGENTA RPA_DUMP(llvm::raw_ostream::MAGENTA)
#endif // LLVM_LIB_TARGET_RPA_RPA_H