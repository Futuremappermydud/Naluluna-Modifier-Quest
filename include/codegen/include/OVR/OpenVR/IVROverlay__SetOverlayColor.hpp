// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
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
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayColor
  class IVROverlay::_SetOverlayColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x168E474
    static IVROverlay::_SetOverlayColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue)
    // Offset: 0x168E488
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x168E740
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x168E818
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayColor
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayColor*, "OVR.OpenVR", "IVROverlay/_SetOverlayColor");
#pragma pack(pop)
