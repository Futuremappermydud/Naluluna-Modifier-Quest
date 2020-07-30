// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_Submit
  class IVRCompositor::_Submit : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EE59C
    static IVRCompositor::_Submit* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRCompositorError Invoke(Valve.VR.EVREye eEye, Valve.VR.Texture_t pTexture, Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x15EE5B0
    Valve::VR::EVRCompositorError Invoke(Valve::VR::EVREye eEye, Valve::VR::Texture_t& pTexture, Valve::VR::VRTextureBounds_t& pBounds, Valve::VR::EVRSubmitFlags nSubmitFlags);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, Valve.VR.Texture_t pTexture, Valve.VR.VRTextureBounds_t pBounds, Valve.VR.EVRSubmitFlags nSubmitFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EE878
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, Valve::VR::Texture_t& pTexture, Valve::VR::VRTextureBounds_t& pBounds, Valve::VR::EVRSubmitFlags nSubmitFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(Valve.VR.Texture_t pTexture, Valve.VR.VRTextureBounds_t pBounds, System.IAsyncResult result)
    // Offset: 0x15EE968
    Valve::VR::EVRCompositorError EndInvoke(Valve::VR::Texture_t& pTexture, Valve::VR::VRTextureBounds_t& pBounds, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_Submit
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_Submit*, "Valve.VR", "IVRCompositor/_Submit");
#pragma pack(pop)
