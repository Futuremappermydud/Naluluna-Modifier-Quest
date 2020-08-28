// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Action`3
  template<typename T0, typename T1, typename T2>
  class SteamVR_Events::Action_3 : public GlobalNamespace::SteamVR_Events::Action {
    public:
    // private SteamVR_Events/Event`3<T0,T1,T2> _event
    // Offset: 0x0
    GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>* event;
    // private UnityEngine.Events.UnityAction`3<T0,T1,T2> action
    // Offset: 0x0
    UnityEngine::Events::UnityAction_3<T0, T1, T2>* action;
    // public System.Void .ctor(SteamVR_Events/Event`3<T0,T1,T2> _event, UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0xFFFFFFFF
    static SteamVR_Events::Action_3<T0, T1, T2>* New_ctor(GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>* _event, UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      return (SteamVR_Events::Action_3<T0, T1, T2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamVR_Events::Action_3<T0, T1, T2>*>::get(), _event, action)));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enable", enabled));
    }
  }; // SteamVR_Events/Action`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Action_3, "", "SteamVR_Events/Action`3");
#pragma pack(pop)
