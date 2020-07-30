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
  // Autogenerated type: Valve.VR.IVROverlay/_FindOverlay
  class IVROverlay::_FindOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F25E0
    static IVROverlay::_FindOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.String pchOverlayKey, System.UInt64 pOverlayHandle)
    // Offset: 0x15F25F4
    Valve::VR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F2A00
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x15F2A9C
    Valve::VR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_FindOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_FindOverlay*, "Valve.VR", "IVROverlay/_FindOverlay");
#pragma pack(pop)
