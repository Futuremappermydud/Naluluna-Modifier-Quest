// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ScheduledTask because it is already included!
  // Skipping declaration: <LoadAsync>d__7 because it is already included!
  // Skipping declaration: <LoadAllAsync>d__8 because it is already included!
  // Forward declaring type: HMCache`2<K, V>
  template<typename K, typename V>
  class HMCache_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AsyncCachedLoader`2
  template<typename TKey, typename TValue>
  class AsyncCachedLoader_2 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AsyncCachedLoader_2::ScheduledTask<TKey, TValue>
    struct ScheduledTask;
    // Nested type: GlobalNamespace::AsyncCachedLoader_2::$LoadAsync$d__7<TKey, TValue>
    struct $LoadAsync$d__7;
    // Nested type: GlobalNamespace::AsyncCachedLoader_2::$LoadAllAsync$d__8<TKey, TValue>
    struct $LoadAllAsync$d__8;
    // Autogenerated type: AsyncCachedLoader`2/ScheduledTask
    struct ScheduledTask : public System::ValueType, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = AsyncCachedLoader_2<TKey, TValue>*;
      // public TKey keyId
      // Offset: 0x0
      TKey keyId;
      // public System.Threading.Tasks.TaskCompletionSource`1<TValue> taskCompletionSource
      // Offset: 0x0
      System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource;
      // public System.Threading.CancellationToken cancellationToken
      // Offset: 0x0
      System::Threading::CancellationToken cancellationToken;
      // Creating value type constructor for type: ScheduledTask
      ScheduledTask(TKey keyId_ = {}, System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource_ = {}, System::Threading::CancellationToken cancellationToken_ = {}) : keyId{keyId_}, taskCompletionSource{taskCompletionSource_}, cancellationToken{cancellationToken_} {}
      // public System.Void .ctor(TKey keyId, System.Threading.Tasks.TaskCompletionSource`1<TValue> taskCompletionSource, System.Threading.CancellationToken cancellationToken)
      // Offset: 0xFFFFFFFF
      static typename AsyncCachedLoader_2<TKey, TValue>::ScheduledTask* New_ctor(TKey keyId, System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource, System::Threading::CancellationToken cancellationToken) {
        return (typename AsyncCachedLoader_2<TKey, TValue>::ScheduledTask*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename AsyncCachedLoader_2<TKey, TValue>::ScheduledTask>::get(), keyId, taskCompletionSource, cancellationToken)));
      }
    }; // AsyncCachedLoader`2/ScheduledTask
    // Autogenerated type: AsyncCachedLoader`2/<LoadAsync>d__7
    struct $LoadAsync$d__7 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = AsyncCachedLoader_2<TKey, TValue>*;
      // public System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TValue> <>t__builder
      // Offset: 0x0
      System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> $$t__builder;
      // public TKey keyId
      // Offset: 0x0
      TKey keyId;
      // public System.Threading.CancellationToken cancellationToken
      // Offset: 0x0
      System::Threading::CancellationToken cancellationToken;
      // public AsyncCachedLoader`2<TKey,TValue> <>4__this
      // Offset: 0x0
      GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* $$4__this;
      // private System.Runtime.CompilerServices.TaskAwaiter`1<TValue> <>u__1
      // Offset: 0x0
      System::Runtime::CompilerServices::TaskAwaiter_1<TValue> $$u__1;
      // Creating value type constructor for type: $LoadAsync$d__7
      $LoadAsync$d__7(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> $$t__builder_ = {}, TKey keyId_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<TValue> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, keyId{keyId_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
      // private System.Void MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
      // Base method: System.Void IAsyncStateMachine::MoveNext()
      void MoveNext() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "MoveNext"));
      }
      // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
      // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
      void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
      }
    }; // AsyncCachedLoader`2/<LoadAsync>d__7
    // Autogenerated type: AsyncCachedLoader`2/<LoadAllAsync>d__8
    struct $LoadAllAsync$d__8 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = AsyncCachedLoader_2<TKey, TValue>*;
      // public System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
      // Offset: 0x0
      System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
      // public AsyncCachedLoader`2<TKey,TValue> <>4__this
      // Offset: 0x0
      GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* $$4__this;
      // private AsyncCachedLoader`2/ScheduledTask<TKey,TValue> <scheduledTask>5__2
      // Offset: 0x0
      typename GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::ScheduledTask $scheduledTask$5__2;
      // private System.Runtime.CompilerServices.TaskAwaiter`1<TValue> <>u__1
      // Offset: 0x0
      System::Runtime::CompilerServices::TaskAwaiter_1<TValue> $$u__1;
      // Creating value type constructor for type: $LoadAllAsync$d__8
      $LoadAllAsync$d__8(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* $$4__this_ = {}, typename GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::ScheduledTask $scheduledTask$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<TValue> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $scheduledTask$5__2{$scheduledTask$5__2_}, $$u__1{$$u__1_} {}
      // private System.Void MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
      // Base method: System.Void IAsyncStateMachine::MoveNext()
      void MoveNext() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "MoveNext"));
      }
      // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
      // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
      void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
      }
    }; // AsyncCachedLoader`2/<LoadAllAsync>d__8
    // private System.Collections.Generic.List`1<AsyncCachedLoader`2/ScheduledTask<TKey,TValue>> _scheduledTaskList
    // Offset: 0x0
    System::Collections::Generic::List_1<typename GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::ScheduledTask>* scheduledTaskList;
    // private HMCache`2<TKey,TValue> _cache
    // Offset: 0x0
    GlobalNamespace::HMCache_2<TKey, TValue>* cache;
    // private System.Func`3<TKey,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TValue>> _resultValueFunc
    // Offset: 0x0
    System::Func_3<TKey, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc;
    // private System.Boolean _isLoading
    // Offset: 0x0
    bool isLoading;
    // public System.Void ClearCache()
    // Offset: 0xFFFFFFFF
    void ClearCache() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearCache"));
    }
    // public System.Void .ctor(System.Int32 maxNumberCachedElements, System.Func`3<TKey,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TValue>> resultValueFunc)
    // Offset: 0xFFFFFFFF
    static AsyncCachedLoader_2<TKey, TValue>* New_ctor(int maxNumberCachedElements, System::Func_3<TKey, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc) {
      return (AsyncCachedLoader_2<TKey, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncCachedLoader_2<TKey, TValue>*>::get(), maxNumberCachedElements, resultValueFunc)));
    }
    // public System.Threading.Tasks.Task`1<TValue> LoadAsync(TKey keyId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TValue>* LoadAsync(TKey keyId, System::Threading::CancellationToken cancellationToken) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TValue>*>(this, "LoadAsync", keyId, cancellationToken));
    }
    // private System.Void LoadAllAsync()
    // Offset: 0xFFFFFFFF
    void LoadAllAsync() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "LoadAllAsync"));
    }
  }; // AsyncCachedLoader`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AsyncCachedLoader_2, "", "AsyncCachedLoader`2");
#pragma pack(pop)
