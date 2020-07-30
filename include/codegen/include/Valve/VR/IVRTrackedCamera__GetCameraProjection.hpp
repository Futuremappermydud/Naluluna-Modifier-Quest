// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetCameraProjection
  class IVRTrackedCamera::_GetCameraProjection : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C3C04
    static IVRTrackedCamera::_GetCameraProjection* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, Valve.VR.HmdMatrix44_t pProjection)
    // Offset: 0x16C3C18
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, Valve.VR.HmdMatrix44_t pProjection, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C3EFC
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(Valve.VR.HmdMatrix44_t pProjection, System.IAsyncResult result)
    // Offset: 0x16C4004
    Valve::VR::EVRTrackedCameraError EndInvoke(Valve::VR::HmdMatrix44_t& pProjection, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetCameraProjection
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetCameraProjection*, "Valve.VR", "IVRTrackedCamera/_GetCameraProjection");
#pragma pack(pop)
