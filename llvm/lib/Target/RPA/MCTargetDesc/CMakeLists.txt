add_llvm_component_library(LLVMRPADesc
  RPAMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  RPAInfo

  ADD_TO_COMPONENT
  RPA
 )