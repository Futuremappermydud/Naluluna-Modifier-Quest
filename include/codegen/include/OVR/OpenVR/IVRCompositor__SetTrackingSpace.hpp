// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_SetTrackingSpace
  class IVRCompositor::_SetTrackingSpace : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14FE174
    static IVRCompositor::_SetTrackingSpace* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin)
    // Offset: 0x14FE188
    void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14FE3F4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14FE480
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_SetTrackingSpace
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_SetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_SetTrackingSpace");
#pragma pack(pop)
