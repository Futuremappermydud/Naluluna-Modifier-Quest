// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomDifficultyBeatmapSet
  class CustomDifficultyBeatmapSet : public ::Il2CppObject, public GlobalNamespace::IDifficultyBeatmapSet {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private CustomDifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x18
    ::Array<GlobalNamespace::CustomDifficultyBeatmap*>* difficultyBeatmaps;
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xBCDFB4
    static CustomDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void SetCustomDifficultyBeatmaps(CustomDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xBCDFE8
    void SetCustomDifficultyBeatmaps(::Array<GlobalNamespace::CustomDifficultyBeatmap*>* difficultyBeatmaps);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xBCDFA4
    // Implemented from: IDifficultyBeatmapSet
    // Base method: BeatmapCharacteristicSO IDifficultyBeatmapSet::get_beatmapCharacteristic()
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xBCDFAC
    // Implemented from: IDifficultyBeatmapSet
    // Base method: IDifficultyBeatmap[] IDifficultyBeatmapSet::get_difficultyBeatmaps()
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // CustomDifficultyBeatmapSet
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmapSet*, "", "CustomDifficultyBeatmapSet");
#pragma pack(pop)
