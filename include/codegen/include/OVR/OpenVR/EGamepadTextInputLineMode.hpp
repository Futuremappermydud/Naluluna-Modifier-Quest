// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EGamepadTextInputLineMode
  struct EGamepadTextInputLineMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static constexpr const int k_EGamepadTextInputLineModeSingleLine = 0;
    // Get static field: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static OVR::OpenVR::EGamepadTextInputLineMode _get_k_EGamepadTextInputLineModeSingleLine();
    // Set static field: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeSingleLine
    static void _set_k_EGamepadTextInputLineModeSingleLine(OVR::OpenVR::EGamepadTextInputLineMode value);
    // static field const value: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static constexpr const int k_EGamepadTextInputLineModeMultipleLines = 1;
    // Get static field: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static OVR::OpenVR::EGamepadTextInputLineMode _get_k_EGamepadTextInputLineModeMultipleLines();
    // Set static field: static public OVR.OpenVR.EGamepadTextInputLineMode k_EGamepadTextInputLineModeMultipleLines
    static void _set_k_EGamepadTextInputLineModeMultipleLines(OVR::OpenVR::EGamepadTextInputLineMode value);
    // Creating value type constructor for type: EGamepadTextInputLineMode
    EGamepadTextInputLineMode(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EGamepadTextInputLineMode
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EGamepadTextInputLineMode, "OVR.OpenVR", "EGamepadTextInputLineMode");
#pragma pack(pop)
