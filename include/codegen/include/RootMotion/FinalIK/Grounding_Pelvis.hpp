// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Grounding/Pelvis
  class Grounding::Pelvis : public ::Il2CppObject {
    public:
    // private UnityEngine.Vector3 <IKOffset>k__BackingField
    // Offset: 0x10
    UnityEngine::Vector3 IKOffset;
    // private System.Single <heightOffset>k__BackingField
    // Offset: 0x1C
    float heightOffset;
    // private RootMotion.FinalIK.Grounding grounding
    // Offset: 0x20
    RootMotion::FinalIK::Grounding* grounding;
    // private UnityEngine.Vector3 lastRootPosition
    // Offset: 0x28
    UnityEngine::Vector3 lastRootPosition;
    // private System.Single damperF
    // Offset: 0x34
    float damperF;
    // private System.Boolean initiated
    // Offset: 0x38
    bool initiated;
    // private System.Single lastTime
    // Offset: 0x3C
    float lastTime;
    // public UnityEngine.Vector3 get_IKOffset()
    // Offset: 0x1362F74
    UnityEngine::Vector3 get_IKOffset();
    // private System.Void set_IKOffset(UnityEngine.Vector3 value)
    // Offset: 0x1362F80
    void set_IKOffset(UnityEngine::Vector3 value);
    // public System.Single get_heightOffset()
    // Offset: 0x1362F8C
    float get_heightOffset();
    // private System.Void set_heightOffset(System.Single value)
    // Offset: 0x1362F94
    void set_heightOffset(float value);
    // public System.Void Initiate(RootMotion.FinalIK.Grounding grounding)
    // Offset: 0x1360AB8
    void Initiate(RootMotion::FinalIK::Grounding* grounding);
    // public System.Void Reset()
    // Offset: 0x1361640
    void Reset();
    // public System.Void OnEnable()
    // Offset: 0x1362F9C
    void OnEnable();
    // public System.Void Process(System.Single lowestOffset, System.Single highestOffset, System.Boolean isGrounded)
    // Offset: 0x13613D4
    void Process(float lowestOffset, float highestOffset, bool isGrounded);
    // public System.Void .ctor()
    // Offset: 0x13609B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Grounding::Pelvis* New_ctor();
  }; // RootMotion.FinalIK.Grounding/Pelvis
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Pelvis*, "RootMotion.FinalIK", "Grounding/Pelvis");
#pragma pack(pop)
