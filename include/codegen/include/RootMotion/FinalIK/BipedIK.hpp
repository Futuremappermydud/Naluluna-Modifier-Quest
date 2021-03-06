// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIKSolvers
  class BipedIKSolvers;
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarIKGoal
  struct AvatarIKGoal;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.BipedIK
  class BipedIK : public RootMotion::SolverManager {
    public:
    // public RootMotion.BipedReferences references
    // Offset: 0x38
    RootMotion::BipedReferences* references;
    // public RootMotion.FinalIK.BipedIKSolvers solvers
    // Offset: 0x40
    RootMotion::FinalIK::BipedIKSolvers* solvers;
    // private System.Void OpenUserManual()
    // Offset: 0x13934E0
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x139352C
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1393578
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x13935C4
    void ASThread();
    // public System.Single GetIKPositionWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1393610
    float GetIKPositionWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Single GetIKRotationWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x13936AC
    float GetIKRotationWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetIKPositionWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x13936CC
    void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKRotationWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x13936FC
    void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKPosition(UnityEngine.AvatarIKGoal goal, UnityEngine.Vector3 IKPosition)
    // Offset: 0x139372C
    void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 IKPosition);
    // public System.Void SetIKRotation(UnityEngine.AvatarIKGoal goal, UnityEngine.Quaternion IKRotation)
    // Offset: 0x139376C
    void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion IKRotation);
    // public UnityEngine.Vector3 GetIKPosition(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x13937B0
    UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal);
    // public UnityEngine.Quaternion GetIKRotation(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x13937D4
    UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x13937F8
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Void SetLookAtPosition(UnityEngine.Vector3 lookAtPosition)
    // Offset: 0x1393820
    void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition);
    // public System.Void SetSpinePosition(UnityEngine.Vector3 spinePosition)
    // Offset: 0x139384C
    void SetSpinePosition(UnityEngine::Vector3 spinePosition);
    // public System.Void SetSpineWeight(System.Single weight)
    // Offset: 0x1393878
    void SetSpineWeight(float weight);
    // public RootMotion.FinalIK.IKSolverLimb GetGoalIK(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1393630
    RootMotion::FinalIK::IKSolverLimb* GetGoalIK(UnityEngine::AvatarIKGoal goal);
    // public System.Void InitiateBipedIK()
    // Offset: 0x13938A0
    void InitiateBipedIK();
    // public System.Void UpdateBipedIK()
    // Offset: 0x13938AC
    void UpdateBipedIK();
    // public System.Void SetToDefaults()
    // Offset: 0x13938B8
    void SetToDefaults();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x13944B8
    void LogWarning(::Il2CppString* message);
    // protected override System.Void FixTransforms()
    // Offset: 0x1393BE0
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1393C88
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1393FD0
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // public System.Void .ctor()
    // Offset: 0x13944EC
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BipedIK* New_ctor();
  }; // RootMotion.FinalIK.BipedIK
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BipedIK*, "RootMotion.FinalIK", "BipedIK");
#pragma pack(pop)
