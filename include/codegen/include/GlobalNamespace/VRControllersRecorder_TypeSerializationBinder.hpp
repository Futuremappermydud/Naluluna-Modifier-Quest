// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
// Including type: VRControllersRecorder
#include "GlobalNamespace/VRControllersRecorder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorder/TypeSerializationBinder
  class VRControllersRecorder::TypeSerializationBinder : public System::Runtime::Serialization::SerializationBinder {
    public:
    // public override System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0xC3D208
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Type SerializationBinder::BindToType(System.String assemblyName, System.String typeName)
    System::Type* BindToType(::Il2CppString* assemblyName, ::Il2CppString* typeName);
    // public System.Void .ctor()
    // Offset: 0xC3C5D8
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Void SerializationBinder::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorder::TypeSerializationBinder* New_ctor();
  }; // VRControllersRecorder/TypeSerializationBinder
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::TypeSerializationBinder*, "", "VRControllersRecorder/TypeSerializationBinder");
#pragma pack(pop)
