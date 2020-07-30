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
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetProjectionMatrix
  class IVRSystem::_GetProjectionMatrix : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A54FC
    static IVRSystem::_GetProjectionMatrix* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.HmdMatrix44_t Invoke(OVR.OpenVR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0x16A5510
    OVR::OpenVR::HmdMatrix44_t Invoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.Single fNearZ, System.Single fFarZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A57F8
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix44_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x16A58B8
    OVR::OpenVR::HmdMatrix44_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetProjectionMatrix
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetProjectionMatrix*, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
#pragma pack(pop)
