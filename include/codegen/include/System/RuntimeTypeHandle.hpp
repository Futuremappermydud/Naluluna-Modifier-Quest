// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.RuntimeTypeHandle
  struct RuntimeTypeHandle : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.IntPtr value
    // Offset: 0x0
    System::IntPtr value;
    // Creating value type constructor for type: RuntimeTypeHandle
    RuntimeTypeHandle(System::IntPtr value_ = {}) : value{value_} {}
    // System.Void .ctor(System.IntPtr val)
    // Offset: 0xA32710
    static RuntimeTypeHandle* New_ctor(System::IntPtr val);
    // System.Void .ctor(System.RuntimeType type)
    // Offset: 0xA32718
    static RuntimeTypeHandle* New_ctor(System::RuntimeType* type);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA32734
    static RuntimeTypeHandle* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.IntPtr get_Value()
    // Offset: 0xA3273C
    System::IntPtr get_Value();
    // static System.Reflection.TypeAttributes GetAttributes(System.RuntimeType type)
    // Offset: 0xDE0050
    static System::Reflection::TypeAttributes GetAttributes(System::RuntimeType* type);
    // static private System.Int32 GetMetadataToken(System.RuntimeType type)
    // Offset: 0xDE604C
    static int GetMetadataToken(System::RuntimeType* type);
    // static System.Int32 GetToken(System.RuntimeType type)
    // Offset: 0xDE2E74
    static int GetToken(System::RuntimeType* type);
    // static private System.Type GetGenericTypeDefinition_impl(System.RuntimeType type)
    // Offset: 0xDE6050
    static System::Type* GetGenericTypeDefinition_impl(System::RuntimeType* type);
    // static System.Type GetGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0xDE16CC
    static System::Type* GetGenericTypeDefinition(System::RuntimeType* type);
    // static System.Boolean HasElementType(System.RuntimeType type)
    // Offset: 0xDE02C4
    static bool HasElementType(System::RuntimeType* type);
    // static System.Boolean HasInstantiation(System.RuntimeType type)
    // Offset: 0xDE16D4
    static bool HasInstantiation(System::RuntimeType* type);
    // static System.Boolean IsArray(System.RuntimeType type)
    // Offset: 0xDE0450
    static bool IsArray(System::RuntimeType* type);
    // static System.Boolean IsByRef(System.RuntimeType type)
    // Offset: 0xDE00EC
    static bool IsByRef(System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type)
    // Offset: 0xDE6054
    static bool IsComObject(System::RuntimeType* type);
    // static System.Boolean IsInstanceOfType(System.RuntimeType type, System.Object o)
    // Offset: 0xDDFCF8
    static bool IsInstanceOfType(System::RuntimeType* type, ::Il2CppObject* o);
    // static System.Boolean IsPointer(System.RuntimeType type)
    // Offset: 0xDE00FC
    static bool IsPointer(System::RuntimeType* type);
    // static System.Boolean IsPrimitive(System.RuntimeType type)
    // Offset: 0xDE00F4
    static bool IsPrimitive(System::RuntimeType* type);
    // static System.Boolean HasReferences(System.RuntimeType type)
    // Offset: 0xDE6058
    static bool HasReferences(System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type, System.Boolean isGenericCOM)
    // Offset: 0xDE0104
    static bool IsComObject(System::RuntimeType* type, bool isGenericCOM);
    // static System.Boolean IsContextful(System.RuntimeType type)
    // Offset: 0xDE0058
    static bool IsContextful(System::RuntimeType* type);
    // static System.Boolean IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
    // Offset: 0xDE0034
    static bool IsEquivalentTo(System::RuntimeType* rtType1, System::RuntimeType* rtType2);
    // static System.Boolean IsSzArray(System.RuntimeType type)
    // Offset: 0xDE03FC
    static bool IsSzArray(System::RuntimeType* type);
    // static System.Boolean IsInterface(System.RuntimeType type)
    // Offset: 0xDE605C
    static bool IsInterface(System::RuntimeType* type);
    // static System.Int32 GetArrayRank(System.RuntimeType type)
    // Offset: 0xDE0500
    static int GetArrayRank(System::RuntimeType* type);
    // static System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type)
    // Offset: 0xDDFCBC
    static System::Reflection::RuntimeAssembly* GetAssembly(System::RuntimeType* type);
    // static System.RuntimeType GetElementType(System.RuntimeType type)
    // Offset: 0xDE0508
    static System::RuntimeType* GetElementType(System::RuntimeType* type);
    // static System.Reflection.RuntimeModule GetModule(System.RuntimeType type)
    // Offset: 0xDDFCB0
    static System::Reflection::RuntimeModule* GetModule(System::RuntimeType* type);
    // static System.Boolean IsGenericVariable(System.RuntimeType type)
    // Offset: 0xDE0040
    static bool IsGenericVariable(System::RuntimeType* type);
    // static System.RuntimeType GetBaseType(System.RuntimeType type)
    // Offset: 0xDE0044
    static System::RuntimeType* GetBaseType(System::RuntimeType* type);
    // static System.Boolean CanCastTo(System.RuntimeType type, System.RuntimeType target)
    // Offset: 0xDDFF78
    static bool CanCastTo(System::RuntimeType* type, System::RuntimeType* target);
    // static private System.Boolean type_is_assignable_from(System.Type a, System.Type b)
    // Offset: 0xDE6080
    static bool type_is_assignable_from(System::Type* a, System::Type* b);
    // static System.Boolean IsGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0xDE1568
    static bool IsGenericTypeDefinition(System::RuntimeType* type);
    // static System.IntPtr GetGenericParameterInfo(System.RuntimeType type)
    // Offset: 0xDE5594
    static System::IntPtr GetGenericParameterInfo(System::RuntimeType* type);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA32744
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA3274C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA32754
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeTypeHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
#pragma pack(pop)
