// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.Directory
#include "System/IO/Directory.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.Directory/SearchData
  class Directory::SearchData : public ::Il2CppObject {
    public:
    // public readonly System.String fullPath
    // Offset: 0x10
    ::Il2CppString* fullPath;
    // public readonly System.String userPath
    // Offset: 0x18
    ::Il2CppString* userPath;
    // public readonly System.IO.SearchOption searchOption
    // Offset: 0x20
    System::IO::SearchOption searchOption;
    // public System.Void .ctor(System.String fullPath, System.String userPath, System.IO.SearchOption searchOption)
    // Offset: 0x111C10C
    static Directory::SearchData* New_ctor(::Il2CppString* fullPath, ::Il2CppString* userPath, System::IO::SearchOption searchOption);
  }; // System.IO.Directory/SearchData
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Directory::SearchData*, "System.IO", "Directory/SearchData");
#pragma pack(pop)
