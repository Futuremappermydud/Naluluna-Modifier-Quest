// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:03 PM
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_ShowDashboard
  class IVROverlay::_ShowDashboard : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1693384
    static IVROverlay::_ShowDashboard* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchOverlayToShow)
    // Offset: 0x1693398
    void Invoke(::Il2CppString* pchOverlayToShow);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayToShow, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1693750
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayToShow, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1693774
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_ShowDashboard
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_ShowDashboard*, "OVR.OpenVR", "IVROverlay/_ShowDashboard");
#pragma pack(pop)
