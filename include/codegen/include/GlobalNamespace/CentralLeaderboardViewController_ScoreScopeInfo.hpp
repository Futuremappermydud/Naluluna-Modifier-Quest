// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: OnlineServices.ScoresScope
#include "OnlineServices/ScoresScope.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController/ScoreScopeInfo
  class CentralLeaderboardViewController::ScoreScopeInfo : public ::Il2CppObject {
    public:
    // public OnlineServices.ScoresScope scoreScope
    // Offset: 0x10
    OnlineServices::ScoresScope scoreScope;
    // public System.String localizedTitle
    // Offset: 0x18
    ::Il2CppString* localizedTitle;
    // public UnityEngine.Sprite icon
    // Offset: 0x20
    UnityEngine::Sprite* icon;
    // public System.Int32 playerScorePos
    // Offset: 0x28
    int playerScorePos;
    // public System.Void .ctor(OnlineServices.ScoresScope scoreScope, UnityEngine.Sprite icon, System.String localizedTitle)
    // Offset: 0xB604A0
    static CentralLeaderboardViewController::ScoreScopeInfo* New_ctor(OnlineServices::ScoresScope scoreScope, UnityEngine::Sprite* icon, ::Il2CppString* localizedTitle);
  }; // CentralLeaderboardViewController/ScoreScopeInfo
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, "", "CentralLeaderboardViewController/ScoreScopeInfo");
#pragma pack(pop)
