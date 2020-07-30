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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_PollNextEvent
  class IVRSystem::_PollNextEvent : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A903C
    static IVRSystem::_PollNextEvent* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x16A9050
    bool Invoke(OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A92C8
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x16A937C
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_PollNextEvent
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PollNextEvent*, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
#pragma pack(pop)
