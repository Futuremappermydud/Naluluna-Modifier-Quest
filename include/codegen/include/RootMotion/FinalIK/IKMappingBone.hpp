// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKMappingBone
  class IKMappingBone : public RootMotion::FinalIK::IKMapping {
    public:
    // public UnityEngine.Transform bone
    // Offset: 0x10
    UnityEngine::Transform* bone;
    // public System.Single maintainRotationWeight
    // Offset: 0x18
    float maintainRotationWeight;
    // private RootMotion.FinalIK.IKMapping/BoneMap boneMap
    // Offset: 0x20
    RootMotion::FinalIK::IKMapping::BoneMap* boneMap;
    // public System.Void .ctor(UnityEngine.Transform bone)
    // Offset: 0x136ACEC
    static IKMappingBone* New_ctor(UnityEngine::Transform* bone);
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x136AD98
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x136ADB0
    void FixTransforms();
    // public System.Void ReadPose()
    // Offset: 0x136AE78
    void ReadPose();
    // public System.Void WritePose(System.Single solverWeight)
    // Offset: 0x136AE90
    void WritePose(float solverWeight);
    // public override System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, System.String message)
    // Offset: 0x136ABB0
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Boolean IKMapping::IsValid(RootMotion.FinalIK.IKSolver solver, System.String message)
    bool IsValid(RootMotion::FinalIK::IKSolver* solver, ::Il2CppString*& message);
    // public System.Void .ctor()
    // Offset: 0x136AC5C
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKMappingBone* New_ctor();
    // public override System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x136ADCC
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.IKMappingBone
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMappingBone*, "RootMotion.FinalIK", "IKMappingBone");
#pragma pack(pop)
