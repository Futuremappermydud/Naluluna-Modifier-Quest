// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.RuntimeModule
#include "System/Reflection/RuntimeModule.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
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
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoModule
  class MonoModule : public System::Reflection::RuntimeModule {
    public:
    // System.Reflection.RuntimeAssembly GetRuntimeAssembly()
    // Offset: 0x113D87C
    System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x113D69C
    // Implemented from: System.Reflection.Module
    // Base method: System.Reflection.Assembly Module::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_ScopeName()
    // Offset: 0x113D6A4
    // Implemented from: System.Reflection.Module
    // Base method: System.String Module::get_ScopeName()
    ::Il2CppString* get_ScopeName();
    // public override System.Guid get_ModuleVersionId()
    // Offset: 0x113D6AC
    // Implemented from: System.Reflection.Module
    // Base method: System.Guid Module::get_ModuleVersionId()
    System::Guid get_ModuleVersionId();
    // public override System.Boolean IsResource()
    // Offset: 0x113D6B8
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsResource()
    bool IsResource();
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113D6C0
    // Implemented from: System.Reflection.Module
    // Base method: System.Object[] Module::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113D740
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x113D7C0
    // Implemented from: System.Reflection.Module
    // Base method: System.Void Module::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x113D8FC
    // Implemented from: System.Reflection.RuntimeModule
    // Base method: System.Void RuntimeModule::.ctor()
    // Base method: System.Void Module::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoModule* New_ctor();
  }; // System.Reflection.MonoModule
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoModule*, "System.Reflection", "MonoModule");
#pragma pack(pop)
