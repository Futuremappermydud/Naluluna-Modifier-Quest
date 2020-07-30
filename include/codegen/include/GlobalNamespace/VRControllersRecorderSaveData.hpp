// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderSaveData
  class VRControllersRecorderSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation
    class PositionAndRotation;
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::Keyframe
    class Keyframe;
    // Nested type: GlobalNamespace::VRControllersRecorderSaveData::NodeInfo
    class NodeInfo;
    // public VRControllersRecorderSaveData/NodeInfo[] nodesInfo
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>* nodesInfo;
    // public VRControllersRecorderSaveData/Keyframe[] keyframes
    // Offset: 0x18
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>* keyframes;
    // public System.Void .ctor()
    // Offset: 0xC3E1A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorderSaveData* New_ctor();
  }; // VRControllersRecorderSaveData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData*, "", "VRControllersRecorderSaveData");
#pragma pack(pop)
