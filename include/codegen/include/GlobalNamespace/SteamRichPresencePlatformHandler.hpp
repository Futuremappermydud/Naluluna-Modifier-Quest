// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamRichPresencePlatformHandler
  class SteamRichPresencePlatformHandler : public ::Il2CppObject, public GlobalNamespace::IRichPresencePlatformHandler {
    public:
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0xB928DC
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::SetPresence(IRichPresenceData richPresenceData)
    void SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0xB928E0
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xB928E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamRichPresencePlatformHandler* New_ctor();
  }; // SteamRichPresencePlatformHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamRichPresencePlatformHandler*, "", "SteamRichPresencePlatformHandler");
#pragma pack(pop)
