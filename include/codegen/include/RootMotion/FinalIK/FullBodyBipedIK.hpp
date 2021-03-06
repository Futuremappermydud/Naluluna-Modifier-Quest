// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
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
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FullBodyBipedIK
  class FullBodyBipedIK : public RootMotion::FinalIK::IK {
    public:
    // public RootMotion.BipedReferences references
    // Offset: 0x38
    RootMotion::BipedReferences* references;
    // public RootMotion.FinalIK.IKSolverFullBodyBiped solver
    // Offset: 0x40
    RootMotion::FinalIK::IKSolverFullBodyBiped* solver;
    // private System.Void OpenSetupTutorial()
    // Offset: 0x1357BC0
    void OpenSetupTutorial();
    // private System.Void OpenInspectorTutorial()
    // Offset: 0x1357C0C
    void OpenInspectorTutorial();
    // private System.Void SupportGroup()
    // Offset: 0x1357C58
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1357CA4
    void ASThread();
    // public System.Void SetReferences(RootMotion.BipedReferences references, UnityEngine.Transform rootNode)
    // Offset: 0x1357CF0
    void SetReferences(RootMotion::BipedReferences* references, UnityEngine::Transform* rootNode);
    // public System.Boolean ReferencesError(System.String errorMessage)
    // Offset: 0x1357D3C
    bool ReferencesError(::Il2CppString*& errorMessage);
    // public System.Boolean ReferencesWarning(System.String warningMessage)
    // Offset: 0x1357F04
    bool ReferencesWarning(::Il2CppString*& warningMessage);
    // private System.Void Reinitiate()
    // Offset: 0x1358264
    void Reinitiate();
    // private System.Void AutoDetectReferences()
    // Offset: 0x1358284
    void AutoDetectReferences();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1357B28
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1357B74
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1357D34
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1358378
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FullBodyBipedIK* New_ctor();
  }; // RootMotion.FinalIK.FullBodyBipedIK
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FullBodyBipedIK*, "RootMotion.FinalIK", "FullBodyBipedIK");
#pragma pack(pop)
