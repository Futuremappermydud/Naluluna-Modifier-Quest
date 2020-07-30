// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: RegisteredWaitHandle
  class RegisteredWaitHandle;
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: WaitOrTimerCallback
  class WaitOrTimerCallback;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPool
  class ThreadPool : public ::Il2CppObject {
    public:
    // static private System.Threading.RegisteredWaitHandle RegisterWaitForSingleObject(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callBack, System.Object state, System.UInt32 millisecondsTimeOutInterval, System.Boolean executeOnlyOnce, System.Threading.StackCrawlMark stackMark, System.Boolean compressStack)
    // Offset: 0xCD41EC
    static System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callBack, ::Il2CppObject* state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, System::Threading::StackCrawlMark& stackMark, bool compressStack);
    // static public System.Threading.RegisteredWaitHandle RegisterWaitForSingleObject(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callBack, System.Object state, System.TimeSpan timeout, System.Boolean executeOnlyOnce)
    // Offset: 0xCD44E0
    static System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callBack, ::Il2CppObject* state, System::TimeSpan timeout, bool executeOnlyOnce);
    // static public System.Boolean QueueUserWorkItem(System.Threading.WaitCallback callBack, System.Object state)
    // Offset: 0xCC3CA8
    static bool QueueUserWorkItem(System::Threading::WaitCallback* callBack, ::Il2CppObject* state);
    // static public System.Boolean UnsafeQueueUserWorkItem(System.Threading.WaitCallback callBack, System.Object state)
    // Offset: 0xCD44B0
    static bool UnsafeQueueUserWorkItem(System::Threading::WaitCallback* callBack, ::Il2CppObject* state);
    // static private System.Boolean QueueUserWorkItemHelper(System.Threading.WaitCallback callBack, System.Object state, System.Threading.StackCrawlMark stackMark, System.Boolean compressStack)
    // Offset: 0xCD4634
    static bool QueueUserWorkItemHelper(System::Threading::WaitCallback* callBack, ::Il2CppObject* state, System::Threading::StackCrawlMark& stackMark, bool compressStack);
    // static System.Void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, System.Boolean forceGlobal)
    // Offset: 0xCC56EC
    static void UnsafeQueueCustomWorkItem(System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal);
    // static System.Boolean TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
    // Offset: 0xCD2B1C
    static bool TryPopCustomWorkItem(System::Threading::IThreadPoolWorkItem* workItem);
    // static System.Boolean RequestWorkerThread()
    // Offset: 0xCD4990
    static bool RequestWorkerThread();
    // static private System.Void EnsureVMInitialized()
    // Offset: 0xCD4740
    static void EnsureVMInitialized();
    // static System.Boolean NotifyWorkItemComplete()
    // Offset: 0xCD4998
    static bool NotifyWorkItemComplete();
    // static System.Void ReportThreadStatus(System.Boolean isWorking)
    // Offset: 0xCD499C
    static void ReportThreadStatus(bool isWorking);
    // static System.Void NotifyWorkItemProgress()
    // Offset: 0xCD2BE8
    static void NotifyWorkItemProgress();
    // static System.Void NotifyWorkItemProgressNative()
    // Offset: 0xCD49A4
    static void NotifyWorkItemProgressNative();
    // static System.Boolean IsThreadPoolHosted()
    // Offset: 0xCD49A8
    static bool IsThreadPoolHosted();
    // static private System.Void InitializeVMTp(System.Boolean enableWorkerTracking)
    // Offset: 0xCD4994
    static void InitializeVMTp(bool& enableWorkerTracking);
  }; // System.Threading.ThreadPool
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPool*, "System.Threading", "ThreadPool");
#pragma pack(pop)
