// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
  class IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A605C
    static IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.HmdMatrix34_t Invoke()
    // Offset: 0x16A6070
    OVR::OpenVR::HmdMatrix34_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A62B0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x16A62DC
    OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
#pragma pack(pop)
