// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.DebuggerBrowsableState
#include "System/Diagnostics/DebuggerBrowsableState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DebuggerBrowsableAttribute
  class DebuggerBrowsableAttribute : public System::Attribute {
    public:
    // private System.Diagnostics.DebuggerBrowsableState state
    // Offset: 0x10
    System::Diagnostics::DebuggerBrowsableState state;
    // public System.Void .ctor(System.Diagnostics.DebuggerBrowsableState state)
    // Offset: 0xC80420
    static DebuggerBrowsableAttribute* New_ctor(System::Diagnostics::DebuggerBrowsableState state);
  }; // System.Diagnostics.DebuggerBrowsableAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerBrowsableAttribute*, "System.Diagnostics", "DebuggerBrowsableAttribute");
#pragma pack(pop)
