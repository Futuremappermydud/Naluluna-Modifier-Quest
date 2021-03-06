// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
  // Forward declaring type: LevelScoreUploader
  class LevelScoreUploader;
  // Forward declaring type: PlatformOnlineServicesAvailabilityModel
  class PlatformOnlineServicesAvailabilityModel;
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformUserModelSO
  class PlatformUserModelSO;
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.ServerManager
  class ServerManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__13
    struct $GetLeaderboardEntriesAsync$d__13;
    // private PlatformUserModelSO platformUserModel
    // Offset: 0x18
    GlobalNamespace::PlatformUserModelSO* platformUserModel;
    // private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    // Offset: 0x20
    System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent;
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Offset: 0x28
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // private HTTPLeaderboardsModel _leaderboardsModel
    // Offset: 0x30
    GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel;
    // private System.Boolean _initialized
    // Offset: 0x38
    bool initialized;
    // private OnlineServices.LevelScoreUploader _levelScoreUploader
    // Offset: 0x40
    OnlineServices::LevelScoreUploader* levelScoreUploader;
    // private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    // Offset: 0x48
    OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel;
    // public System.Void add_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0xBB9BF0
    void add_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void remove_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0xBB9C94
    void remove_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBB9D38
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBB9DDC
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void Init(System.String hostname)
    // Offset: 0xBB9E80
    void Init(::Il2CppString* hostname);
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xBBA040
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.LeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBBA06C
    System::Threading::Tasks::Task_1<OnlineServices::LeaderboardEntriesResult*>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Void SendLevelScoreResult(OnlineServices.LevelScoreResultsData levelScoreResultsData)
    // Offset: 0xBBA1D0
    void SendLevelScoreResult(OnlineServices::LevelScoreResultsData levelScoreResultsData);
    // private System.Void <Init>b__11_0(OnlineServices.PlatformServicesAvailabilityInfo availabilityInfo)
    // Offset: 0xBBA22C
    void $Init$b__11_0(OnlineServices::PlatformServicesAvailabilityInfo* availabilityInfo);
    // private System.Void <Init>b__11_1(System.String leaderboardId)
    // Offset: 0xBBA2A0
    void $Init$b__11_1(::Il2CppString* leaderboardId);
    // public System.Void .ctor()
    // Offset: 0xBBA224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ServerManager* New_ctor();
  }; // OnlineServices.ServerManager
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::ServerManager*, "OnlineServices", "ServerManager");
#pragma pack(pop)
