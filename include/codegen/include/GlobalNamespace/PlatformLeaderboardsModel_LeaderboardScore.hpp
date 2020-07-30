// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardsModel/LeaderboardScore
  class PlatformLeaderboardsModel::LeaderboardScore : public ::Il2CppObject {
    public:
    // private System.Int32 <score>k__BackingField
    // Offset: 0x10
    int score;
    // private System.Int32 <rank>k__BackingField
    // Offset: 0x14
    int rank;
    // private System.String <playerName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* playerName;
    // private System.String <playerId>k__BackingField
    // Offset: 0x20
    ::Il2CppString* playerId;
    // private System.Collections.Generic.List`1<GameplayModifierParamsSO> <gameplayModifiers>k__BackingField
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers;
    // public System.Int32 get_score()
    // Offset: 0xBC2A4C
    int get_score();
    // private System.Void set_score(System.Int32 value)
    // Offset: 0xBC2A54
    void set_score(int value);
    // public System.Int32 get_rank()
    // Offset: 0xBC2A5C
    int get_rank();
    // private System.Void set_rank(System.Int32 value)
    // Offset: 0xBC2A64
    void set_rank(int value);
    // public System.String get_playerName()
    // Offset: 0xBC2A6C
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0xBC2A74
    void set_playerName(::Il2CppString* value);
    // public System.String get_playerId()
    // Offset: 0xBC2A7C
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0xBC2A84
    void set_playerId(::Il2CppString* value);
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> get_gameplayModifiers()
    // Offset: 0xBC2A8C
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(System.Collections.Generic.List`1<GameplayModifierParamsSO> value)
    // Offset: 0xBC2A94
    void set_gameplayModifiers(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* value);
    // public System.Void .ctor(System.Int32 score, System.Int32 rank, System.String playerName, System.String playerId, System.Collections.Generic.List`1<GameplayModifierParamsSO> gameplayModifiers)
    // Offset: 0xBC2A9C
    static PlatformLeaderboardsModel::LeaderboardScore* New_ctor(int score, int rank, ::Il2CppString* playerName, ::Il2CppString* playerId, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers);
  }; // PlatformLeaderboardsModel/LeaderboardScore
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*, "", "PlatformLeaderboardsModel/LeaderboardScore");
#pragma pack(pop)
