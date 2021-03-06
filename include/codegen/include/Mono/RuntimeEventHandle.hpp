// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeEventHandle
  struct RuntimeEventHandle : public System::ValueType {
    public:
    // private System.IntPtr value
    // Offset: 0x0
    System::IntPtr value;
    // Creating value type constructor for type: RuntimeEventHandle
    RuntimeEventHandle(System::IntPtr value_ = {}) : value{value_} {}
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xA3CC6C
    static RuntimeEventHandle* New_ctor(System::IntPtr v);
    // public System.IntPtr get_Value()
    // Offset: 0xA3CC74
    System::IntPtr get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA3CC7C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3CC84
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimeEventHandle
}
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeEventHandle, "Mono", "RuntimeEventHandle");
#pragma pack(pop)
