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
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_HasCamera
  class IVRTrackedCamera::_HasCamera : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190EF58
    static IVRTrackedCamera::_HasCamera* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, System.Boolean pHasCamera)
    // Offset: 0x190EF6C
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, bool& pHasCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, System.Boolean pHasCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x190F1FC
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, bool& pHasCamera, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.Boolean pHasCamera, System.IAsyncResult result)
    // Offset: 0x190F2B0
    Valve::VR::EVRTrackedCameraError EndInvoke(bool& pHasCamera, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_HasCamera
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_HasCamera*, "Valve.VR", "IVRTrackedCamera/_HasCamera");
#pragma pack(pop)
