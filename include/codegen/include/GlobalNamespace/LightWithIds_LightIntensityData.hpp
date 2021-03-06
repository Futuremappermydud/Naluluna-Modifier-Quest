// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightWithIds/LightIntensityData
  class LightWithIds::LightIntensityData : public ::Il2CppObject {
    public:
    // private System.Int32 _lightId
    // Offset: 0x10
    int lightId;
    // private System.Single _intensity
    // Offset: 0x14
    float intensity;
    // public System.Int32 get_lightId()
    // Offset: 0x182CB2C
    int get_lightId();
    // public System.Single get_intensity()
    // Offset: 0x182CB34
    float get_intensity();
    // public System.Void .ctor()
    // Offset: 0x182CB3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LightWithIds::LightIntensityData* New_ctor();
  }; // LightWithIds/LightIntensityData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds::LightIntensityData*, "", "LightWithIds/LightIntensityData");
#pragma pack(pop)
