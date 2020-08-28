// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameEnergyCounter
#include "GlobalNamespace/GameEnergyCounter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameEnergyCounter/InitData
  class GameEnergyCounter::InitData : public ::Il2CppObject {
    public:
    // public readonly GameplayModifiers/EnergyType energyType
    // Offset: 0x10
    GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // public readonly System.Boolean noFail
    // Offset: 0x14
    bool noFail;
    // public readonly System.Boolean instaFail
    // Offset: 0x15
    bool instaFail;
    // public readonly System.Boolean failOnSaberClash
    // Offset: 0x16
    bool failOnSaberClash;
    // public System.Void .ctor(GameplayModifiers/EnergyType energyType, System.Boolean noFail, System.Boolean instaFail, System.Boolean failOnSaberClash)
    // Offset: 0xB3C0CC
    static GameEnergyCounter::InitData* New_ctor(GlobalNamespace::GameplayModifiers::EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash);
  }; // GameEnergyCounter/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameEnergyCounter::InitData*, "", "GameEnergyCounter/InitData");
#pragma pack(pop)
