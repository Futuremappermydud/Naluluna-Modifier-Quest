// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.DelegateSerializationHolder
#include "System/DelegateSerializationHolder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DelegateSerializationHolder/DelegateEntry
  class DelegateSerializationHolder::DelegateEntry : public ::Il2CppObject {
    public:
    // private System.String type
    // Offset: 0x10
    ::Il2CppString* type;
    // private System.String assembly
    // Offset: 0x18
    ::Il2CppString* assembly;
    // private System.Object target
    // Offset: 0x20
    ::Il2CppObject* target;
    // private System.String targetTypeAssembly
    // Offset: 0x28
    ::Il2CppString* targetTypeAssembly;
    // private System.String targetTypeName
    // Offset: 0x30
    ::Il2CppString* targetTypeName;
    // private System.String methodName
    // Offset: 0x38
    ::Il2CppString* methodName;
    // public System.DelegateSerializationHolder/DelegateEntry delegateEntry
    // Offset: 0x40
    System::DelegateSerializationHolder::DelegateEntry* delegateEntry;
    // public System.Void .ctor(System.Delegate del, System.String targetLabel)
    // Offset: 0xC80110
    static DelegateSerializationHolder::DelegateEntry* New_ctor(System::Delegate* del, ::Il2CppString* targetLabel);
    // public System.Delegate DeserializeDelegate(System.Runtime.Serialization.SerializationInfo info, System.Int32 index)
    // Offset: 0xC7FE9C
    System::Delegate* DeserializeDelegate(System::Runtime::Serialization::SerializationInfo* info, int index);
  }; // System.DelegateSerializationHolder/DelegateEntry
}
DEFINE_IL2CPP_ARG_TYPE(System::DelegateSerializationHolder::DelegateEntry*, "System", "DelegateSerializationHolder/DelegateEntry");
#pragma pack(pop)
