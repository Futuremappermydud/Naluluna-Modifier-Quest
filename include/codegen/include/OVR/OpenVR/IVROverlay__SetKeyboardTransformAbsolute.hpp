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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
  class IVROverlay::_SetKeyboardTransformAbsolute : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x168D9F0
    static IVROverlay::_SetKeyboardTransformAbsolute* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform)
    // Offset: 0x168DA04
    void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x168DC8C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.IAsyncResult result)
    // Offset: 0x168DD40
    void EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
#pragma pack(pop)
