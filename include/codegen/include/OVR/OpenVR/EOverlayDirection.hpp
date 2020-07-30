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
  // Autogenerated type: OVR.OpenVR.EOverlayDirection
  struct EOverlayDirection : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EOverlayDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Up
    static OVR::OpenVR::EOverlayDirection _get_Up();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Up
    static void _set_Up(OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Down
    static OVR::OpenVR::EOverlayDirection _get_Down();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Down
    static void _set_Down(OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Left
    static OVR::OpenVR::EOverlayDirection _get_Left();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Left
    static void _set_Left(OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Right
    static OVR::OpenVR::EOverlayDirection _get_Right();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Right
    static void _set_Right(OVR::OpenVR::EOverlayDirection value);
    // static field const value: static public OVR.OpenVR.EOverlayDirection Count
    static constexpr const int Count = 4;
    // Get static field: static public OVR.OpenVR.EOverlayDirection Count
    static OVR::OpenVR::EOverlayDirection _get_Count();
    // Set static field: static public OVR.OpenVR.EOverlayDirection Count
    static void _set_Count(OVR::OpenVR::EOverlayDirection value);
    // Creating value type constructor for type: EOverlayDirection
    EOverlayDirection(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EOverlayDirection
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EOverlayDirection, "OVR.OpenVR", "EOverlayDirection");
#pragma pack(pop)
