// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
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
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Autogenerated type: NUnit.Framework.Internal.Execution.CountdownEvent
  class CountdownEvent : public ::Il2CppObject {
    public:
    // private System.Int32 _initialCount
    // Offset: 0x10
    int initialCount;
    // private System.Int32 _remainingCount
    // Offset: 0x14
    int remainingCount;
    // private System.Object _lock
    // Offset: 0x18
    ::Il2CppObject* lock;
    // private System.Threading.ManualResetEvent _event
    // Offset: 0x20
    System::Threading::ManualResetEvent* event;
    // public System.Void .ctor(System.Int32 initialCount)
    // Offset: 0x1075568
    static CountdownEvent* New_ctor(int initialCount);
    // public System.Int32 get_CurrentCount()
    // Offset: 0x1075620
    int get_CurrentCount();
    // public System.Void Signal()
    // Offset: 0x1075628
    void Signal();
  }; // NUnit.Framework.Internal.Execution.CountdownEvent
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::CountdownEvent*, "NUnit.Framework.Internal.Execution", "CountdownEvent");
#pragma pack(pop)
