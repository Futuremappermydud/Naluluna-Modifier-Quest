// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Bool
  struct OVRPlugin::Bool : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/Bool False
    static constexpr const int False = 0;
    // Get static field: static public OVRPlugin/Bool False
    static GlobalNamespace::OVRPlugin::Bool _get_False();
    // Set static field: static public OVRPlugin/Bool False
    static void _set_False(GlobalNamespace::OVRPlugin::Bool value);
    // static field const value: static public OVRPlugin/Bool True
    static constexpr const int True = 1;
    // Get static field: static public OVRPlugin/Bool True
    static GlobalNamespace::OVRPlugin::Bool _get_True();
    // Set static field: static public OVRPlugin/Bool True
    static void _set_True(GlobalNamespace::OVRPlugin::Bool value);
    // Creating value type constructor for type: Bool
    Bool(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/Bool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Bool, "", "OVRPlugin/Bool");
#pragma pack(pop)
