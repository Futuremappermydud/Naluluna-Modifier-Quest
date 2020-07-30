// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlatformUserHandler
  class IPlatformUserHandler;
  // Forward declaring type: PlatformInfo
  class PlatformInfo;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO
  class PlatformUserModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserInfoResult
    struct GetUserInfoResult;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult
    struct GetUserFriendsUserIdsResult;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenResult
    struct GetUserAuthTokenResult;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsResult
    struct GetUserNamesForUserIdsResult;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserInfoCompletionHandler
    class GetUserInfoCompletionHandler;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler
    class GetUserFriendsUserIdsCompletionHandler;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenCompletionHandler
    class GetUserAuthTokenCompletionHandler;
    // Nested type: GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler
    class GetUserNamesForUserIdsCompletionHandler;
    // Nested type: GlobalNamespace::PlatformUserModelSO::UserInfo
    class UserInfo;
    // private IPlatformUserHandler _platformUserHandler
    // Offset: 0x18
    GlobalNamespace::IPlatformUserHandler* platformUserHandler;
    // public PlatformInfo get_platformInfo()
    // Offset: 0xBC2E50
    GlobalNamespace::PlatformInfo* get_platformInfo();
    // public HMAsyncRequest GetUserInfo(PlatformUserModelSO/GetUserInfoCompletionHandler completionHandler)
    // Offset: 0xBC1CD8
    GlobalNamespace::HMAsyncRequest* GetUserInfo(GlobalNamespace::PlatformUserModelSO::GetUserInfoCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUserFriendsUserIds(System.Boolean cached, PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler completionHandler)
    // Offset: 0xBC2F74
    GlobalNamespace::HMAsyncRequest* GetUserFriendsUserIds(bool cached, GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUserAuthToken(PlatformUserModelSO/GetUserAuthTokenCompletionHandler completionHandler)
    // Offset: 0xBC3040
    GlobalNamespace::HMAsyncRequest* GetUserAuthToken(GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUserNamesForUserIds(System.String[] userIds, PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler completionHandler)
    // Offset: 0xBB9AC4
    GlobalNamespace::HMAsyncRequest* GetUserNamesForUserIds(::Array<::Il2CppString*>* userIds, GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler* completionHandler);
    // protected override System.Void OnEnable()
    // Offset: 0xBC2F00
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xBC3104
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformUserModelSO* New_ctor();
  }; // PlatformUserModelSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO*, "", "PlatformUserModelSO");
#pragma pack(pop)
