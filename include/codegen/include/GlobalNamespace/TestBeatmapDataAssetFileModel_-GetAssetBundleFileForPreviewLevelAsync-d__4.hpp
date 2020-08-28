// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestBeatmapDataAssetFileModel
#include "GlobalNamespace/TestBeatmapDataAssetFileModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
  struct TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder;
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // public TestBeatmapDataAssetFileModel <>4__this
    // Offset: 0x28
    GlobalNamespace::TestBeatmapDataAssetFileModel* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.String <path>5__2
    // Offset: 0x38
    ::Il2CppString* $path$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // private System.UInt32 <i>5__3
    // Offset: 0x48
    uint $i$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__2
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__2;
    // Creating value type constructor for type: $GetAssetBundleFileForPreviewLevelAsync$d__4
    $GetAssetBundleFileForPreviewLevelAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::TestBeatmapDataAssetFileModel* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $path$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, uint $i$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previewBeatmapLevel{previewBeatmapLevel_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $path$5__2{$path$5__2_}, $$u__1{$$u__1_}, $i$5__3{$i$5__3_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2BF44
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2BF4C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4, "", "TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
#pragma pack(pop)
