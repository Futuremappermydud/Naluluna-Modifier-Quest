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
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetCurrentFadeColor
  class IVRCompositor::_GetCurrentFadeColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15E95A0
    static IVRCompositor::_GetCurrentFadeColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.HmdColor_t Invoke(System.Boolean bBackground)
    // Offset: 0x15E95B4
    Valve::VR::HmdColor_t Invoke(bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15E9844
    System::IAsyncResult* BeginInvoke(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdColor_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x15E98D4
    Valve::VR::HmdColor_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetCurrentFadeColor
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCurrentFadeColor*, "Valve.VR", "IVRCompositor/_GetCurrentFadeColor");
#pragma pack(pop)
