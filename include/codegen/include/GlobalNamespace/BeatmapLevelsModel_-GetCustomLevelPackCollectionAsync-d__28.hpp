// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelsModel/<GetCustomLevelPackCollectionAsync>d__28
  struct BeatmapLevelsModel::$GetCustomLevelPackCollectionAsync$d__28 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevelPackCollection> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevelPackCollection> <>u__1
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$u__1;
    // Creating value type constructor for type: $GetCustomLevelPackCollectionAsync$d__28
    $GetCustomLevelPackCollectionAsync$d__28(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA26A0C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA26A14
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelsModel/<GetCustomLevelPackCollectionAsync>d__28
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::$GetCustomLevelPackCollectionAsync$d__28, "", "BeatmapLevelsModel/<GetCustomLevelPackCollectionAsync>d__28");
#pragma pack(pop)
