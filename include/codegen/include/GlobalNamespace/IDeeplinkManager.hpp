// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IDeeplinkManager
  class IDeeplinkManager {
    public:
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xFFFFFFFF
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xFFFFFFFF
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public Deeplink get_currentDeeplink()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::Deeplink* get_currentDeeplink();
  }; // IDeeplinkManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDeeplinkManager*, "", "IDeeplinkManager");
#pragma pack(pop)
