// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayRenderModel
  class IVROverlay::_SetOverlayRenderModel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AA618
    static IVROverlay::_SetOverlayRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.String pchRenderModel, Valve.VR.HmdColor_t pColor)
    // Offset: 0x16AA62C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, Valve::VR::HmdColor_t& pColor);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.String pchRenderModel, Valve.VR.HmdColor_t pColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AA8C4
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, Valve::VR::HmdColor_t& pColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(Valve.VR.HmdColor_t pColor, System.IAsyncResult result)
    // Offset: 0x16AA97C
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdColor_t& pColor, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayRenderModel
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayRenderModel*, "Valve.VR", "IVROverlay/_SetOverlayRenderModel");
#pragma pack(pop)
