// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveDataV1_0_1/AchievementsData
  class PlayerSaveDataV1_0_1::AchievementsData : public ::Il2CppObject {
    public:
    // public System.String[] unlockedAchievements
    // Offset: 0x10
    ::Array<::Il2CppString*>* unlockedAchievements;
    // public System.String[] unlockedAchievementsToUpload
    // Offset: 0x18
    ::Array<::Il2CppString*>* unlockedAchievementsToUpload;
    // public System.Void .ctor()
    // Offset: 0xC056AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::AchievementsData* New_ctor();
  }; // PlayerSaveDataV1_0_1/AchievementsData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
#pragma pack(pop)
