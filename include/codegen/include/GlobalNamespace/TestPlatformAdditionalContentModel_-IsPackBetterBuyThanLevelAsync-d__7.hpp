// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/IsPackBetterBuyThanLevelResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7
  struct TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult> $$t__builder;
    // public System.Threading.CancellationToken token
    // Offset: 0x20
    System::Threading::CancellationToken token;
    // public TestPlatformAdditionalContentModel <>4__this
    // Offset: 0x28
    GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this;
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Creating value type constructor for type: $IsPackBetterBuyThanLevelAsync$d__7
    $IsPackBetterBuyThanLevelAsync$d__7(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult> $$t__builder_ = {}, System::Threading::CancellationToken token_ = {}, GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this_ = {}, System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, token{token_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2CB74
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2CB7C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7, "", "TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7");
#pragma pack(pop)
