// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
  class PlayerSaveDataV1_0_1::PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData
    // Offset: 0x10
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData;
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData
    // Offset: 0x18
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData
    // Offset: 0x20
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // public System.Void .ctor(PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData)
    // Offset: 0xC1B5D8
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData);
    // public System.Void .ctor()
    // Offset: 0xC1B50C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor();
  }; // PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
#pragma pack(pop)
