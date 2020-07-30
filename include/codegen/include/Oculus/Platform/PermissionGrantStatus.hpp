// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.PermissionGrantStatus
  struct PermissionGrantStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Unknown
    static Oculus::Platform::PermissionGrantStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Unknown
    static void _set_Unknown(Oculus::Platform::PermissionGrantStatus value);
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Granted
    static constexpr const int Granted = 1;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Granted
    static Oculus::Platform::PermissionGrantStatus _get_Granted();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Granted
    static void _set_Granted(Oculus::Platform::PermissionGrantStatus value);
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Denied
    static constexpr const int Denied = 2;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Denied
    static Oculus::Platform::PermissionGrantStatus _get_Denied();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Denied
    static void _set_Denied(Oculus::Platform::PermissionGrantStatus value);
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Blocked
    static constexpr const int Blocked = 3;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Blocked
    static Oculus::Platform::PermissionGrantStatus _get_Blocked();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Blocked
    static void _set_Blocked(Oculus::Platform::PermissionGrantStatus value);
    // Creating value type constructor for type: PermissionGrantStatus
    PermissionGrantStatus(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.PermissionGrantStatus
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PermissionGrantStatus, "Oculus.Platform", "PermissionGrantStatus");
#pragma pack(pop)
