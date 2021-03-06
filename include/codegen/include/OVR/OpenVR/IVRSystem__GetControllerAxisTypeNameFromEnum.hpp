// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:01 PM
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
  // Forward declaring type: EVRControllerAxisType
  struct EVRControllerAxisType;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
  class IVRSystem::_GetControllerAxisTypeNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A2394
    static IVRSystem::_GetControllerAxisTypeNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(OVR.OpenVR.EVRControllerAxisType eAxisType)
    // Offset: 0x16A23A8
    System::IntPtr Invoke(OVR::OpenVR::EVRControllerAxisType eAxisType);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRControllerAxisType eAxisType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A261C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRControllerAxisType eAxisType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x16A26A8
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
#pragma pack(pop)
