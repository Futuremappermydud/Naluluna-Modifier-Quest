// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SemaphoreSlim
  class SemaphoreSlim : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: System::Threading::SemaphoreSlim::TaskNode
    class TaskNode;
    // Nested type: System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31
    struct $WaitUntilCountOrTimeoutAsync$d__31;
    // private System.Int32 m_currentCount
    // Offset: 0x10
    int m_currentCount;
    // private readonly System.Int32 m_maxCount
    // Offset: 0x14
    int m_maxCount;
    // private System.Int32 m_waitCount
    // Offset: 0x18
    int m_waitCount;
    // private System.Object m_lockObj
    // Offset: 0x20
    ::Il2CppObject* m_lockObj;
    // private System.Threading.ManualResetEvent m_waitHandle
    // Offset: 0x28
    System::Threading::ManualResetEvent* m_waitHandle;
    // private System.Threading.SemaphoreSlim/TaskNode m_asyncHead
    // Offset: 0x30
    System::Threading::SemaphoreSlim::TaskNode* m_asyncHead;
    // private System.Threading.SemaphoreSlim/TaskNode m_asyncTail
    // Offset: 0x38
    System::Threading::SemaphoreSlim::TaskNode* m_asyncTail;
    // Get static field: static private readonly System.Threading.Tasks.Task`1<System.Boolean> s_trueTask
    static System::Threading::Tasks::Task_1<bool>* _get_s_trueTask();
    // Set static field: static private readonly System.Threading.Tasks.Task`1<System.Boolean> s_trueTask
    static void _set_s_trueTask(System::Threading::Tasks::Task_1<bool>* value);
    // static field const value: static private System.Int32 NO_MAXIMUM
    static constexpr const int NO_MAXIMUM = 2147483647;
    // Get static field: static private System.Int32 NO_MAXIMUM
    static int _get_NO_MAXIMUM();
    // Set static field: static private System.Int32 NO_MAXIMUM
    static void _set_NO_MAXIMUM(int value);
    // Get static field: static private System.Action`1<System.Object> s_cancellationTokenCanceledEventHandler
    static System::Action_1<::Il2CppObject*>* _get_s_cancellationTokenCanceledEventHandler();
    // Set static field: static private System.Action`1<System.Object> s_cancellationTokenCanceledEventHandler
    static void _set_s_cancellationTokenCanceledEventHandler(System::Action_1<::Il2CppObject*>* value);
    // public System.Void .ctor(System.Int32 initialCount, System.Int32 maxCount)
    // Offset: 0xCC4448
    static SemaphoreSlim* New_ctor(int initialCount, int maxCount);
    // public System.Void Wait()
    // Offset: 0xCC4610
    void Wait();
    // public System.Boolean Wait(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xCC461C
    bool Wait(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // private System.Boolean WaitUntilCountOrTimeout(System.Int32 millisecondsTimeout, System.UInt32 startTime, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xCC4F9C
    bool WaitUntilCountOrTimeout(int millisecondsTimeout, uint startTime, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task WaitAsync()
    // Offset: 0xCC5074
    System::Threading::Tasks::Task* WaitAsync();
    // public System.Threading.Tasks.Task WaitAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xCC5080
    System::Threading::Tasks::Task* WaitAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> WaitAsync(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xCC4CB8
    System::Threading::Tasks::Task_1<bool>* WaitAsync(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.SemaphoreSlim/TaskNode CreateAndAddAsyncWaiter()
    // Offset: 0xCC508C
    System::Threading::SemaphoreSlim::TaskNode* CreateAndAddAsyncWaiter();
    // private System.Boolean RemoveAsyncWaiter(System.Threading.SemaphoreSlim/TaskNode task)
    // Offset: 0xCC531C
    bool RemoveAsyncWaiter(System::Threading::SemaphoreSlim::TaskNode* task);
    // private System.Threading.Tasks.Task`1<System.Boolean> WaitUntilCountOrTimeoutAsync(System.Threading.SemaphoreSlim/TaskNode asyncWaiter, System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xCC5144
    System::Threading::Tasks::Task_1<bool>* WaitUntilCountOrTimeoutAsync(System::Threading::SemaphoreSlim::TaskNode* asyncWaiter, int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // public System.Int32 Release()
    // Offset: 0xCC5408
    int Release();
    // public System.Int32 Release(System.Int32 releaseCount)
    // Offset: 0xCC5410
    int Release(int releaseCount);
    // static private System.Void QueueWaiterTask(System.Threading.SemaphoreSlim/TaskNode waiterTask)
    // Offset: 0xCC56E4
    static void QueueWaiterTask(System::Threading::SemaphoreSlim::TaskNode* waiterTask);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xCC57F4
    void Dispose(bool disposing);
    // static private System.Void CancellationTokenCanceledEventHandler(System.Object obj)
    // Offset: 0xCC58A0
    static void CancellationTokenCanceledEventHandler(::Il2CppObject* obj);
    // private System.Void CheckDispose()
    // Offset: 0xCC4AEC
    void CheckDispose();
    // static private System.String GetResourceString(System.String str)
    // Offset: 0xCC4608
    static ::Il2CppString* GetResourceString(::Il2CppString* str);
    // static private System.Void .cctor()
    // Offset: 0xCC59A4
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0xCC5778
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Threading.SemaphoreSlim
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim*, "System.Threading", "SemaphoreSlim");
#pragma pack(pop)
