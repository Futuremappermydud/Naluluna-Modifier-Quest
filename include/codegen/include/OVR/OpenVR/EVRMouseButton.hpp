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
  // Autogenerated type: OVR.OpenVR.EVRMouseButton
  struct EVRMouseButton : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRMouseButton Left
    static constexpr const int Left = 1;
    // Get static field: static public OVR.OpenVR.EVRMouseButton Left
    static OVR::OpenVR::EVRMouseButton _get_Left();
    // Set static field: static public OVR.OpenVR.EVRMouseButton Left
    static void _set_Left(OVR::OpenVR::EVRMouseButton value);
    // static field const value: static public OVR.OpenVR.EVRMouseButton Right
    static constexpr const int Right = 2;
    // Get static field: static public OVR.OpenVR.EVRMouseButton Right
    static OVR::OpenVR::EVRMouseButton _get_Right();
    // Set static field: static public OVR.OpenVR.EVRMouseButton Right
    static void _set_Right(OVR::OpenVR::EVRMouseButton value);
    // static field const value: static public OVR.OpenVR.EVRMouseButton Middle
    static constexpr const int Middle = 4;
    // Get static field: static public OVR.OpenVR.EVRMouseButton Middle
    static OVR::OpenVR::EVRMouseButton _get_Middle();
    // Set static field: static public OVR.OpenVR.EVRMouseButton Middle
    static void _set_Middle(OVR::OpenVR::EVRMouseButton value);
    // Creating value type constructor for type: EVRMouseButton
    EVRMouseButton(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRMouseButton
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRMouseButton, "OVR.OpenVR", "EVRMouseButton");
#pragma pack(pop)
