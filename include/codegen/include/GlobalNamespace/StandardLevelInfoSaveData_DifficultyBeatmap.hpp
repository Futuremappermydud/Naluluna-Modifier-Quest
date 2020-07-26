// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelInfoSaveData/DifficultyBeatmap
  class StandardLevelInfoSaveData::DifficultyBeatmap : public ::Il2CppObject {
    public:
    // private System.String _difficulty
    // Offset: 0x10
    ::Il2CppString* difficulty;
    // private System.Int32 _difficultyRank
    // Offset: 0x18
    int difficultyRank;
    // private System.String _beatmapFilename
    // Offset: 0x20
    ::Il2CppString* beatmapFilename;
    // private System.Single _noteJumpMovementSpeed
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // private System.Single _noteJumpStartBeatOffset
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // public System.String get_difficulty()
    // Offset: 0xB8FB44
    ::Il2CppString* get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0xB8FB4C
    int get_difficultyRank();
    // public System.String get_beatmapFilename()
    // Offset: 0xB8FB54
    ::Il2CppString* get_beatmapFilename();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0xB8FB5C
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0xB8FB64
    float get_noteJumpStartBeatOffset();
    // public System.Void .ctor(System.String difficultyName, System.Int32 difficultyRank, System.String beatmapFilename, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset)
    // Offset: 0xB8FA84
    static StandardLevelInfoSaveData::DifficultyBeatmap* New_ctor(::Il2CppString* difficultyName, int difficultyRank, ::Il2CppString* beatmapFilename, float noteJumpMovementSpeed, float noteJumpStartBeatOffset);
  }; // StandardLevelInfoSaveData/DifficultyBeatmap
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*, "", "StandardLevelInfoSaveData/DifficultyBeatmap");
#pragma pack(pop)
