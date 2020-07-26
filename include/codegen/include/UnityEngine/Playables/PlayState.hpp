// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayState
  struct PlayState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Playables.PlayState Paused
    static constexpr const int Paused = 0;
    // Get static field: static public UnityEngine.Playables.PlayState Paused
    static UnityEngine::Playables::PlayState _get_Paused();
    // Set static field: static public UnityEngine.Playables.PlayState Paused
    static void _set_Paused(UnityEngine::Playables::PlayState value);
    // static field const value: static public UnityEngine.Playables.PlayState Playing
    static constexpr const int Playing = 1;
    // Get static field: static public UnityEngine.Playables.PlayState Playing
    static UnityEngine::Playables::PlayState _get_Playing();
    // Set static field: static public UnityEngine.Playables.PlayState Playing
    static void _set_Playing(UnityEngine::Playables::PlayState value);
    // static field const value: static public UnityEngine.Playables.PlayState Delayed
    static constexpr const int Delayed = 2;
    // Get static field: static public UnityEngine.Playables.PlayState Delayed
    static UnityEngine::Playables::PlayState _get_Delayed();
    // Set static field: static public UnityEngine.Playables.PlayState Delayed
    static void _set_Delayed(UnityEngine::Playables::PlayState value);
    // Creating value type constructor for type: PlayState
    PlayState(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Playables.PlayState
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayState, "UnityEngine.Playables", "PlayState");
#pragma pack(pop)
