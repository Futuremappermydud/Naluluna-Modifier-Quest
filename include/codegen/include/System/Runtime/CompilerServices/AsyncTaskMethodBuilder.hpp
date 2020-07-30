// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
  struct AsyncTaskMethodBuilder : public System::ValueType {
    public:
    // Get static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
    static System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* _get_s_cachedCompleted();
    // Set static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
    static void _set_s_cachedCompleted(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* value);
    // private System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> m_builder
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> m_builder;
    // Creating value type constructor for type: AsyncTaskMethodBuilder
    AsyncTaskMethodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> m_builder_ = {}) : m_builder{m_builder_} {}
    // static public System.Runtime.CompilerServices.AsyncTaskMethodBuilder Create()
    // Offset: 0x114F504
    static System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create();
    // public System.Void Start(TStateMachine stateMachine)
    // Offset: 0xA3D6B0
    template<class TStateMachine>
    void Start(TStateMachine& stateMachine) {
      static_assert(std::is_convertible_v<TStateMachine, System::Runtime::CompilerServices::IAsyncStateMachine*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(*this, "Start", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, stateMachine));
    }
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA3E64C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
    // public System.Void AwaitUnsafeOnCompleted(TAwaiter awaiter, TStateMachine stateMachine)
    // Offset: 0xA3D640
    template<class TAwaiter, class TStateMachine>
    void AwaitUnsafeOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_convertible_v<TAwaiter, System::Runtime::CompilerServices::ICriticalNotifyCompletion*>);
      static_assert(std::is_convertible_v<TStateMachine, System::Runtime::CompilerServices::IAsyncStateMachine*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(*this, "AwaitUnsafeOnCompleted", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, awaiter, stateMachine));
    }
    // public System.Threading.Tasks.Task get_Task()
    // Offset: 0xA3E654
    System::Threading::Tasks::Task* get_Task();
    // public System.Void SetResult()
    // Offset: 0xA3E65C
    void SetResult();
    // public System.Void SetException(System.Exception exception)
    // Offset: 0xA3E664
    void SetException(System::Exception* exception);
    // static private System.Void .cctor()
    // Offset: 0x114F69C
    static void _cctor();
  }; // System.Runtime.CompilerServices.AsyncTaskMethodBuilder
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
#pragma pack(pop)
