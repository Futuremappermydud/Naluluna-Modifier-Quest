// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MediaAsyncLoader
#include "GlobalNamespace/MediaAsyncLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MediaAsyncLoader/<LoadWebpage>d__0
  struct MediaAsyncLoader::$LoadWebpage$d__0 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public System.String uri
    // Offset: 0x20
    ::Il2CppString* uri;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // private UnityEngine.Networking.UnityWebRequest <www>5__2
    // Offset: 0x30
    UnityEngine::Networking::UnityWebRequest* $www$5__2;
    // private UnityEngine.AsyncOperation <request>5__3
    // Offset: 0x38
    UnityEngine::AsyncOperation* $request$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $LoadWebpage$d__0
    $LoadWebpage$d__0(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, ::Il2CppString* uri_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, UnityEngine::Networking::UnityWebRequest* $www$5__2_ = {}, UnityEngine::AsyncOperation* $request$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, uri{uri_}, cancellationToken{cancellationToken_}, $www$5__2{$www$5__2_}, $request$5__3{$request$5__3_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA5E62C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA5E634
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MediaAsyncLoader/<LoadWebpage>d__0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MediaAsyncLoader::$LoadWebpage$d__0, "", "MediaAsyncLoader/<LoadWebpage>d__0");
#pragma pack(pop)
