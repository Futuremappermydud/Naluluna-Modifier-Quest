// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_44_0
  class OVRPlugin::OVRP_1_44_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetHandTrackingEnabled(OVRPlugin/Bool handTrackingEnabled)
    // Offset: 0xF4939C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandTrackingEnabled(GlobalNamespace::OVRPlugin::Bool& handTrackingEnabled);
    // static public OVRPlugin/Result ovrp_GetHandState(OVRPlugin/Step stepId, OVRPlugin/Hand hand, OVRPlugin/HandStateInternal handState)
    // Offset: 0xF4941C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Hand hand, GlobalNamespace::OVRPlugin::HandStateInternal& handState);
    // static public OVRPlugin/Result ovrp_GetSkeleton(OVRPlugin/SkeletonType skeletonType, OVRPlugin/Skeleton skeleton)
    // Offset: 0xF494B4
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSkeleton(GlobalNamespace::OVRPlugin::SkeletonType skeletonType, GlobalNamespace::OVRPlugin::Skeleton& skeleton);
    // static public OVRPlugin/Result ovrp_GetMesh(OVRPlugin/MeshType meshType, System.IntPtr meshPtr)
    // Offset: 0xF495AC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetMesh(GlobalNamespace::OVRPlugin::MeshType meshType, System::IntPtr meshPtr);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraFov(System.Int32 cameraId, OVRPlugin/Bool useOverriddenFov, OVRPlugin/Fovf fov)
    // Offset: 0xF49638
    static GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraFov(int cameraId, GlobalNamespace::OVRPlugin::Bool useOverriddenFov, GlobalNamespace::OVRPlugin::Fovf& fov);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraFov(System.Int32 cameraId, OVRPlugin/Bool useOverriddenFov)
    // Offset: 0xF496D0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraFov(int cameraId, GlobalNamespace::OVRPlugin::Bool& useOverriddenFov);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraStaticPose(System.Int32 cameraId, OVRPlugin/Bool useOverriddenPose, OVRPlugin/Posef pose)
    // Offset: 0xF49760
    static GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraStaticPose(int cameraId, GlobalNamespace::OVRPlugin::Bool useOverriddenPose, GlobalNamespace::OVRPlugin::Posef& pose);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraStaticPose(System.Int32 cameraId, OVRPlugin/Bool useOverriddenStaticPose)
    // Offset: 0xF497F8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraStaticPose(int cameraId, GlobalNamespace::OVRPlugin::Bool& useOverriddenStaticPose);
    // static public OVRPlugin/Result ovrp_ResetDefaultExternalCamera()
    // Offset: 0xF49888
    static GlobalNamespace::OVRPlugin::Result ovrp_ResetDefaultExternalCamera();
    // static public OVRPlugin/Result ovrp_SetDefaultExternalCamera(System.String cameraName, OVRPlugin/CameraIntrinsics cameraIntrinsics, OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0xF498FC
    static GlobalNamespace::OVRPlugin::Result ovrp_SetDefaultExternalCamera(::Il2CppString* cameraName, GlobalNamespace::OVRPlugin::CameraIntrinsics& cameraIntrinsics, GlobalNamespace::OVRPlugin::CameraExtrinsics& cameraExtrinsics);
    // static private System.Void .cctor()
    // Offset: 0xF499AC
    static void _cctor();
  }; // OVRPlugin/OVRP_1_44_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_44_0*, "", "OVRPlugin/OVRP_1_44_0");
#pragma pack(pop)
