// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IEquatable`1
  template<typename T>
  class IEquatable_1 {
    public:
    // public System.Boolean Equals(T other)
    // Offset: 0xFFFFFFFF
    bool Equals(T other) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
    }
  }; // System.IEquatable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IEquatable_1, "System", "IEquatable`1");
#pragma pack(pop)
