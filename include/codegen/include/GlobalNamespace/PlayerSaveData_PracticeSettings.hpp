// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/PracticeSettings
  class PlayerSaveData::PracticeSettings : public ::Il2CppObject {
    public:
    // public System.Single startSongTime
    // Offset: 0x10
    float startSongTime;
    // public System.Single songSpeedMul
    // Offset: 0x14
    float songSpeedMul;
    // public System.Void .ctor()
    // Offset: 0xC05694
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::PracticeSettings* New_ctor();
  }; // PlayerSaveData/PracticeSettings
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
#pragma pack(pop)
