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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: Texture_t
  struct Texture_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: EVRSubmitFlags
  struct EVRSubmitFlags;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_Submit
  class IVRCompositor::_Submit : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14FE968
    static IVRCompositor::_Submit* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRCompositorError Invoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.Texture_t pTexture, OVR.OpenVR.VRTextureBounds_t pBounds, OVR.OpenVR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x14FE97C
    OVR::OpenVR::EVRCompositorError Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.Texture_t pTexture, OVR.OpenVR.VRTextureBounds_t pBounds, OVR.OpenVR.EVRSubmitFlags nSubmitFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14FEC44
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(OVR.OpenVR.Texture_t pTexture, OVR.OpenVR.VRTextureBounds_t pBounds, System.IAsyncResult result)
    // Offset: 0x14FED34
    OVR::OpenVR::EVRCompositorError EndInvoke(OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_Submit
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_Submit*, "OVR.OpenVR", "IVRCompositor/_Submit");
#pragma pack(pop)
