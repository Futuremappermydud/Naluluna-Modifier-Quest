// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.NullFileWatcher
  class NullFileWatcher : public ::Il2CppObject, public System::IO::IFileWatcher {
    public:
    // Get static field: static private System.IO.IFileWatcher instance
    static System::IO::IFileWatcher* _get_instance();
    // Set static field: static private System.IO.IFileWatcher instance
    static void _set_instance(System::IO::IFileWatcher* value);
    // static public System.Boolean GetInstance(System.IO.IFileWatcher watcher)
    // Offset: 0xF50B7C
    static bool GetInstance(System::IO::IFileWatcher*& watcher);
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xF51588
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StartDispatching(System.IO.FileSystemWatcher fsw)
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xF5158C
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StopDispatching(System.IO.FileSystemWatcher fsw)
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void .ctor()
    // Offset: 0xF51590
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NullFileWatcher* New_ctor();
  }; // System.IO.NullFileWatcher
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::NullFileWatcher*, "System.IO", "NullFileWatcher");
#pragma pack(pop)
