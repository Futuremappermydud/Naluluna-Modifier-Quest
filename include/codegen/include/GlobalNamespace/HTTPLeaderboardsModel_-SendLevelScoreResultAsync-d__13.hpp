// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.SendLeaderboardEntryResult
#include "OnlineServices/SendLeaderboardEntryResult.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.API.Response
#include "OnlineServices/API/Response.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__13
  struct HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__13 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder;
    // public HTTPLeaderboardsModel <>4__this
    // Offset: 0x20
    GlobalNamespace::HTTPLeaderboardsModel* $$4__this;
    // public OnlineServices.LevelScoreResultsData levelResultsData
    // Offset: 0x28
    OnlineServices::LevelScoreResultsData levelResultsData;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x58
    System::Threading::CancellationToken cancellationToken;
    // private System.String <leaderboardId>5__2
    // Offset: 0x60
    ::Il2CppString* $leaderboardId$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.Response> <>u__1
    // Offset: 0x68
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1;
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__13
    $SendLevelScoreResultAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder_ = {}, GlobalNamespace::HTTPLeaderboardsModel* $$4__this_ = {}, OnlineServices::LevelScoreResultsData levelResultsData_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $leaderboardId$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelResultsData{levelResultsData_}, cancellationToken{cancellationToken_}, $leaderboardId$5__2{$leaderboardId$5__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2B20C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2B214
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__13
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__13, "", "HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__13");
#pragma pack(pop)
