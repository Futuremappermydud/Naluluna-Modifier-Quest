// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardsModel/ScoresScope
  struct PlatformLeaderboardsModel::ScoresScope : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope Global
    static constexpr const int Global = 0;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope Global
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_Global();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope Global
    static void _set_Global(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static constexpr const int AroundPlayer = 1;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_AroundPlayer();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static void _set_AroundPlayer(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope Friends
    static constexpr const int Friends = 2;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope Friends
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_Friends();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope Friends
    static void _set_Friends(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // Creating value type constructor for type: ScoresScope
    ScoresScope(int value_ = {}) : value{value_} {}
  }; // PlatformLeaderboardsModel/ScoresScope
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, "", "PlatformLeaderboardsModel/ScoresScope");
#pragma pack(pop)
