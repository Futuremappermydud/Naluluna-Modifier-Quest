// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusDeeplinkManager
  class OculusDeeplinkManager : public ::Il2CppObject, public GlobalNamespace::IDeeplinkManager {
    public:
    // private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;
    // private Deeplink _currentDeeplink
    // Offset: 0x18
    GlobalNamespace::Deeplink* currentDeeplink;
    // public System.Void OculusPlatformWasInitialized()
    // Offset: 0xC38BE0
    void OculusPlatformWasInitialized();
    // private System.Void SetLaunchIntentChangedNotificationCallback(Oculus.Platform.Message`1<System.String> message)
    // Offset: 0xC38CA8
    void SetLaunchIntentChangedNotificationCallback(Oculus::Platform::Message_1<::Il2CppString*>* message);
    // private System.Void ProcessLaunchDetails(Oculus.Platform.Models.LaunchDetails launchDetails)
    // Offset: 0xC38C88
    void ProcessLaunchDetails(Oculus::Platform::Models::LaunchDetails* launchDetails);
    // private System.Void UpdateDeeplinkMessage(System.String deeplinkMessage)
    // Offset: 0xC38CEC
    void UpdateDeeplinkMessage(::Il2CppString* deeplinkMessage);
    // private System.Boolean IsAtLeastOneFieldPopulated(Deeplink deeplink)
    // Offset: 0xC38E24
    bool IsAtLeastOneFieldPopulated(GlobalNamespace::Deeplink* deeplink);
    // static public System.Void Log(System.String message)
    // Offset: 0xC38EA4
    static void Log(::Il2CppString* message);
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xC38A90
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xC38B34
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public Deeplink get_currentDeeplink()
    // Offset: 0xC38BD8
    // Implemented from: IDeeplinkManager
    // Base method: Deeplink IDeeplinkManager::get_currentDeeplink()
    GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void .ctor()
    // Offset: 0xC38F0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusDeeplinkManager* New_ctor();
  }; // OculusDeeplinkManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusDeeplinkManager*, "", "OculusDeeplinkManager");
#pragma pack(pop)
