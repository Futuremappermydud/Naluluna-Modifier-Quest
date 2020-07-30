// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController/<LoadScoresAsync>d__28
  struct CentralLeaderboardViewController::$LoadScoresAsync$d__28 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public CentralLeaderboardViewController <>4__this
    // Offset: 0x28
    GlobalNamespace::CentralLeaderboardViewController* $$4__this;
    // private IDifficultyBeatmap <loadingFordifficultyBeatmap>5__2
    // Offset: 0x30
    GlobalNamespace::IDifficultyBeatmap* $loadingFordifficultyBeatmap$5__2;
    // private System.Threading.CancellationToken <cancellationToken>5__3
    // Offset: 0x38
    System::Threading::CancellationToken $cancellationToken$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.LeaderboardEntriesResult> <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::LeaderboardEntriesResult*> $$u__1;
    // Creating value type constructor for type: $LoadScoresAsync$d__28
    $LoadScoresAsync$d__28(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::CentralLeaderboardViewController* $$4__this_ = {}, GlobalNamespace::IDifficultyBeatmap* $loadingFordifficultyBeatmap$5__2_ = {}, System::Threading::CancellationToken $cancellationToken$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::LeaderboardEntriesResult*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $loadingFordifficultyBeatmap$5__2{$loadingFordifficultyBeatmap$5__2_}, $cancellationToken$5__3{$cancellationToken$5__3_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA26B6C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA26B74
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // CentralLeaderboardViewController/<LoadScoresAsync>d__28
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::$LoadScoresAsync$d__28, "", "CentralLeaderboardViewController/<LoadScoresAsync>d__28");
#pragma pack(pop)
