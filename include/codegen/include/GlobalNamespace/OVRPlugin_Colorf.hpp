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
  // Autogenerated type: OVRPlugin/Colorf
  struct OVRPlugin::Colorf : public System::ValueType {
    public:
    // public System.Single r
    // Offset: 0x0
    float r;
    // public System.Single g
    // Offset: 0x4
    float g;
    // public System.Single b
    // Offset: 0x8
    float b;
    // public System.Single a
    // Offset: 0xC
    float a;
    // Creating value type constructor for type: Colorf
    Colorf(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) : r{r_}, g{g_}, b{b_}, a{a_} {}
  }; // OVRPlugin/Colorf
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Colorf, "", "OVRPlugin/Colorf");
#pragma pack(pop)
