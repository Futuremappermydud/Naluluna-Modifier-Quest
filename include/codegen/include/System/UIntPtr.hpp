// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.UIntPtr
  struct UIntPtr : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // Get static field: static public readonly System.UIntPtr Zero
    static System::UIntPtr _get_Zero();
    // Set static field: static public readonly System.UIntPtr Zero
    static void _set_Zero(System::UIntPtr value);
    // private System.Void* _pointer
    // Offset: 0x0
    void* pointer;
    // Creating value type constructor for type: UIntPtr
    UIntPtr(void* pointer_ = {}) : pointer{pointer_} {}
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0xA53A44
    static UIntPtr* New_ctor(uint64_t value);
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0xA53A4C
    static UIntPtr* New_ctor(uint value);
    // public System.Void .ctor(System.Void* value)
    // Offset: 0xA53A58
    static UIntPtr* New_ctor(void* value);
    // static public System.Int32 get_Size()
    // Offset: 0x1784D84
    static int get_Size();
    // static private System.Void .cctor()
    // Offset: 0x1784F94
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA53A60
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA53A68
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA53A70
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA53A78
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.UIntPtr
  // static public System.Boolean op_Equality(System.UIntPtr value1, System.UIntPtr value2)
  // Offset: 0x1784F50
  bool operator ==(const System::UIntPtr& value1, const System::UIntPtr& value2);
}
DEFINE_IL2CPP_ARG_TYPE(System::UIntPtr, "System", "UIntPtr");
#pragma pack(pop)
