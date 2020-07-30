// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/VirtualBone
  class IKSolverVR::VirtualBone : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 readPosition
    // Offset: 0x10
    UnityEngine::Vector3 readPosition;
    // public UnityEngine.Quaternion readRotation
    // Offset: 0x1C
    UnityEngine::Quaternion readRotation;
    // public UnityEngine.Vector3 solverPosition
    // Offset: 0x2C
    UnityEngine::Vector3 solverPosition;
    // public UnityEngine.Quaternion solverRotation
    // Offset: 0x38
    UnityEngine::Quaternion solverRotation;
    // public System.Single length
    // Offset: 0x48
    float length;
    // public System.Single sqrMag
    // Offset: 0x4C
    float sqrMag;
    // public UnityEngine.Vector3 axis
    // Offset: 0x50
    UnityEngine::Vector3 axis;
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x14240C4
    static IKSolverVR::VirtualBone* New_ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void Read(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1424140
    void Read(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // static public System.Void SwingRotation(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, System.Int32 index, UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x143116C
    static void SwingRotation(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Vector3 swingTarget, float weight);
    // static public System.Single PreSolve(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones)
    // Offset: 0x1427404
    static float PreSolve(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*& bones);
    // static public System.Void RotateAroundPoint(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, System.Int32 index, UnityEngine.Vector3 point, UnityEngine.Quaternion rotation)
    // Offset: 0x1427904
    static void RotateAroundPoint(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation);
    // static public System.Void RotateBy(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x14313FC
    static void RotateBy(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Quaternion rotation);
    // static public System.Void RotateBy(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, UnityEngine.Quaternion rotation)
    // Offset: 0x1425E44
    static void RotateBy(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Quaternion rotation);
    // static public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x1431634
    static void RotateTo(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Quaternion rotation);
    // static public System.Void SolveTrigonometric(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, System.Int32 first, System.Int32 second, System.Int32 third, UnityEngine.Vector3 targetPosition, UnityEngine.Vector3 bendNormal, System.Single weight)
    // Offset: 0x1426630
    static void SolveTrigonometric(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int first, int second, int third, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float weight);
    // static private UnityEngine.Vector3 GetDirectionToBendPoint(UnityEngine.Vector3 direction, System.Single directionMag, UnityEngine.Vector3 bendDirection, System.Single sqrMag1, System.Single sqrMag2)
    // Offset: 0x14316EC
    static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float directionMag, UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
    // static public System.Void SolveFABRIK(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, UnityEngine.Vector3 startPosition, UnityEngine.Vector3 targetPosition, System.Single weight, System.Single minNormalizedTargetDistance, System.Int32 iterations, System.Single length, UnityEngine.Vector3 startOffset)
    // Offset: 0x1430558
    static void SolveFABRIK(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Vector3 startPosition, UnityEngine::Vector3 targetPosition, float weight, float minNormalizedTargetDistance, int iterations, float length, UnityEngine::Vector3 startOffset);
    // static private UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x1431904
    static UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float length);
    // static public System.Void SolveCCD(RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones, UnityEngine.Vector3 targetPosition, System.Single weight, System.Int32 iterations)
    // Offset: 0x1431A0C
    static void SolveCCD(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Vector3 targetPosition, float weight, int iterations);
  }; // RootMotion.FinalIK.IKSolverVR/VirtualBone
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::VirtualBone*, "RootMotion.FinalIK", "IKSolverVR/VirtualBone");
#pragma pack(pop)
