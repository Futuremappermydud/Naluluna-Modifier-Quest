// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator/Settings
  class VRIKCalibrator::Settings : public ::Il2CppObject {
    public:
    // public System.Single scaleMlp
    // Offset: 0x10
    float scaleMlp;
    // public UnityEngine.Vector3 headTrackerForward
    // Offset: 0x14
    UnityEngine::Vector3 headTrackerForward;
    // public UnityEngine.Vector3 headTrackerUp
    // Offset: 0x20
    UnityEngine::Vector3 headTrackerUp;
    // public UnityEngine.Vector3 bodyTrackerForward
    // Offset: 0x2C
    UnityEngine::Vector3 bodyTrackerForward;
    // public UnityEngine.Vector3 bodyTrackerUp
    // Offset: 0x38
    UnityEngine::Vector3 bodyTrackerUp;
    // public UnityEngine.Vector3 handTrackerForward
    // Offset: 0x44
    UnityEngine::Vector3 handTrackerForward;
    // public UnityEngine.Vector3 handTrackerUp
    // Offset: 0x50
    UnityEngine::Vector3 handTrackerUp;
    // public UnityEngine.Vector3 footTrackerForward
    // Offset: 0x5C
    UnityEngine::Vector3 footTrackerForward;
    // public UnityEngine.Vector3 footTrackerUp
    // Offset: 0x68
    UnityEngine::Vector3 footTrackerUp;
    // public UnityEngine.Vector3 headOffset
    // Offset: 0x74
    UnityEngine::Vector3 headOffset;
    // public UnityEngine.Vector3 handOffset
    // Offset: 0x80
    UnityEngine::Vector3 handOffset;
    // public System.Single footForwardOffset
    // Offset: 0x8C
    float footForwardOffset;
    // public System.Single footInwardOffset
    // Offset: 0x90
    float footInwardOffset;
    // public System.Single footHeadingOffset
    // Offset: 0x94
    float footHeadingOffset;
    // public System.Single pelvisPositionWeight
    // Offset: 0x98
    float pelvisPositionWeight;
    // public System.Single pelvisRotationWeight
    // Offset: 0x9C
    float pelvisRotationWeight;
    // public System.Void .ctor()
    // Offset: 0x12281A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRIKCalibrator::Settings* New_ctor();
  }; // RootMotion.FinalIK.VRIKCalibrator/Settings
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator::Settings*, "RootMotion.FinalIK", "VRIKCalibrator/Settings");
#pragma pack(pop)
