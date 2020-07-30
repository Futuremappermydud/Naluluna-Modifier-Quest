// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:51 PM
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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.DllImportSearchPath
  struct DllImportSearchPath : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath UseDllDirectoryForDependencies
    static constexpr const int UseDllDirectoryForDependencies = 256;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath UseDllDirectoryForDependencies
    static System::Runtime::InteropServices::DllImportSearchPath _get_UseDllDirectoryForDependencies();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath UseDllDirectoryForDependencies
    static void _set_UseDllDirectoryForDependencies(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath ApplicationDirectory
    static constexpr const int ApplicationDirectory = 512;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath ApplicationDirectory
    static System::Runtime::InteropServices::DllImportSearchPath _get_ApplicationDirectory();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath ApplicationDirectory
    static void _set_ApplicationDirectory(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath UserDirectories
    static constexpr const int UserDirectories = 1024;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath UserDirectories
    static System::Runtime::InteropServices::DllImportSearchPath _get_UserDirectories();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath UserDirectories
    static void _set_UserDirectories(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath System32
    static constexpr const int System32 = 2048;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath System32
    static System::Runtime::InteropServices::DllImportSearchPath _get_System32();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath System32
    static void _set_System32(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath SafeDirectories
    static constexpr const int SafeDirectories = 4096;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath SafeDirectories
    static System::Runtime::InteropServices::DllImportSearchPath _get_SafeDirectories();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath SafeDirectories
    static void _set_SafeDirectories(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath AssemblyDirectory
    static constexpr const int AssemblyDirectory = 2;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath AssemblyDirectory
    static System::Runtime::InteropServices::DllImportSearchPath _get_AssemblyDirectory();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath AssemblyDirectory
    static void _set_AssemblyDirectory(System::Runtime::InteropServices::DllImportSearchPath value);
    // static field const value: static public System.Runtime.InteropServices.DllImportSearchPath LegacyBehavior
    static constexpr const int LegacyBehavior = 0;
    // Get static field: static public System.Runtime.InteropServices.DllImportSearchPath LegacyBehavior
    static System::Runtime::InteropServices::DllImportSearchPath _get_LegacyBehavior();
    // Set static field: static public System.Runtime.InteropServices.DllImportSearchPath LegacyBehavior
    static void _set_LegacyBehavior(System::Runtime::InteropServices::DllImportSearchPath value);
    // Creating value type constructor for type: DllImportSearchPath
    DllImportSearchPath(int value_ = {}) : value{value_} {}
  }; // System.Runtime.InteropServices.DllImportSearchPath
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DllImportSearchPath, "System.Runtime.InteropServices", "DllImportSearchPath");
#pragma pack(pop)
