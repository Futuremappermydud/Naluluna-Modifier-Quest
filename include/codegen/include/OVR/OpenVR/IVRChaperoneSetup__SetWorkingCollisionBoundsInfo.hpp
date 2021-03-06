// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
  class IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBEC20
    static IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount)
    // Offset: 0xEB58B4
    void Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBEC34
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBECD0
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo");
#pragma pack(pop)
