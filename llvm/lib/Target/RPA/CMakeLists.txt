add_llvm_component_group(RPA)
add_llvm_target(RPACodeGen
  RPATargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  RPAInfo

  ADD_TO_COMPONENT
  RPA
  )
add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)