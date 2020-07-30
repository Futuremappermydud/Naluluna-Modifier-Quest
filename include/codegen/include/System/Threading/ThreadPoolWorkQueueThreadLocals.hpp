// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolWorkQueueThreadLocals
  class ThreadPoolWorkQueueThreadLocals : public ::Il2CppObject {
    public:
    // Get static field: static public System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals
    static System::Threading::ThreadPoolWorkQueueThreadLocals* _get_threadLocals();
    // Set static field: static public System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals
    static void _set_threadLocals(System::Threading::ThreadPoolWorkQueueThreadLocals* value);
    // public readonly System.Threading.ThreadPoolWorkQueue workQueue
    // Offset: 0x10
    System::Threading::ThreadPoolWorkQueue* workQueue;
    // public readonly System.Threading.ThreadPoolWorkQueue/WorkStealingQueue workStealingQueue
    // Offset: 0x18
    System::Threading::ThreadPoolWorkQueue::WorkStealingQueue* workStealingQueue;
    // public readonly System.Random random
    // Offset: 0x20
    System::Random* random;
    // public System.Void .ctor(System.Threading.ThreadPoolWorkQueue tpq)
    // Offset: 0xCD4BD8
    static ThreadPoolWorkQueueThreadLocals* New_ctor(System::Threading::ThreadPoolWorkQueue* tpq);
    // private System.Void CleanUp()
    // Offset: 0xCD674C
    void CleanUp();
    // protected override System.Void Finalize()
    // Offset: 0xCD6824
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Threading.ThreadPoolWorkQueueThreadLocals
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueueThreadLocals*, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
#pragma pack(pop)
