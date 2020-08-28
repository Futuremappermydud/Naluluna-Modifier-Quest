// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Vector4s
  struct OVRPlugin::Vector4s : public System::ValueType {
    public:
    // public System.Int16 x
    // Offset: 0x0
    int16_t x;
    // public System.Int16 y
    // Offset: 0x2
    int16_t y;
    // public System.Int16 z
    // Offset: 0x4
    int16_t z;
    // public System.Int16 w
    // Offset: 0x6
    int16_t w;
    // Get static field: static public readonly OVRPlugin/Vector4s zero
    static GlobalNamespace::OVRPlugin::Vector4s _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4s zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4s value);
    // Creating value type constructor for type: Vector4s
    Vector4s(int16_t x_ = {}, int16_t y_ = {}, int16_t z_ = {}, int16_t w_ = {}) : x{x_}, y{y_}, z{z_}, w{w_} {}
    // static private System.Void .cctor()
    // Offset: 0xF4BA70
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xA3B808
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/Vector4s
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4s, "", "OVRPlugin/Vector4s");
#pragma pack(pop)
