// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.ConditionalAttribute
  class ConditionalAttribute : public System::Attribute {
    public:
    // private System.String m_conditionString
    // Offset: 0x10
    ::Il2CppString* m_conditionString;
    // public System.Void .ctor(System.String conditionString)
    // Offset: 0xC802F8
    static ConditionalAttribute* New_ctor(::Il2CppString* conditionString);
  }; // System.Diagnostics.ConditionalAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
#pragma pack(pop)
