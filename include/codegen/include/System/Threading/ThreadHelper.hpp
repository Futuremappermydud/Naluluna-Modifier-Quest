// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:33 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadHelper
  class ThreadHelper : public ::Il2CppObject {
    public:
    // private System.Delegate _start
    // Offset: 0x10
    System::Delegate* start;
    // private System.Object _startArg
    // Offset: 0x18
    ::Il2CppObject* startArg;
    // private System.Threading.ExecutionContext _executionContext
    // Offset: 0x20
    System::Threading::ExecutionContext* executionContext;
    // Get static field: static System.Threading.ContextCallback _ccb
    static System::Threading::ContextCallback* _get__ccb();
    // Set static field: static System.Threading.ContextCallback _ccb
    static void _set__ccb(System::Threading::ContextCallback* value);
    // static private System.Void .cctor()
    // Offset: 0xCD3BF0
    static void _cctor();
    // System.Void .ctor(System.Delegate start)
    // Offset: 0xCD32A0
    static ThreadHelper* New_ctor(System::Delegate* start);
    // System.Void SetExecutionContextHelper(System.Threading.ExecutionContext ec)
    // Offset: 0xCD3C70
    void SetExecutionContextHelper(System::Threading::ExecutionContext* ec);
    // static private System.Void ThreadStart_Context(System.Object state)
    // Offset: 0xCD3C78
    static void ThreadStart_Context(::Il2CppObject* state);
    // System.Void ThreadStart(System.Object obj)
    // Offset: 0xCD3F68
    void ThreadStart(::Il2CppObject* obj);
    // System.Void ThreadStart()
    // Offset: 0xCD4070
    void ThreadStart();
  }; // System.Threading.ThreadHelper
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadHelper*, "System.Threading", "ThreadHelper");
#pragma pack(pop)
