// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.IntegratedSubsystemDescriptor
#include "UnityEngine/IntegratedSubsystemDescriptor.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IntegratedSubsystemDescriptor`1
  template<typename TSubsystem>
  class IntegratedSubsystemDescriptor_1 : public UnityEngine::IntegratedSubsystemDescriptor {
    public:
    // public System.Void .ctor()
    // Offset: 0x116CE3C
    // Implemented from: UnityEngine.IntegratedSubsystemDescriptor
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    // Base method: System.Void Object::.ctor()
    static IntegratedSubsystemDescriptor_1<TSubsystem>* New_ctor() {
      return (IntegratedSubsystemDescriptor_1<TSubsystem>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntegratedSubsystemDescriptor_1<TSubsystem>*>::get()));
    }
  }; // UnityEngine.IntegratedSubsystemDescriptor`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::IntegratedSubsystemDescriptor_1, "UnityEngine", "IntegratedSubsystemDescriptor`1");
#pragma pack(pop)
