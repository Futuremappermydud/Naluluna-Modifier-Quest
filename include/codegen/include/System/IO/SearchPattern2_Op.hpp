// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.SearchPattern2
#include "System/IO/SearchPattern2.hpp"
// Including type: System.IO.SearchPattern2/OpCode
#include "System/IO/SearchPattern2_OpCode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.SearchPattern2/Op
  class SearchPattern2::Op : public ::Il2CppObject {
    public:
    // public System.IO.SearchPattern2/OpCode Code
    // Offset: 0x10
    System::IO::SearchPattern2::OpCode Code;
    // public System.String Argument
    // Offset: 0x18
    ::Il2CppString* Argument;
    // public System.IO.SearchPattern2/Op Next
    // Offset: 0x20
    System::IO::SearchPattern2::Op* Next;
    // public System.Void .ctor(System.IO.SearchPattern2/OpCode code)
    // Offset: 0xF51D34
    static SearchPattern2::Op* New_ctor(System::IO::SearchPattern2::OpCode code);
  }; // System.IO.SearchPattern2/Op
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchPattern2::Op*, "System.IO", "SearchPattern2/Op");
#pragma pack(pop)
