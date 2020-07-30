// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Node
  class IKSolver::Node : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Offset: 0x54
    float length;
    // public System.Single effectorPositionWeight
    // Offset: 0x58
    float effectorPositionWeight;
    // public System.Single effectorRotationWeight
    // Offset: 0x5C
    float effectorRotationWeight;
    // public UnityEngine.Vector3 offset
    // Offset: 0x60
    UnityEngine::Vector3 offset;
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x136EC5C
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform);
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x136EC8C
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform, float weight);
    // public System.Void .ctor()
    // Offset: 0x136EC58
    // Implemented from: RootMotion.FinalIK.IKSolver/Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolver::Node* New_ctor();
  }; // RootMotion.FinalIK.IKSolver/Node
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Node*, "RootMotion.FinalIK", "IKSolver/Node");
#pragma pack(pop)
