// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
  class IVROverlay::_GetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150A8A4
    static IVROverlay::_GetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius)
    // Offset: 0x150A8B8
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150AB68
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius, System.IAsyncResult result)
    // Offset: 0x150AC5C
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
#pragma pack(pop)
