// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
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
  // Forward declaring type: AchievementUpdate
  class AchievementUpdate;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass2_0
  class OculusPlatformAchievementHandler::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler
    // Offset: 0x10
    GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler;
    // System.Void <UnlockAchievement>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementUpdate> message)
    // Offset: 0xC39A14
    void $UnlockAchievement$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate*>* message);
    // public System.Void .ctor()
    // Offset: 0xC39910
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformAchievementHandler::$$c__DisplayClass2_0* New_ctor();
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass2_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass2_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass2_0");
#pragma pack(pop)
