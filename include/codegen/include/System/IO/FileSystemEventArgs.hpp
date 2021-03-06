// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IO.WatcherChangeTypes
#include "System/IO/WatcherChangeTypes.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileSystemEventArgs
  class FileSystemEventArgs : public System::EventArgs {
    public:
    // private System.IO.WatcherChangeTypes changeType
    // Offset: 0x10
    System::IO::WatcherChangeTypes changeType;
    // private System.String directory
    // Offset: 0x18
    ::Il2CppString* directory;
    // private System.String name
    // Offset: 0x20
    ::Il2CppString* name;
    // public System.Void .ctor(System.IO.WatcherChangeTypes changeType, System.String directory, System.String name)
    // Offset: 0xF50284
    static FileSystemEventArgs* New_ctor(System::IO::WatcherChangeTypes changeType, ::Il2CppString* directory, ::Il2CppString* name);
  }; // System.IO.FileSystemEventArgs
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEventArgs*, "System.IO", "FileSystemEventArgs");
#pragma pack(pop)
