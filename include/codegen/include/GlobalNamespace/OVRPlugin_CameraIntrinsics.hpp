// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/CameraIntrinsics
  struct OVRPlugin::CameraIntrinsics : public System::ValueType {
    public:
    // public OVRPlugin/Bool IsValid
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Bool IsValid;
    // public System.Double LastChangedTimeSeconds
    // Offset: 0x8
    double LastChangedTimeSeconds;
    // public OVRPlugin/Fovf FOVPort
    // Offset: 0x10
    GlobalNamespace::OVRPlugin::Fovf FOVPort;
    // public System.Single VirtualNearPlaneDistanceMeters
    // Offset: 0x20
    float VirtualNearPlaneDistanceMeters;
    // public System.Single VirtualFarPlaneDistanceMeters
    // Offset: 0x24
    float VirtualFarPlaneDistanceMeters;
    // public OVRPlugin/Sizei ImageSensorPixelResolution
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution;
    // Creating value type constructor for type: CameraIntrinsics
    CameraIntrinsics(GlobalNamespace::OVRPlugin::Bool IsValid_ = {}, double LastChangedTimeSeconds_ = {}, GlobalNamespace::OVRPlugin::Fovf FOVPort_ = {}, float VirtualNearPlaneDistanceMeters_ = {}, float VirtualFarPlaneDistanceMeters_ = {}, GlobalNamespace::OVRPlugin::Sizei ImageSensorPixelResolution_ = {}) : IsValid{IsValid_}, LastChangedTimeSeconds{LastChangedTimeSeconds_}, FOVPort{FOVPort_}, VirtualNearPlaneDistanceMeters{VirtualNearPlaneDistanceMeters_}, VirtualFarPlaneDistanceMeters{VirtualFarPlaneDistanceMeters_}, ImageSensorPixelResolution{ImageSensorPixelResolution_} {}
  }; // OVRPlugin/CameraIntrinsics
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraIntrinsics, "", "OVRPlugin/CameraIntrinsics");
#pragma pack(pop)
