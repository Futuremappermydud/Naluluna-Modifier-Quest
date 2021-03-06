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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService
  class IVRTrackedCamera::_AcquireVideoStreamingService : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C2D00
    static IVRTrackedCamera::_AcquireVideoStreamingService* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, System.UInt64 pHandle)
    // Offset: 0x16C2D14
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C2FA4
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x16C3058
    Valve::VR::EVRTrackedCameraError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService*, "Valve.VR", "IVRTrackedCamera/_AcquireVideoStreamingService");
#pragma pack(pop)
