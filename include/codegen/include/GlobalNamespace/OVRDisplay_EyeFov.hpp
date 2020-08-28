// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRDisplay
#include "GlobalNamespace/OVRDisplay.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRDisplay/EyeFov
  struct OVRDisplay::EyeFov : public System::ValueType {
    public:
    // public System.Single UpFov
    // Offset: 0x0
    float UpFov;
    // public System.Single DownFov
    // Offset: 0x4
    float DownFov;
    // public System.Single LeftFov
    // Offset: 0x8
    float LeftFov;
    // public System.Single RightFov
    // Offset: 0xC
    float RightFov;
    // Creating value type constructor for type: EyeFov
    EyeFov(float UpFov_ = {}, float DownFov_ = {}, float LeftFov_ = {}, float RightFov_ = {}) : UpFov{UpFov_}, DownFov{DownFov_}, LeftFov{LeftFov_}, RightFov{RightFov_} {}
  }; // OVRDisplay/EyeFov
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay::EyeFov, "", "OVRDisplay/EyeFov");
#pragma pack(pop)
