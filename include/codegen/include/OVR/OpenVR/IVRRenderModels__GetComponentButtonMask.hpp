// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask
  class IVRRenderModels::_GetComponentButtonMask : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16951DC
    static IVRRenderModels::_GetComponentButtonMask* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt64 Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x16951F0
    uint64_t Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16955FC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x169562C
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask*, "OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask");
#pragma pack(pop)
