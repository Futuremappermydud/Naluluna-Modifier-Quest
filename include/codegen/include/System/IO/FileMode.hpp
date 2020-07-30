// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileMode
  struct FileMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.IO.FileMode CreateNew
    static constexpr const int CreateNew = 1;
    // Get static field: static public System.IO.FileMode CreateNew
    static System::IO::FileMode _get_CreateNew();
    // Set static field: static public System.IO.FileMode CreateNew
    static void _set_CreateNew(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Create
    static constexpr const int Create = 2;
    // Get static field: static public System.IO.FileMode Create
    static System::IO::FileMode _get_Create();
    // Set static field: static public System.IO.FileMode Create
    static void _set_Create(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Open
    static constexpr const int Open = 3;
    // Get static field: static public System.IO.FileMode Open
    static System::IO::FileMode _get_Open();
    // Set static field: static public System.IO.FileMode Open
    static void _set_Open(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode OpenOrCreate
    static constexpr const int OpenOrCreate = 4;
    // Get static field: static public System.IO.FileMode OpenOrCreate
    static System::IO::FileMode _get_OpenOrCreate();
    // Set static field: static public System.IO.FileMode OpenOrCreate
    static void _set_OpenOrCreate(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Truncate
    static constexpr const int Truncate = 5;
    // Get static field: static public System.IO.FileMode Truncate
    static System::IO::FileMode _get_Truncate();
    // Set static field: static public System.IO.FileMode Truncate
    static void _set_Truncate(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Append
    static constexpr const int Append = 6;
    // Get static field: static public System.IO.FileMode Append
    static System::IO::FileMode _get_Append();
    // Set static field: static public System.IO.FileMode Append
    static void _set_Append(System::IO::FileMode value);
    // Creating value type constructor for type: FileMode
    FileMode(int value_ = {}) : value{value_} {}
  }; // System.IO.FileMode
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileMode, "System.IO", "FileMode");
#pragma pack(pop)
