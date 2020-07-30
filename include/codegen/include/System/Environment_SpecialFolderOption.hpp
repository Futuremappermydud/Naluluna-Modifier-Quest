// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.Environment
#include "System/Environment.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Environment/SpecialFolderOption
  struct Environment::SpecialFolderOption : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Environment/SpecialFolderOption None
    static constexpr const int None = 0;
    // Get static field: static public System.Environment/SpecialFolderOption None
    static System::Environment::SpecialFolderOption _get_None();
    // Set static field: static public System.Environment/SpecialFolderOption None
    static void _set_None(System::Environment::SpecialFolderOption value);
    // static field const value: static public System.Environment/SpecialFolderOption DoNotVerify
    static constexpr const int DoNotVerify = 16384;
    // Get static field: static public System.Environment/SpecialFolderOption DoNotVerify
    static System::Environment::SpecialFolderOption _get_DoNotVerify();
    // Set static field: static public System.Environment/SpecialFolderOption DoNotVerify
    static void _set_DoNotVerify(System::Environment::SpecialFolderOption value);
    // static field const value: static public System.Environment/SpecialFolderOption Create
    static constexpr const int Create = 32768;
    // Get static field: static public System.Environment/SpecialFolderOption Create
    static System::Environment::SpecialFolderOption _get_Create();
    // Set static field: static public System.Environment/SpecialFolderOption Create
    static void _set_Create(System::Environment::SpecialFolderOption value);
    // Creating value type constructor for type: SpecialFolderOption
    SpecialFolderOption(int value_ = {}) : value{value_} {}
  }; // System.Environment/SpecialFolderOption
}
DEFINE_IL2CPP_ARG_TYPE(System::Environment::SpecialFolderOption, "System", "Environment/SpecialFolderOption");
#pragma pack(pop)
