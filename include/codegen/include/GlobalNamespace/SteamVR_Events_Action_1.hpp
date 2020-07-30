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
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Action`1
  template<typename T>
  class SteamVR_Events::Action_1 : public GlobalNamespace::SteamVR_Events::Action {
    public:
    // private SteamVR_Events/Event`1<T> _event
    // Offset: 0x0
    GlobalNamespace::SteamVR_Events::Event_1<T>* event;
    // private UnityEngine.Events.UnityAction`1<T> action
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T>* action;
    // public System.Void .ctor(SteamVR_Events/Event`1<T> _event, UnityEngine.Events.UnityAction`1<T> action)
    // Offset: 0x1283D98
    static SteamVR_Events::Action_1<T>* New_ctor(GlobalNamespace::SteamVR_Events::Event_1<T>* _event, UnityEngine::Events::UnityAction_1<T>* action) {
      return (SteamVR_Events::Action_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamVR_Events::Action_1<T>*>::get(), _event, action));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0x1283DF0
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Enable", enabled));
    }
  }; // SteamVR_Events/Action`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Action_1, "", "SteamVR_Events/Action`1");
#pragma pack(pop)
