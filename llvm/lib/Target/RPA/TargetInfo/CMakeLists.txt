add_llvm_component_library(LLVMRPAInfo
  RPATargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support
  
  ADD_TO_COMPONENT
  RPA
  )