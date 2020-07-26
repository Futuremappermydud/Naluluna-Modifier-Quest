// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFABRIKRoot
  class IKSolverFABRIKRoot;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FABRIKRoot
  class FABRIKRoot : public RootMotion::FinalIK::IK {
    public:
    // public RootMotion.FinalIK.IKSolverFABRIKRoot solver
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverFABRIKRoot* solver;
    // private System.Void SupportGroup()
    // Offset: 0x1396064
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x13960B0
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1395FCC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1396018
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x13960FC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1396104
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FABRIKRoot* New_ctor();
  }; // RootMotion.FinalIK.FABRIKRoot
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIKRoot*, "RootMotion.FinalIK", "FABRIKRoot");
#pragma pack(pop)
