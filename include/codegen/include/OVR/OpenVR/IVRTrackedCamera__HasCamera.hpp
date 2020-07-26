// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_HasCamera
  class IVRTrackedCamera::_HasCamera : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCAE4AC
    static IVRTrackedCamera::_HasCamera* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, System.Boolean pHasCamera)
    // Offset: 0xCAE4C0
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, bool& pHasCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, System.Boolean pHasCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0xCAE750
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, bool& pHasCamera, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(System.Boolean pHasCamera, System.IAsyncResult result)
    // Offset: 0xCAE804
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(bool& pHasCamera, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_HasCamera
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_HasCamera*, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
#pragma pack(pop)
