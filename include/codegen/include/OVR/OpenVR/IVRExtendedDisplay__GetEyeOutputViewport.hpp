// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
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
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
  class IVRExtendedDisplay::_GetEyeOutputViewport : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150074C
    static IVRExtendedDisplay::_GetEyeOutputViewport* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, System.UInt32 pnX, System.UInt32 pnY, System.UInt32 pnWidth, System.UInt32 pnHeight)
    // Offset: 0x1500760
    void Invoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.UInt32 pnX, System.UInt32 pnY, System.UInt32 pnWidth, System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1500A3C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.UInt32 pnX, System.UInt32 pnY, System.UInt32 pnWidth, System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1500B40
    void EndInvoke(uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*, "OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport");
#pragma pack(pop)
