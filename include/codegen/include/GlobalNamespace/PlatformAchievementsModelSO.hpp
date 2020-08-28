// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4AchievementIdsModelSO
  class PS4AchievementIdsModelSO;
  // Forward declaring type: AchievementIdsModelSO
  class AchievementIdsModelSO;
  // Forward declaring type: PlatformAchievementsHandler
  class PlatformAchievementsHandler;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsModelSO
  class PlatformAchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult
    struct UnlockAchievementResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult
    struct GetUnlockedAchievementsResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler
    class UnlockAchievementCompletionHandler;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler
    class GetUnlockedAchievementsCompletionHandler;
    // private PS4AchievementIdsModelSO _ps4AchievementIdsModel
    // Offset: 0x18
    GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel;
    // private AchievementIdsModelSO _achievementIdsModel
    // Offset: 0x20
    GlobalNamespace::AchievementIdsModelSO* achievementIdsModel;
    // private PlatformAchievementsHandler _platformAchievementsHandler
    // Offset: 0x28
    GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler;
    // private PlatformAchievementsHandler get_platformAchievementsHandler()
    // Offset: 0xBD5424
    GlobalNamespace::PlatformAchievementsHandler* get_platformAchievementsHandler();
    // public System.Void Initialize()
    // Offset: 0xBD54E8
    void Initialize();
    // private System.Void CreatePlatformAchievementsHandler()
    // Offset: 0xBD5454
    void CreatePlatformAchievementsHandler();
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0xBD54EC
    GlobalNamespace::HMAsyncRequest* UnlockAchievement(::Il2CppString* achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0xBD57D0
    GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0xBD5AC0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformAchievementsModelSO* New_ctor();
  }; // PlatformAchievementsModelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO*, "", "PlatformAchievementsModelSO");
#pragma pack(pop)
