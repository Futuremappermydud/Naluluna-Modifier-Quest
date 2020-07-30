// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: SteamPlatformAdditionalContentModel
#include "GlobalNamespace/SteamPlatformAdditionalContentModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/OpenProductStoreResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
  struct SteamPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder;
    // public SteamPlatformAdditionalContentModel <>4__this
    // Offset: 0x20
    GlobalNamespace::SteamPlatformAdditionalContentModel* $$4__this;
    // public System.String levelPackId
    // Offset: 0x28
    ::Il2CppString* levelPackId;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/OpenProductStoreResult> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$u__1;
    // Creating value type constructor for type: $OpenLevelPackProductStoreAsync$d__10
    $OpenLevelPackProductStoreAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder_ = {}, GlobalNamespace::SteamPlatformAdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelPackId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelPackId{levelPackId_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27364
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2736C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10, "", "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
#pragma pack(pop)
