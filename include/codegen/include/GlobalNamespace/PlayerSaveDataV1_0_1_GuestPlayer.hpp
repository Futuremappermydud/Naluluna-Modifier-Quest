// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:12 PM
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
  // Autogenerated type: PlayerSaveDataV1_0_1/GuestPlayer
  class PlayerSaveDataV1_0_1::GuestPlayer : public ::Il2CppObject {
    public:
    // public System.String playerName
    // Offset: 0x10
    ::Il2CppString* playerName;
    // public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    // Offset: 0x18
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings;
    // public System.Void .ctor()
    // Offset: 0xC056BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::GuestPlayer* New_ctor();
  }; // PlayerSaveDataV1_0_1/GuestPlayer
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*, "", "PlayerSaveDataV1_0_1/GuestPlayer");
#pragma pack(pop)
