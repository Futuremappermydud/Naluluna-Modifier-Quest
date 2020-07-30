// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmapSet
  class BeatmapLevelSO::DifficultyBeatmapSet : public ::Il2CppObject, public GlobalNamespace::IDifficultyBeatmapSet {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xB54860
    static BeatmapLevelSO::DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Void SetParentLevel(IBeatmapLevel level)
    // Offset: 0xB5368C
    void SetParentLevel(GlobalNamespace::IBeatmapLevel* level);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xB54850
    // Implemented from: IDifficultyBeatmapSet
    // Base method: BeatmapCharacteristicSO IDifficultyBeatmapSet::get_beatmapCharacteristic()
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xB54858
    // Implemented from: IDifficultyBeatmapSet
    // Base method: IDifficultyBeatmap[] IDifficultyBeatmapSet::get_difficultyBeatmaps()
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // BeatmapLevelSO/DifficultyBeatmapSet
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*, "", "BeatmapLevelSO/DifficultyBeatmapSet");
#pragma pack(pop)
