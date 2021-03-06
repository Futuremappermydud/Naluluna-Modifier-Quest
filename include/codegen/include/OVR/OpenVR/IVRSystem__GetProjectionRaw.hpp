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
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetProjectionRaw
  class IVRSystem::_GetProjectionRaw : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A58FC
    static IVRSystem::_GetProjectionRaw* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, System.Single pfLeft, System.Single pfRight, System.Single pfTop, System.Single pfBottom)
    // Offset: 0x16A5910
    void Invoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.Single pfLeft, System.Single pfRight, System.Single pfTop, System.Single pfBottom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A5BEC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.Single pfLeft, System.Single pfRight, System.Single pfTop, System.Single pfBottom, System.IAsyncResult result)
    // Offset: 0x16A5CF0
    void EndInvoke(float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetProjectionRaw
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
#pragma pack(pop)
