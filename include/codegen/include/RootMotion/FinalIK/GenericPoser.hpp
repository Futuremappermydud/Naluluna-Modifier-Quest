// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.Poser
#include "RootMotion/FinalIK/Poser.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.GenericPoser
  class GenericPoser : public RootMotion::FinalIK::Poser {
    public:
    // Nested type: RootMotion::FinalIK::GenericPoser::Map
    class Map;
    // public RootMotion.FinalIK.GenericPoser/Map[] maps
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::GenericPoser::Map*>* maps;
    // private System.Void StoreDefaultState()
    // Offset: 0x135876C
    void StoreDefaultState();
    // private UnityEngine.Transform GetTargetNamed(System.String tName, UnityEngine.Transform[] array)
    // Offset: 0x1358674
    UnityEngine::Transform* GetTargetNamed(::Il2CppString* tName, ::Array<UnityEngine::Transform*>* array);
    // public override System.Void AutoMapping()
    // Offset: 0x1358420
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::AutoMapping()
    void AutoMapping();
    // protected override System.Void InitiatePoser()
    // Offset: 0x13587D4
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::InitiatePoser()
    void InitiatePoser();
    // protected override System.Void UpdatePoser()
    // Offset: 0x13587D8
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::UpdatePoser()
    void UpdatePoser();
    // protected override System.Void FixPoserTransforms()
    // Offset: 0x1358A80
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::FixPoserTransforms()
    void FixPoserTransforms();
    // public System.Void .ctor()
    // Offset: 0x1358B84
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericPoser* New_ctor();
  }; // RootMotion.FinalIK.GenericPoser
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GenericPoser*, "RootMotion.FinalIK", "GenericPoser");
#pragma pack(pop)
