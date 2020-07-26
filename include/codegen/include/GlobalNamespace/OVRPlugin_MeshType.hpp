// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:50 PM
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
  // Autogenerated type: OVRPlugin/MeshType
  struct OVRPlugin::MeshType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/MeshType None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/MeshType None
    static GlobalNamespace::OVRPlugin::MeshType _get_None();
    // Set static field: static public OVRPlugin/MeshType None
    static void _set_None(GlobalNamespace::OVRPlugin::MeshType value);
    // static field const value: static public OVRPlugin/MeshType HandLeft
    static constexpr const int HandLeft = 0;
    // Get static field: static public OVRPlugin/MeshType HandLeft
    static GlobalNamespace::OVRPlugin::MeshType _get_HandLeft();
    // Set static field: static public OVRPlugin/MeshType HandLeft
    static void _set_HandLeft(GlobalNamespace::OVRPlugin::MeshType value);
    // static field const value: static public OVRPlugin/MeshType HandRight
    static constexpr const int HandRight = 1;
    // Get static field: static public OVRPlugin/MeshType HandRight
    static GlobalNamespace::OVRPlugin::MeshType _get_HandRight();
    // Set static field: static public OVRPlugin/MeshType HandRight
    static void _set_HandRight(GlobalNamespace::OVRPlugin::MeshType value);
    // Creating value type constructor for type: MeshType
    MeshType(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/MeshType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::MeshType, "", "OVRPlugin/MeshType");
#pragma pack(pop)
