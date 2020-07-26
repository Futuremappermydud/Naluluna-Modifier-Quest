// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.IO.FileSystemWatcher
#include "System/IO/FileSystemWatcher.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileSystemWatcher/EventType
  struct FileSystemWatcher::EventType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static constexpr const int FileSystemEvent = 0;
    // Get static field: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static System::IO::FileSystemWatcher::EventType _get_FileSystemEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static void _set_FileSystemEvent(System::IO::FileSystemWatcher::EventType value);
    // static field const value: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static constexpr const int ErrorEvent = 1;
    // Get static field: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static System::IO::FileSystemWatcher::EventType _get_ErrorEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static void _set_ErrorEvent(System::IO::FileSystemWatcher::EventType value);
    // static field const value: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static constexpr const int RenameEvent = 2;
    // Get static field: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static System::IO::FileSystemWatcher::EventType _get_RenameEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static void _set_RenameEvent(System::IO::FileSystemWatcher::EventType value);
    // Creating value type constructor for type: EventType
    EventType(int value_ = {}) : value{value_} {}
  }; // System.IO.FileSystemWatcher/EventType
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemWatcher::EventType, "System.IO", "FileSystemWatcher/EventType");
#pragma pack(pop)
