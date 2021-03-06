// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.CVROverlay
#include "OVR/OpenVR/CVROverlay.hpp"
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
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVROverlay/_PollNextOverlayEventPacked
  class CVROverlay::_PollNextOverlayEventPacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEB9758
    static CVROverlay::_PollNextOverlayEventPacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0xEB9084
    bool Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEB976C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0xEB9840
    bool EndInvoke(OVR::OpenVR::VREvent_t_Packed& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVROverlay/_PollNextOverlayEventPacked
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked*, "OVR.OpenVR", "CVROverlay/_PollNextOverlayEventPacked");
#pragma pack(pop)
