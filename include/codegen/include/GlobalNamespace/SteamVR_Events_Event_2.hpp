// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Event`2
  template<typename T0, typename T1>
  class SteamVR_Events::Event_2 : public UnityEngine::Events::UnityEvent_2<T0, T1> {
    public:
    // public System.Void Listen(UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0x12845B4
    void Listen(UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Listen", action));
    }
    // public System.Void Remove(UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0x12845D8
    void Remove(UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Remove", action));
    }
    // public System.Void Send(T0 arg0, T1 arg1)
    // Offset: 0x1284690
    void Send(T0 arg0, T1 arg1) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Send", arg0, arg1));
    }
    // public System.Void .ctor()
    // Offset: 0x12846B8
    // Implemented from: UnityEngine.Events.UnityEvent`2
    // Base method: System.Void UnityEvent`2::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Events::Event_2<T0, T1>* New_ctor() {
      return (SteamVR_Events::Event_2<T0, T1>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamVR_Events::Event_2<T0, T1>*>::get()));
    }
  }; // SteamVR_Events/Event`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Event_2, "", "SteamVR_Events/Event`2");
#pragma pack(pop)
