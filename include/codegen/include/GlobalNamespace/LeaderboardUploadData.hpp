// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardUploadData
  class LeaderboardUploadData : public ::Il2CppObject {
    public:
    // public System.String playerName
    // Offset: 0x10
    ::Il2CppString* playerName;
    // public System.String playerId
    // Offset: 0x18
    ::Il2CppString* playerId;
    // public System.String score
    // Offset: 0x20
    ::Il2CppString* score;
    // public System.String leaderboardId
    // Offset: 0x28
    ::Il2CppString* leaderboardId;
    // public System.String songName
    // Offset: 0x30
    ::Il2CppString* songName;
    // public System.String songSubName
    // Offset: 0x38
    ::Il2CppString* songSubName;
    // public System.String authorName
    // Offset: 0x40
    ::Il2CppString* authorName;
    // public System.String bpm
    // Offset: 0x48
    ::Il2CppString* bpm;
    // public System.String difficulty
    // Offset: 0x50
    ::Il2CppString* difficulty;
    // public System.String infoHash
    // Offset: 0x58
    ::Il2CppString* infoHash;
    // public System.Collections.Generic.List`1<System.String> modifiers
    // Offset: 0x60
    System::Collections::Generic::List_1<::Il2CppString*>* modifiers;
    // public System.Void .ctor(System.String playerName, System.String playerId, System.String score, System.String leaderboardId, System.String songName, System.String songSubName, System.String authorName, System.String bpm, System.String difficulty, System.String infoHash, System.Collections.Generic.List`1<System.String> modifiers)
    // Offset: 0xB48118
    static LeaderboardUploadData* New_ctor(::Il2CppString* playerName, ::Il2CppString* playerId, ::Il2CppString* score, ::Il2CppString* leaderboardId, ::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* authorName, ::Il2CppString* bpm, ::Il2CppString* difficulty, ::Il2CppString* infoHash, System::Collections::Generic::List_1<::Il2CppString*>* modifiers);
  }; // LeaderboardUploadData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardUploadData*, "", "LeaderboardUploadData");
#pragma pack(pop)
