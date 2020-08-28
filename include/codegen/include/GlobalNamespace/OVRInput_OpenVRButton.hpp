// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OpenVRButton
  struct OVRInput::OpenVRButton : public System::Enum {
    public:
    // public System.UInt64 value__
    // Offset: 0x0
    uint64_t value;
    // static field const value: static public OVRInput/OpenVRButton None
    static constexpr const uint64_t None = 0u;
    // Get static field: static public OVRInput/OpenVRButton None
    static GlobalNamespace::OVRInput::OpenVRButton _get_None();
    // Set static field: static public OVRInput/OpenVRButton None
    static void _set_None(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Two
    static constexpr const uint64_t Two = 2u;
    // Get static field: static public OVRInput/OpenVRButton Two
    static GlobalNamespace::OVRInput::OpenVRButton _get_Two();
    // Set static field: static public OVRInput/OpenVRButton Two
    static void _set_Two(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Thumbstick
    static constexpr const uint64_t Thumbstick = 4294967296u;
    // Get static field: static public OVRInput/OpenVRButton Thumbstick
    static GlobalNamespace::OVRInput::OpenVRButton _get_Thumbstick();
    // Set static field: static public OVRInput/OpenVRButton Thumbstick
    static void _set_Thumbstick(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Grip
    static constexpr const uint64_t Grip = 4u;
    // Get static field: static public OVRInput/OpenVRButton Grip
    static GlobalNamespace::OVRInput::OpenVRButton _get_Grip();
    // Set static field: static public OVRInput/OpenVRButton Grip
    static void _set_Grip(GlobalNamespace::OVRInput::OpenVRButton value);
    // Creating value type constructor for type: OpenVRButton
    OpenVRButton(uint64_t value_ = {}) : value{value_} {}
  }; // OVRInput/OpenVRButton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OpenVRButton, "", "OVRInput/OpenVRButton");
#pragma pack(pop)
