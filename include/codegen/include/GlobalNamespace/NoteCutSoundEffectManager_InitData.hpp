// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NoteCutSoundEffectManager
#include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutSoundEffectManager/InitData
  class NoteCutSoundEffectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean useTestAudioClips
    // Offset: 0x10
    bool useTestAudioClips;
    // public readonly System.Boolean ignoreBadCuts
    // Offset: 0x11
    bool ignoreBadCuts;
    // public System.Void .ctor(System.Boolean useTestAudioClips, System.Boolean ignoreBadCuts)
    // Offset: 0xC034A8
    static NoteCutSoundEffectManager::InitData* New_ctor(bool useTestAudioClips, bool ignoreBadCuts);
  }; // NoteCutSoundEffectManager/InitData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager::InitData*, "", "NoteCutSoundEffectManager/InitData");
#pragma pack(pop)
