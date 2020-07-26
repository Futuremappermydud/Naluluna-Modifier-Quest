// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.RuntimeTypeHandle
#include "System/RuntimeTypeHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TypedReference
  struct TypedReference : public System::ValueType {
    public:
    // private System.RuntimeTypeHandle type
    // Offset: 0x0
    System::RuntimeTypeHandle type;
    // private System.IntPtr Value
    // Offset: 0x8
    System::IntPtr Value;
    // private System.IntPtr Type
    // Offset: 0x10
    System::IntPtr Type;
    // Creating value type constructor for type: TypedReference
    TypedReference(System::RuntimeTypeHandle type_ = {}, System::IntPtr Value_ = {}, System::IntPtr Type_ = {}) : type{type_}, Value{Value_}, Type{Type_} {}
    // static public System.TypedReference MakeTypedReference(System.Object target, System.Reflection.FieldInfo[] flds)
    // Offset: 0x178282C
    static System::TypedReference MakeTypedReference(::Il2CppObject* target, ::Array<System::Reflection::FieldInfo*>* flds);
    // static private System.TypedReference MakeTypedReferenceInternal(System.Object target, System.Reflection.FieldInfo[] fields)
    // Offset: 0x1782C1C
    static System::TypedReference MakeTypedReferenceInternal(::Il2CppObject* target, ::Array<System::Reflection::FieldInfo*>* fields);
    // System.Boolean get_IsNull()
    // Offset: 0xA5355C
    bool get_IsNull();
    // static public System.Void SetTypedReference(System.TypedReference target, System.Object value)
    // Offset: 0x1782D94
    static void SetTypedReference(System::TypedReference target, ::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA53548
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xA53550
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // System.TypedReference
}
DEFINE_IL2CPP_ARG_TYPE(System::TypedReference, "System", "TypedReference");
#pragma pack(pop)
