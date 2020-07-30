// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:14 PM
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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayMouseScale
  class IVROverlay::_SetOverlayMouseScale : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A9798
    static IVROverlay::_SetOverlayMouseScale* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdVector2_t pvecMouseScale)
    // Offset: 0x16A97AC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdVector2_t pvecMouseScale, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A9A30
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(Valve.VR.HmdVector2_t pvecMouseScale, System.IAsyncResult result)
    // Offset: 0x16A9AE0
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdVector2_t& pvecMouseScale, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayMouseScale
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayMouseScale*, "Valve.VR", "IVROverlay/_SetOverlayMouseScale");
#pragma pack(pop)
