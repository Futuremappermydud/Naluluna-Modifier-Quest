// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: StandardLevelInfoSaveData_V100
#include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelInfoSaveData_V100/DifficultyBeatmap
  class StandardLevelInfoSaveData_V100::DifficultyBeatmap : public ::Il2CppObject {
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
    // private System.Int32 _noteJumpStartBeatOffset
    // Offset: 0x2C
    int noteJumpStartBeatOffset;
    // public System.String get_difficulty()
    // Offset: 0xB8FF3C
    ::Il2CppString* get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0xB8FF44
    int get_difficultyRank();
    // public System.String get_beatmapFilename()
    // Offset: 0xB8FF4C
    ::Il2CppString* get_beatmapFilename();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0xB8FF54
    float get_noteJumpMovementSpeed();
    // public System.Int32 get_noteJumpStartBeatOffset()
    // Offset: 0xB8FF5C
    int get_noteJumpStartBeatOffset();
    // public System.Void .ctor(System.String difficultyName, System.Int32 difficultyRank, System.String beatmapFilename, System.Single noteJumpMovementSpeed, System.Int32 noteJumpStartBeatOffset)
    // Offset: 0xB8FF64
    static StandardLevelInfoSaveData_V100::DifficultyBeatmap* New_ctor(::Il2CppString* difficultyName, int difficultyRank, ::Il2CppString* beatmapFilename, float noteJumpMovementSpeed, int noteJumpStartBeatOffset);
  }; // StandardLevelInfoSaveData_V100/DifficultyBeatmap
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");
#pragma pack(pop)
