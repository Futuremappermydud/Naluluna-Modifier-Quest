// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/ActionNoArgs
  class SteamVR_Events::ActionNoArgs : public GlobalNamespace::SteamVR_Events::Action {
    public:
    // private SteamVR_Events/Event _event
    // Offset: 0x10
    GlobalNamespace::SteamVR_Events::Event* event;
    // private UnityEngine.Events.UnityAction action
    // Offset: 0x18
    UnityEngine::Events::UnityAction* action;
    // public System.Void .ctor(SteamVR_Events/Event _event, UnityEngine.Events.UnityAction action)
    // Offset: 0xD6BA4C
    static SteamVR_Events::ActionNoArgs* New_ctor(GlobalNamespace::SteamVR_Events::Event* _event, UnityEngine::Events::UnityAction* action);
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0xD6C494
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled);
  }; // SteamVR_Events/ActionNoArgs
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events::ActionNoArgs*, "", "SteamVR_Events/ActionNoArgs");
#pragma pack(pop)
