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
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
  class IVROverlay::_SetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x168E844
    static IVROverlay::_SetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius)
    // Offset: 0x168E858
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x168EB10
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x168EBFC
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform");
#pragma pack(pop)
