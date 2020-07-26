// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:34 PM
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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/QueueSegment
  class ThreadPoolWorkQueue::QueueSegment : public ::Il2CppObject {
    public:
    // readonly System.Threading.IThreadPoolWorkItem[] nodes
    // Offset: 0x10
    ::Array<System::Threading::IThreadPoolWorkItem*>* nodes;
    // private System.Int32 indexes
    // Offset: 0x18
    int indexes;
    // public System.Threading.ThreadPoolWorkQueue/QueueSegment Next
    // Offset: 0x20
    System::Threading::ThreadPoolWorkQueue::QueueSegment* Next;
    // private System.Void GetIndexes(System.Int32 upper, System.Int32 lower)
    // Offset: 0xCD6320
    void GetIndexes(int& upper, int& lower);
    // private System.Boolean CompareExchangeIndexes(System.Int32 prevUpper, System.Int32 newUpper, System.Int32 prevLower, System.Int32 newLower)
    // Offset: 0xCD6360
    bool CompareExchangeIndexes(int& prevUpper, int newUpper, int& prevLower, int newLower);
    // public System.Boolean IsUsedUp()
    // Offset: 0xCD5C24
    bool IsUsedUp();
    // public System.Boolean TryEnqueue(System.Threading.IThreadPoolWorkItem node)
    // Offset: 0xCD5290
    bool TryEnqueue(System::Threading::IThreadPoolWorkItem* node);
    // public System.Boolean TryDequeue(System.Threading.IThreadPoolWorkItem node)
    // Offset: 0xCD5B0C
    bool TryDequeue(System::Threading::IThreadPoolWorkItem*& node);
    // public System.Void .ctor()
    // Offset: 0xCD4AD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ThreadPoolWorkQueue::QueueSegment* New_ctor();
  }; // System.Threading.ThreadPoolWorkQueue/QueueSegment
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue::QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
#pragma pack(pop)
