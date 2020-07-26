// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass3_0
  class OculusPlatformAchievementHandler::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler
    // Offset: 0x10
    GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler;
    // public OculusPlatformAchievementHandler <>4__this
    // Offset: 0x18
    GlobalNamespace::OculusPlatformAchievementHandler* $$4__this;
    // System.Void <GetUnlockedAchievements>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList> message)
    // Offset: 0xC24C30
    void $GetUnlockedAchievements$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList*>* message);
    // public System.Void .ctor()
    // Offset: 0xC24BD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformAchievementHandler::$$c__DisplayClass3_0* New_ctor();
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass3_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
#pragma pack(pop)
