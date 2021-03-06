// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSystem/_GetControllerStateWithPosePacked
  class CVRSystem::_GetControllerStateWithPosePacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBC0DC
    static CVRSystem::_GetControllerStateWithPosePacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xEBBAB8
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBC0F0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.VRControllerState_t_Packed pControllerState, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0xEBC1F8
    bool EndInvoke(OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRSystem/_GetControllerStateWithPosePacked
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStateWithPosePacked");
#pragma pack(pop)
