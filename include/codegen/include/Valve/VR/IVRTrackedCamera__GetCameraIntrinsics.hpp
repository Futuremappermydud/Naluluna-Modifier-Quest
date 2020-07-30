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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics
  class IVRTrackedCamera::_GetCameraIntrinsics : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C3808
    static IVRTrackedCamera::_GetCameraIntrinsics* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, Valve.VR.HmdVector2_t pFocalLength, Valve.VR.HmdVector2_t pCenter)
    // Offset: 0x16C381C
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, Valve.VR.HmdVector2_t pFocalLength, Valve.VR.HmdVector2_t pCenter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C3AE4
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(Valve.VR.HmdVector2_t pFocalLength, Valve.VR.HmdVector2_t pCenter, System.IAsyncResult result)
    // Offset: 0x16C3BCC
    Valve::VR::EVRTrackedCameraError EndInvoke(Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetCameraIntrinsics*, "Valve.VR", "IVRTrackedCamera/_GetCameraIntrinsics");
#pragma pack(pop)
