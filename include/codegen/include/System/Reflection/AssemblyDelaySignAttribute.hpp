// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyDelaySignAttribute
  class AssemblyDelaySignAttribute : public System::Attribute {
    public:
    // private System.Boolean m_delaySign
    // Offset: 0x10
    bool m_delaySign;
    // public System.Void .ctor(System.Boolean delaySign)
    // Offset: 0x134CB88
    static AssemblyDelaySignAttribute* New_ctor(bool delaySign);
  }; // System.Reflection.AssemblyDelaySignAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDelaySignAttribute*, "System.Reflection", "AssemblyDelaySignAttribute");
#pragma pack(pop)
