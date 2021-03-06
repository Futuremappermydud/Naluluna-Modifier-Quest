// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
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
  // Forward declaring type: Keyframe
  struct Keyframe;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR
  class IKSolverVR : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverVR::Arm
    class Arm;
    // Nested type: RootMotion::FinalIK::IKSolverVR::BodyPart
    class BodyPart;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Footstep
    class Footstep;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Leg
    class Leg;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Locomotion
    class Locomotion;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Spine
    class Spine;
    // Nested type: RootMotion::FinalIK::IKSolverVR::PositionOffset
    struct PositionOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::RotationOffset
    struct RotationOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::VirtualBone
    class VirtualBone;
    // private UnityEngine.Transform[] solverTransforms
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* solverTransforms;
    // private System.Boolean hasChest
    // Offset: 0x60
    bool hasChest;
    // private System.Boolean hasNeck
    // Offset: 0x61
    bool hasNeck;
    // private System.Boolean hasShoulders
    // Offset: 0x62
    bool hasShoulders;
    // private System.Boolean hasToes
    // Offset: 0x63
    bool hasToes;
    // private System.Boolean hasLegs
    // Offset: 0x64
    bool hasLegs;
    // private UnityEngine.Vector3[] readPositions
    // Offset: 0x68
    ::Array<UnityEngine::Vector3>* readPositions;
    // private UnityEngine.Quaternion[] readRotations
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* readRotations;
    // private UnityEngine.Vector3[] solvedPositions
    // Offset: 0x78
    ::Array<UnityEngine::Vector3>* solvedPositions;
    // private UnityEngine.Quaternion[] solvedRotations
    // Offset: 0x80
    ::Array<UnityEngine::Quaternion>* solvedRotations;
    // private UnityEngine.Quaternion[] defaultLocalRotations
    // Offset: 0x88
    ::Array<UnityEngine::Quaternion>* defaultLocalRotations;
    // private UnityEngine.Vector3[] defaultLocalPositions
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* defaultLocalPositions;
    // private UnityEngine.Vector3 rootV
    // Offset: 0x98
    UnityEngine::Vector3 rootV;
    // private UnityEngine.Vector3 rootVelocity
    // Offset: 0xA4
    UnityEngine::Vector3 rootVelocity;
    // private UnityEngine.Vector3 bodyOffset
    // Offset: 0xB0
    UnityEngine::Vector3 bodyOffset;
    // private System.Int32 supportLegIndex
    // Offset: 0xBC
    int supportLegIndex;
    // private System.Int32 lastLOD
    // Offset: 0xC0
    int lastLOD;
    // public System.Int32 LOD
    // Offset: 0xC4
    int LOD;
    // public System.Boolean plantFeet
    // Offset: 0xC8
    bool plantFeet;
    // private RootMotion.FinalIK.IKSolverVR/VirtualBone <rootBone>k__BackingField
    // Offset: 0xD0
    RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone;
    // public RootMotion.FinalIK.IKSolverVR/Spine spine
    // Offset: 0xD8
    RootMotion::FinalIK::IKSolverVR::Spine* spine;
    // public RootMotion.FinalIK.IKSolverVR/Arm leftArm
    // Offset: 0xE0
    RootMotion::FinalIK::IKSolverVR::Arm* leftArm;
    // public RootMotion.FinalIK.IKSolverVR/Arm rightArm
    // Offset: 0xE8
    RootMotion::FinalIK::IKSolverVR::Arm* rightArm;
    // public RootMotion.FinalIK.IKSolverVR/Leg leftLeg
    // Offset: 0xF0
    RootMotion::FinalIK::IKSolverVR::Leg* leftLeg;
    // public RootMotion.FinalIK.IKSolverVR/Leg rightLeg
    // Offset: 0xF8
    RootMotion::FinalIK::IKSolverVR::Leg* rightLeg;
    // public RootMotion.FinalIK.IKSolverVR/Locomotion locomotion
    // Offset: 0x100
    RootMotion::FinalIK::IKSolverVR::Locomotion* locomotion;
    // private RootMotion.FinalIK.IKSolverVR/Leg[] legs
    // Offset: 0x108
    ::Array<RootMotion::FinalIK::IKSolverVR::Leg*>* legs;
    // private RootMotion.FinalIK.IKSolverVR/Arm[] arms
    // Offset: 0x110
    ::Array<RootMotion::FinalIK::IKSolverVR::Arm*>* arms;
    // private UnityEngine.Vector3 headPosition
    // Offset: 0x118
    UnityEngine::Vector3 headPosition;
    // private UnityEngine.Vector3 headDeltaPosition
    // Offset: 0x124
    UnityEngine::Vector3 headDeltaPosition;
    // private UnityEngine.Vector3 raycastOriginPelvis
    // Offset: 0x130
    UnityEngine::Vector3 raycastOriginPelvis;
    // private UnityEngine.Vector3 lastOffset
    // Offset: 0x13C
    UnityEngine::Vector3 lastOffset;
    // private UnityEngine.Vector3 debugPos1
    // Offset: 0x148
    UnityEngine::Vector3 debugPos1;
    // private UnityEngine.Vector3 debugPos2
    // Offset: 0x154
    UnityEngine::Vector3 debugPos2;
    // private UnityEngine.Vector3 debugPos3
    // Offset: 0x160
    UnityEngine::Vector3 debugPos3;
    // private UnityEngine.Vector3 debugPos4
    // Offset: 0x16C
    UnityEngine::Vector3 debugPos4;
    // public System.Void SetToReferences(RootMotion.FinalIK.VRIK/References references)
    // Offset: 0x133BDB4
    void SetToReferences(RootMotion::FinalIK::VRIK::References* references);
    // public System.Void GuessHandOrientations(RootMotion.FinalIK.VRIK/References references, System.Boolean onlyIfZero)
    // Offset: 0x133C248
    void GuessHandOrientations(RootMotion::FinalIK::VRIK::References* references, bool onlyIfZero);
    // public System.Void DefaultAnimationCurves()
    // Offset: 0x133C0D0
    void DefaultAnimationCurves();
    // public System.Void AddPositionOffset(RootMotion.FinalIK.IKSolverVR/PositionOffset positionOffset, UnityEngine.Vector3 value)
    // Offset: 0x133CC34
    void AddPositionOffset(RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Vector3 value)
    // Offset: 0x133CF10
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Quaternion value)
    // Offset: 0x133CFB4
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Quaternion value);
    // public System.Void AddPlatformMotion(UnityEngine.Vector3 deltaPosition, UnityEngine.Quaternion deltaRotation, UnityEngine.Vector3 platformPivot)
    // Offset: 0x133D148
    void AddPlatformMotion(UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation, UnityEngine::Vector3 platformPivot);
    // public System.Void Reset()
    // Offset: 0x133D2D4
    void Reset();
    // private UnityEngine.Vector3 GetNormal(UnityEngine.Transform[] transforms)
    // Offset: 0x133E1D0
    UnityEngine::Vector3 GetNormal(::Array<UnityEngine::Transform*>* transforms);
    // private UnityEngine.Vector3 GuessWristToPalmAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x133C4E8
    UnityEngine::Vector3 GuessWristToPalmAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // private UnityEngine.Vector3 GuessPalmToThumbAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x133C6C0
    UnityEngine::Vector3 GuessPalmToThumbAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // static private UnityEngine.Keyframe[] GetSineKeyframes(System.Single mag)
    // Offset: 0x133CB10
    static ::Array<UnityEngine::Keyframe>* GetSineKeyframes(float mag);
    // private System.Void UpdateSolverTransforms()
    // Offset: 0x133D44C
    void UpdateSolverTransforms();
    // private System.Void WriteTransforms()
    // Offset: 0x133FBFC
    void WriteTransforms();
    // private System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs)
    // Offset: 0x133D5B4
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs);
    // private System.Void Solve()
    // Offset: 0x133E9C0
    void Solve();
    // private UnityEngine.Vector3 GetPosition(System.Int32 index)
    // Offset: 0x133FFE8
    UnityEngine::Vector3 GetPosition(int index);
    // private UnityEngine.Quaternion GetRotation(System.Int32 index)
    // Offset: 0x1340030
    UnityEngine::Quaternion GetRotation(int index);
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone get_rootBone()
    // Offset: 0x1340674
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_rootBone();
    // private System.Void set_rootBone(RootMotion.FinalIK.IKSolverVR/VirtualBone value)
    // Offset: 0x134067C
    void set_rootBone(RootMotion::FinalIK::IKSolverVR::VirtualBone* value);
    // private System.Void Write()
    // Offset: 0x133FAAC
    void Write();
    // private UnityEngine.Vector3 GetPelvisOffset()
    // Offset: 0x1340074
    UnityEngine::Vector3 GetPelvisOffset();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x133DB4C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x133DCC0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x133DEC8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x133DF3C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(System.String message)
    // Offset: 0x133DFB0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void OnInitiate()
    // Offset: 0x133E4B0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x133E4F8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1340684
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverVR* New_ctor();
  }; // RootMotion.FinalIK.IKSolverVR
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR*, "RootMotion.FinalIK", "IKSolverVR");
#pragma pack(pop)
