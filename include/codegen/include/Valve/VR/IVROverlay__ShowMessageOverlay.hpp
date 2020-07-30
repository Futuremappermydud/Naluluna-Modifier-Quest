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
  // Forward declaring type: VRMessageOverlayResponse
  struct VRMessageOverlayResponse;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_ShowMessageOverlay
  class IVROverlay::_ShowMessageOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16ADDA4
    static IVROverlay::_ShowMessageOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.VRMessageOverlayResponse Invoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text)
    // Offset: 0x16ADDB8
    Valve::VR::VRMessageOverlayResponse Invoke(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text);
    // public System.IAsyncResult BeginInvoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AE230
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.VRMessageOverlayResponse EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AE26C
    Valve::VR::VRMessageOverlayResponse EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowMessageOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowMessageOverlay*, "Valve.VR", "IVROverlay/_ShowMessageOverlay");
#pragma pack(pop)
