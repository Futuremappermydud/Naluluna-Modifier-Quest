// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: VRTrackersRecorder/Keyframe
#include "GlobalNamespace/VRTrackersRecorder_Keyframe.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRTrackersRecorder/Keyframe/KeyframeTransform
  class VRTrackersRecorder::Keyframe::KeyframeTransform : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 _pos
    // Offset: 0x10
    UnityEngine::Vector3 pos;
    // public UnityEngine.Quaternion _rot
    // Offset: 0x1C
    UnityEngine::Quaternion rot;
    // public System.Boolean _valid
    // Offset: 0x2C
    bool valid;
    // public System.Void .ctor()
    // Offset: 0xC3FABC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRTrackersRecorder::Keyframe::KeyframeTransform* New_ctor();
  }; // VRTrackersRecorder/Keyframe/KeyframeTransform
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*, "", "VRTrackersRecorder/Keyframe/KeyframeTransform");
#pragma pack(pop)
