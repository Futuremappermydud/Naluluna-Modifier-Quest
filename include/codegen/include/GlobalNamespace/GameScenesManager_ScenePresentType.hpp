// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameScenesManager/ScenePresentType
  struct GameScenesManager::ScenePresentType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public GameScenesManager/ScenePresentType Load
    static constexpr const int Load = 0;
    // Get static field: static public GameScenesManager/ScenePresentType Load
    static GlobalNamespace::GameScenesManager::ScenePresentType _get_Load();
    // Set static field: static public GameScenesManager/ScenePresentType Load
    static void _set_Load(GlobalNamespace::GameScenesManager::ScenePresentType value);
    // static field const value: static public GameScenesManager/ScenePresentType Activate
    static constexpr const int Activate = 1;
    // Get static field: static public GameScenesManager/ScenePresentType Activate
    static GlobalNamespace::GameScenesManager::ScenePresentType _get_Activate();
    // Set static field: static public GameScenesManager/ScenePresentType Activate
    static void _set_Activate(GlobalNamespace::GameScenesManager::ScenePresentType value);
    // Creating value type constructor for type: ScenePresentType
    ScenePresentType(int value_ = {}) : value{value_} {}
  }; // GameScenesManager/ScenePresentType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::ScenePresentType, "", "GameScenesManager/ScenePresentType");
#pragma pack(pop)
