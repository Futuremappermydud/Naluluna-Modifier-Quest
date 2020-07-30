// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:13 PM
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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayColor
  class IVROverlay::_GetOverlayColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F3F94
    static IVROverlay::_GetOverlayColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single pfRed, System.Single pfGreen, System.Single pfBlue)
    // Offset: 0x15F3FA8
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single pfRed, System.Single pfGreen, System.Single pfBlue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F4258
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.Single pfRed, System.Single pfGreen, System.Single pfBlue, System.IAsyncResult result)
    // Offset: 0x15F4340
    Valve::VR::EVROverlayError EndInvoke(float& pfRed, float& pfGreen, float& pfBlue, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayColor
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayColor*, "Valve.VR", "IVROverlay/_GetOverlayColor");
#pragma pack(pop)
