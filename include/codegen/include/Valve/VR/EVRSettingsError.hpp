// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRSettingsError
  struct EVRSettingsError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRSettingsError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRSettingsError None
    static Valve::VR::EVRSettingsError _get_None();
    // Set static field: static public Valve.VR.EVRSettingsError None
    static void _set_None(Valve::VR::EVRSettingsError value);
    // static field const value: static public Valve.VR.EVRSettingsError IPCFailed
    static constexpr const int IPCFailed = 1;
    // Get static field: static public Valve.VR.EVRSettingsError IPCFailed
    static Valve::VR::EVRSettingsError _get_IPCFailed();
    // Set static field: static public Valve.VR.EVRSettingsError IPCFailed
    static void _set_IPCFailed(Valve::VR::EVRSettingsError value);
    // static field const value: static public Valve.VR.EVRSettingsError WriteFailed
    static constexpr const int WriteFailed = 2;
    // Get static field: static public Valve.VR.EVRSettingsError WriteFailed
    static Valve::VR::EVRSettingsError _get_WriteFailed();
    // Set static field: static public Valve.VR.EVRSettingsError WriteFailed
    static void _set_WriteFailed(Valve::VR::EVRSettingsError value);
    // static field const value: static public Valve.VR.EVRSettingsError ReadFailed
    static constexpr const int ReadFailed = 3;
    // Get static field: static public Valve.VR.EVRSettingsError ReadFailed
    static Valve::VR::EVRSettingsError _get_ReadFailed();
    // Set static field: static public Valve.VR.EVRSettingsError ReadFailed
    static void _set_ReadFailed(Valve::VR::EVRSettingsError value);
    // static field const value: static public Valve.VR.EVRSettingsError JsonParseFailed
    static constexpr const int JsonParseFailed = 4;
    // Get static field: static public Valve.VR.EVRSettingsError JsonParseFailed
    static Valve::VR::EVRSettingsError _get_JsonParseFailed();
    // Set static field: static public Valve.VR.EVRSettingsError JsonParseFailed
    static void _set_JsonParseFailed(Valve::VR::EVRSettingsError value);
    // static field const value: static public Valve.VR.EVRSettingsError UnsetSettingHasNoDefault
    static constexpr const int UnsetSettingHasNoDefault = 5;
    // Get static field: static public Valve.VR.EVRSettingsError UnsetSettingHasNoDefault
    static Valve::VR::EVRSettingsError _get_UnsetSettingHasNoDefault();
    // Set static field: static public Valve.VR.EVRSettingsError UnsetSettingHasNoDefault
    static void _set_UnsetSettingHasNoDefault(Valve::VR::EVRSettingsError value);
    // Creating value type constructor for type: EVRSettingsError
    EVRSettingsError(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRSettingsError
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRSettingsError, "Valve.VR", "EVRSettingsError");
#pragma pack(pop)
