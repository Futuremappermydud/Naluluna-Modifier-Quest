// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderSaveData/Keyframe
  class VRControllersRecorderSaveData::Keyframe : public ::Il2CppObject {
    public:
    // public VRControllersRecorderSaveData/PositionAndRotation[] positionsAndRotations
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>* positionsAndRotations;
    // public System.Single time
    // Offset: 0x18
    float time;
    // public System.Void .ctor()
    // Offset: 0xC3E1B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorderSaveData::Keyframe* New_ctor();
  }; // VRControllersRecorderSaveData/Keyframe
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::Keyframe*, "", "VRControllersRecorderSaveData/Keyframe");
#pragma pack(pop)
