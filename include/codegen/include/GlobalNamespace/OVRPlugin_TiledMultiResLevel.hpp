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
  // Autogenerated type: OVRPlugin/TiledMultiResLevel
  struct OVRPlugin::TiledMultiResLevel : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/TiledMultiResLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRPlugin/TiledMultiResLevel Off
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_Off();
    // Set static field: static public OVRPlugin/TiledMultiResLevel Off
    static void _set_Off(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSLow
    static constexpr const int LMSLow = 1;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSLow
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSLow();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSLow
    static void _set_LMSLow(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static constexpr const int LMSMedium = 2;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSMedium();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSMedium
    static void _set_LMSMedium(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static constexpr const int LMSHigh = 3;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSHigh();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSHigh
    static void _set_LMSHigh(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static constexpr const int LMSHighTop = 4;
    // Get static field: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_LMSHighTop();
    // Set static field: static public OVRPlugin/TiledMultiResLevel LMSHighTop
    static void _set_LMSHighTop(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // static field const value: static public OVRPlugin/TiledMultiResLevel EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/TiledMultiResLevel EnumSize
    static GlobalNamespace::OVRPlugin::TiledMultiResLevel _get_EnumSize();
    // Set static field: static public OVRPlugin/TiledMultiResLevel EnumSize
    static void _set_EnumSize(GlobalNamespace::OVRPlugin::TiledMultiResLevel value);
    // Creating value type constructor for type: TiledMultiResLevel
    TiledMultiResLevel(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/TiledMultiResLevel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::TiledMultiResLevel, "", "OVRPlugin/TiledMultiResLevel");
#pragma pack(pop)
