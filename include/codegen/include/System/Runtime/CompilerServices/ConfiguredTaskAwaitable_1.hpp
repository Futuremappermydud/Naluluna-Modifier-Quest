// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: ConfiguredTaskAwaiter because it is already included!
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
  template<typename TResult>
  struct ConfiguredTaskAwaitable_1 : public System::ValueType {
    public:
    // Nested type: System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter<TResult>
    struct ConfiguredTaskAwaiter;
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter : public System::ValueType, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion {
      public:
      using declaring_type = ConfiguredTaskAwaitable_1<TResult>;
      // private readonly System.Threading.Tasks.Task`1<TResult> m_task
      // Offset: 0x0
      System::Threading::Tasks::Task_1<TResult>* m_task;
      // private readonly System.Boolean m_continueOnCapturedContext
      // Offset: 0x0
      bool m_continueOnCapturedContext;
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      ConfiguredTaskAwaiter(System::Threading::Tasks::Task_1<TResult>* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
      // Offset: 0xA4605C
      static typename ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter* New_ctor(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
        return (typename ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter>::get(), task, continueOnCapturedContext));
      }
      // public System.Boolean get_IsCompleted()
      // Offset: 0xA46090
      bool get_IsCompleted() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsCompleted"));
      }
      // public TResult GetResult()
      // Offset: 0xA460C4
      TResult GetResult() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(*this, "GetResult"));
      }
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0xA460AC
      // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
      // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
      void UnsafeOnCompleted(System::Action* continuation) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "UnsafeOnCompleted", continuation));
      }
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter
    // Offset: 0x0
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Creating value type constructor for type: ConfiguredTaskAwaitable_1
    ConfiguredTaskAwaitable_1(typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
    // Offset: 0xA46714
    static ConfiguredTaskAwaitable_1<TResult>* New_ctor(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
      return (ConfiguredTaskAwaitable_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConfiguredTaskAwaitable_1<TResult>>::get(), task, continueOnCapturedContext));
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> GetAwaiter()
    // Offset: 0xA46720
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter GetAwaiter() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter>(*this, "GetAwaiter"));
    }
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
#pragma pack(pop)
