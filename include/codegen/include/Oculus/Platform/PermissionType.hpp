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
  // Autogenerated type: Oculus.Platform.PermissionType
  struct PermissionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.PermissionType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PermissionType Unknown
    static Oculus::Platform::PermissionType _get_Unknown();
    // Set static field: static public Oculus.Platform.PermissionType Unknown
    static void _set_Unknown(Oculus::Platform::PermissionType value);
    // static field const value: static public Oculus.Platform.PermissionType Microphone
    static constexpr const int Microphone = 1;
    // Get static field: static public Oculus.Platform.PermissionType Microphone
    static Oculus::Platform::PermissionType _get_Microphone();
    // Set static field: static public Oculus.Platform.PermissionType Microphone
    static void _set_Microphone(Oculus::Platform::PermissionType value);
    // static field const value: static public Oculus.Platform.PermissionType WriteExternalStorage
    static constexpr const int WriteExternalStorage = 2;
    // Get static field: static public Oculus.Platform.PermissionType WriteExternalStorage
    static Oculus::Platform::PermissionType _get_WriteExternalStorage();
    // Set static field: static public Oculus.Platform.PermissionType WriteExternalStorage
    static void _set_WriteExternalStorage(Oculus::Platform::PermissionType value);
    // Creating value type constructor for type: PermissionType
    PermissionType(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.PermissionType
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PermissionType, "Oculus.Platform", "PermissionType");
#pragma pack(pop)
