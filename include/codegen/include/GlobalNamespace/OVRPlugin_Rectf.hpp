// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Including type: OVRPlugin/Sizef
#include "GlobalNamespace/OVRPlugin_Sizef.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Rectf
  struct OVRPlugin::Rectf : public System::ValueType {
    public:
    // private OVRPlugin/Vector2f Pos
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Vector2f Pos;
    // private OVRPlugin/Sizef Size
    // Offset: 0x8
    GlobalNamespace::OVRPlugin::Sizef Size;
    // Creating value type constructor for type: Rectf
    Rectf(GlobalNamespace::OVRPlugin::Vector2f Pos_ = {}, GlobalNamespace::OVRPlugin::Sizef Size_ = {}) : Pos{Pos_}, Size{Size_} {}
  }; // OVRPlugin/Rectf
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Rectf, "", "OVRPlugin/Rectf");
#pragma pack(pop)
