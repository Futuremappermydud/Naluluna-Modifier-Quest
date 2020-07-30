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
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: RtFieldInfo
  class RtFieldInfo;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.RuntimeFieldHandle
  struct RuntimeFieldHandle : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.IntPtr value
    // Offset: 0x0
    System::IntPtr value;
    // Creating value type constructor for type: RuntimeFieldHandle
    RuntimeFieldHandle(System::IntPtr value_ = {}) : value{value_} {}
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xA3B728
    static RuntimeFieldHandle* New_ctor(System::IntPtr v);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA3B730
    static RuntimeFieldHandle* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.IntPtr get_Value()
    // Offset: 0xA3B738
    System::IntPtr get_Value();
    // static private System.Void SetValueInternal(System.Reflection.FieldInfo fi, System.Object obj, System.Object value)
    // Offset: 0xFEBD08
    static void SetValueInternal(System::Reflection::FieldInfo* fi, ::Il2CppObject* obj, ::Il2CppObject* value);
    // static System.Void SetValue(System.Reflection.RtFieldInfo field, System.Object obj, System.Object value, System.RuntimeType fieldType, System.Reflection.FieldAttributes fieldAttr, System.RuntimeType declaringType, System.Boolean domainInitialized)
    // Offset: 0xFEBD0C
    static void SetValue(System::Reflection::RtFieldInfo* field, ::Il2CppObject* obj, ::Il2CppObject* value, System::RuntimeType* fieldType, System::Reflection::FieldAttributes fieldAttr, System::RuntimeType* declaringType, bool& domainInitialized);
    // static System.Void SetValueDirect(System.Reflection.RtFieldInfo field, System.RuntimeType fieldType, System.Void* pTypedRef, System.Object value, System.RuntimeType contextType)
    // Offset: 0xFEBD10
    static void SetValueDirect(System::Reflection::RtFieldInfo* field, System::RuntimeType* fieldType, void* pTypedRef, ::Il2CppObject* value, System::RuntimeType* contextType);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA3B740
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA3B748
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3B750
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeFieldHandle
}
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
#pragma pack(pop)
