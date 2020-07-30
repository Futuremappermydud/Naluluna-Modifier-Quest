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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlaySortOrder
  class IVROverlay::_GetOverlaySortOrder : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F6BEC
    static IVROverlay::_GetOverlaySortOrder* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 punSortOrder)
    // Offset: 0x15F6C00
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punSortOrder);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 punSortOrder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F6E84
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.UInt32 punSortOrder, System.IAsyncResult result)
    // Offset: 0x15F6F34
    Valve::VR::EVROverlayError EndInvoke(uint& punSortOrder, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlaySortOrder
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlaySortOrder*, "Valve.VR", "IVROverlay/_GetOverlaySortOrder");
#pragma pack(pop)
