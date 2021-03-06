// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetActionSetHandle
  class IVRInput::_GetActionSetHandle : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1502FB0
    static IVRInput::_GetActionSetHandle* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionSetName, System.UInt64 pHandle)
    // Offset: 0x1502FC4
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionSetName, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchActionSetName, System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15033D0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionSetName, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x150346C
    OVR::OpenVR::EVRInputError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetActionSetHandle
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
#pragma pack(pop)
