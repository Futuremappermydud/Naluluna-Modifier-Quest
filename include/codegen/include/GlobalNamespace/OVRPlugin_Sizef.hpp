// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Sizef
  struct OVRPlugin::Sizef : public System::ValueType {
    public:
    // public System.Single w
    // Offset: 0x0
    float w;
    // public System.Single h
    // Offset: 0x4
    float h;
    // Get static field: static public readonly OVRPlugin/Sizef zero
    static GlobalNamespace::OVRPlugin::Sizef _get_zero();
    // Set static field: static public readonly OVRPlugin/Sizef zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Sizef value);
    // Creating value type constructor for type: Sizef
    Sizef(float w_ = {}, float h_ = {}) : w{w_}, h{h_} {}
    // static private System.Void .cctor()
    // Offset: 0xF34388
    static void _cctor();
  }; // OVRPlugin/Sizef
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Sizef, "", "OVRPlugin/Sizef");
#pragma pack(pop)
