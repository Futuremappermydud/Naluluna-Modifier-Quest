// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UserLoginDtoDataSource
#include "GlobalNamespace/UserLoginDtoDataSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UserLoginDtoDataSource/<GetUserFriendsUserIds>d__6
  struct UserLoginDtoDataSource::$GetUserFriendsUserIds$d__6 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String[]> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Array<::Il2CppString*>*> $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // public UserLoginDtoDataSource <>4__this
    // Offset: 0x28
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::Il2CppString*>*> $$u__1;
    // Creating value type constructor for type: $GetUserFriendsUserIds$d__6
    $GetUserFriendsUserIds$d__6(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Array<::Il2CppString*>*> $$t__builder_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::Il2CppString*>*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2CBD4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2CBDC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<GetUserFriendsUserIds>d__6
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__6, "", "UserLoginDtoDataSource/<GetUserFriendsUserIds>d__6");
#pragma pack(pop)
