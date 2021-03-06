// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ComponentModel.Component
#include "System/ComponentModel/Component.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: AsyncStreamReader
  class AsyncStreamReader;
  // Forward declaring type: ProcessThreadCollection
  class ProcessThreadCollection;
  // Forward declaring type: ProcessModuleCollection
  class ProcessModuleCollection;
  // Forward declaring type: ProcessInfo
  class ProcessInfo;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: RegisteredWaitHandle
  class RegisteredWaitHandle;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISynchronizeInvoke
  class ISynchronizeInvoke;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.Process
  class Process : public System::ComponentModel::Component {
    public:
    // Nested type: System::Diagnostics::Process::StreamReadMode
    struct StreamReadMode;
    // Nested type: System::Diagnostics::Process::State
    struct State;
    // Autogenerated type: System.Diagnostics.Process/StreamReadMode
    struct StreamReadMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public System.Diagnostics.Process/StreamReadMode undefined
      static constexpr const int undefined = 0;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode undefined
      static System::Diagnostics::Process::StreamReadMode _get_undefined();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode undefined
      static void _set_undefined(System::Diagnostics::Process::StreamReadMode value);
      // static field const value: static public System.Diagnostics.Process/StreamReadMode syncMode
      static constexpr const int syncMode = 1;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode syncMode
      static System::Diagnostics::Process::StreamReadMode _get_syncMode();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode syncMode
      static void _set_syncMode(System::Diagnostics::Process::StreamReadMode value);
      // static field const value: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static constexpr const int asyncMode = 2;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static System::Diagnostics::Process::StreamReadMode _get_asyncMode();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static void _set_asyncMode(System::Diagnostics::Process::StreamReadMode value);
      // Creating value type constructor for type: StreamReadMode
      StreamReadMode(int value_ = {}) : value{value_} {}
    }; // System.Diagnostics.Process/StreamReadMode
    // private System.Boolean haveProcessId
    // Offset: 0x28
    bool haveProcessId;
    // private System.Int32 processId
    // Offset: 0x2C
    int processId;
    // private System.Boolean haveProcessHandle
    // Offset: 0x30
    bool haveProcessHandle;
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle m_processHandle
    // Offset: 0x38
    Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;
    // private System.Boolean isRemoteMachine
    // Offset: 0x40
    bool isRemoteMachine;
    // private System.String machineName
    // Offset: 0x48
    ::Il2CppString* machineName;
    // private System.Int32 m_processAccess
    // Offset: 0x50
    int m_processAccess;
    // private System.Diagnostics.ProcessThreadCollection threads
    // Offset: 0x58
    System::Diagnostics::ProcessThreadCollection* threads;
    // private System.Diagnostics.ProcessModuleCollection modules
    // Offset: 0x60
    System::Diagnostics::ProcessModuleCollection* modules;
    // private System.Boolean haveWorkingSetLimits
    // Offset: 0x68
    bool haveWorkingSetLimits;
    // private System.Boolean havePriorityClass
    // Offset: 0x69
    bool havePriorityClass;
    // private System.Boolean watchForExit
    // Offset: 0x6A
    bool watchForExit;
    // private System.Boolean watchingForExit
    // Offset: 0x6B
    bool watchingForExit;
    // private System.EventHandler onExited
    // Offset: 0x70
    System::EventHandler* onExited;
    // private System.Boolean exited
    // Offset: 0x78
    bool exited;
    // private System.Int32 exitCode
    // Offset: 0x7C
    int exitCode;
    // private System.Boolean signaled
    // Offset: 0x80
    bool signaled;
    // private System.Boolean haveExitTime
    // Offset: 0x81
    bool haveExitTime;
    // private System.Boolean raisedOnExited
    // Offset: 0x82
    bool raisedOnExited;
    // private System.Threading.RegisteredWaitHandle registeredWaitHandle
    // Offset: 0x88
    System::Threading::RegisteredWaitHandle* registeredWaitHandle;
    // private System.Threading.WaitHandle waitHandle
    // Offset: 0x90
    System::Threading::WaitHandle* waitHandle;
    // private System.ComponentModel.ISynchronizeInvoke synchronizingObject
    // Offset: 0x98
    System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
    // private System.IO.StreamReader standardOutput
    // Offset: 0xA0
    System::IO::StreamReader* standardOutput;
    // private System.IO.StreamWriter standardInput
    // Offset: 0xA8
    System::IO::StreamWriter* standardInput;
    // private System.IO.StreamReader standardError
    // Offset: 0xB0
    System::IO::StreamReader* standardError;
    // private System.Boolean disposed
    // Offset: 0xB8
    bool disposed;
    // private System.Diagnostics.Process/StreamReadMode outputStreamReadMode
    // Offset: 0xBC
    System::Diagnostics::Process::StreamReadMode outputStreamReadMode;
    // private System.Diagnostics.Process/StreamReadMode errorStreamReadMode
    // Offset: 0xC0
    System::Diagnostics::Process::StreamReadMode errorStreamReadMode;
    // private System.Diagnostics.Process/StreamReadMode inputStreamReadMode
    // Offset: 0xC4
    System::Diagnostics::Process::StreamReadMode inputStreamReadMode;
    // System.Diagnostics.AsyncStreamReader output
    // Offset: 0xC8
    System::Diagnostics::AsyncStreamReader* output;
    // System.Diagnostics.AsyncStreamReader error
    // Offset: 0xD0
    System::Diagnostics::AsyncStreamReader* error;
    // private System.String process_name
    // Offset: 0xD8
    ::Il2CppString* process_name;
    // private System.Void .ctor(System.String machineName, System.Boolean isRemoteMachine, System.Int32 processId, System.Diagnostics.ProcessInfo processInfo)
    // Offset: 0xF48C90
    static Process* New_ctor(::Il2CppString* machineName, bool isRemoteMachine, int processId, System::Diagnostics::ProcessInfo* processInfo);
    // private System.Boolean get_Associated()
    // Offset: 0xF48D4C
    bool get_Associated();
    // public System.Boolean get_HasExited()
    // Offset: 0xF48D6C
    bool get_HasExited();
    // public System.Int32 get_Id()
    // Offset: 0xF49838
    int get_Id();
    // public System.ComponentModel.ISynchronizeInvoke get_SynchronizingObject()
    // Offset: 0xF49860
    System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject();
    // private System.Void ReleaseProcessHandle(Microsoft.Win32.SafeHandles.SafeProcessHandle handle)
    // Offset: 0xF49754
    void ReleaseProcessHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
    // public System.Void Close()
    // Offset: 0xF49A3C
    void Close();
    // private System.Void EnsureState(System.Diagnostics.Process/State state)
    // Offset: 0xF49078
    void EnsureState(System::Diagnostics::Process::State state);
    // static public System.Diagnostics.Process GetCurrentProcess()
    // Offset: 0xF49D6C
    static System::Diagnostics::Process* GetCurrentProcess();
    // protected System.Void OnExited()
    // Offset: 0xF49DE4
    void OnExited();
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle GetProcessHandle(System.Int32 access, System.Boolean throwIfExited)
    // Offset: 0xF491B8
    Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int access, bool throwIfExited);
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle GetProcessHandle(System.Int32 access)
    // Offset: 0xF4A068
    Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int access);
    // public System.Void Refresh()
    // Offset: 0xF49D28
    void Refresh();
    // public System.Void Kill()
    // Offset: 0xF4A070
    void Kill();
    // private System.Void StopWatchingForExit()
    // Offset: 0xF49C24
    void StopWatchingForExit();
    // static private System.String ProcessName_internal(System.IntPtr handle)
    // Offset: 0xF4A4C0
    static ::Il2CppString* ProcessName_internal(System::IntPtr handle);
    // static private System.String ProcessName_internal(Microsoft.Win32.SafeHandles.SafeProcessHandle handle)
    // Offset: 0xF4A4C4
    static ::Il2CppString* ProcessName_internal(Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
    // public System.String get_ProcessName()
    // Offset: 0xF4A2D4
    ::Il2CppString* get_ProcessName();
    // private System.Void RaiseOnExited()
    // Offset: 0xF4977C
    void RaiseOnExited();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xF499F4
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.String ToString()
    // Offset: 0xF4A178
    // Implemented from: System.ComponentModel.Component
    // Base method: System.String Component::ToString()
    ::Il2CppString* ToString();
  }; // System.Diagnostics.Process
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process*, "System.Diagnostics", "Process");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process::StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
#pragma pack(pop)
