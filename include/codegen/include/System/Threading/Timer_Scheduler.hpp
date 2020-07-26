// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Timer/Scheduler
  class Timer::Scheduler : public ::Il2CppObject {
    public:
    // Get static field: static private System.Threading.Timer/Scheduler instance
    static System::Threading::Timer::Scheduler* _get_instance();
    // Set static field: static private System.Threading.Timer/Scheduler instance
    static void _set_instance(System::Threading::Timer::Scheduler* value);
    // private System.Collections.SortedList list
    // Offset: 0x10
    System::Collections::SortedList* list;
    // private System.Threading.ManualResetEvent changed
    // Offset: 0x18
    System::Threading::ManualResetEvent* changed;
    // static private System.Void .cctor()
    // Offset: 0xCD70E0
    static void _cctor();
    // static public System.Threading.Timer/Scheduler get_Instance()
    // Offset: 0xCD7284
    static System::Threading::Timer::Scheduler* get_Instance();
    // public System.Void Remove(System.Threading.Timer timer)
    // Offset: 0xCD6DE0
    void Remove(System::Threading::Timer* timer);
    // public System.Void Change(System.Threading.Timer timer, System.Int64 new_next_run)
    // Offset: 0xCD6EA0
    void Change(System::Threading::Timer* timer, int64_t new_next_run);
    // private System.Int32 FindByDueTime(System.Int64 nr)
    // Offset: 0xCD7484
    int FindByDueTime(int64_t nr);
    // private System.Void Add(System.Threading.Timer timer)
    // Offset: 0xCD7354
    void Add(System::Threading::Timer* timer);
    // private System.Int32 InternalRemove(System.Threading.Timer timer)
    // Offset: 0xCD72F4
    int InternalRemove(System::Threading::Timer* timer);
    // static private System.Void TimerCB(System.Object o)
    // Offset: 0xCD75E0
    static void TimerCB(::Il2CppObject* o);
    // private System.Void SchedulerThread()
    // Offset: 0xCD7A0C
    void SchedulerThread();
    // private System.Void ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer> list, System.Int32 initial)
    // Offset: 0xCD7F84
    void ShrinkIfNeeded(System::Collections::Generic::List_1<System::Threading::Timer*>* list, int initial);
    // private System.Void .ctor()
    // Offset: 0xCD7144
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Timer::Scheduler* New_ctor();
  }; // System.Threading.Timer/Scheduler
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer::Scheduler*, "System.Threading", "Timer/Scheduler");
#pragma pack(pop)
