// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType
  class IVRApplications::_SetDefaultApplicationForMimeType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBDA8C
    static IVRApplications::_SetDefaultApplicationForMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0xEB01A4
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.String pchMimeType, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBDAA0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBDAD0
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_SetDefaultApplicationForMimeType");
#pragma pack(pop)
