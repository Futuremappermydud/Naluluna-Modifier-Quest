// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.RuntimePropertyInfo
  class RuntimePropertyInfo : public System::Reflection::PropertyInfo, public System::Runtime::Serialization::ISerializable {
    public:
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x11417EC
    System::Reflection::BindingFlags get_BindingFlags();
    // System.RuntimeType GetDeclaringTypeInternal()
    // Offset: 0x1141818
    System::RuntimeType* GetDeclaringTypeInternal();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x11418A4
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x11417F8
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // private System.String FormatNameAndSig(System.Boolean serialization)
    // Offset: 0x1141938
    ::Il2CppString* FormatNameAndSig(bool serialization);
    // System.String SerializationToString()
    // Offset: 0x1141B80
    ::Il2CppString* SerializationToString();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x11417F4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String ToString()
    // Offset: 0x1141930
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1141A8C
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor()
    // Offset: 0x113EF10
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static RuntimePropertyInfo* New_ctor();
  }; // System.Reflection.RuntimePropertyInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
#pragma pack(pop)
