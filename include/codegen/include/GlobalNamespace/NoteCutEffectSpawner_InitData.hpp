// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NoteCutEffectSpawner
#include "GlobalNamespace/NoteCutEffectSpawner.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutEffectSpawner/InitData
  class NoteCutEffectSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean spawnScores
    // Offset: 0x10
    bool spawnScores;
    // public readonly System.Boolean spawnBadCuts
    // Offset: 0x11
    bool spawnBadCuts;
    // public System.Void .ctor(System.Boolean spawnScores, System.Boolean spawnBadCuts)
    // Offset: 0xC01734
    static NoteCutEffectSpawner::InitData* New_ctor(bool spawnScores, bool spawnBadCuts);
  }; // NoteCutEffectSpawner/InitData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutEffectSpawner::InitData*, "", "NoteCutEffectSpawner/InitData");
#pragma pack(pop)
