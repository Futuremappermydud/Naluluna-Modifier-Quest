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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetTrackingSpace
  class IVRCompositor::_GetTrackingSpace : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EB8D0
    static IVRCompositor::_GetTrackingSpace* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.ETrackingUniverseOrigin Invoke()
    // Offset: 0x15EB8E4
    Valve::VR::ETrackingUniverseOrigin Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EBAF8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ETrackingUniverseOrigin EndInvoke(System.IAsyncResult result)
    // Offset: 0x15EBB24
    Valve::VR::ETrackingUniverseOrigin EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetTrackingSpace
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetTrackingSpace*, "Valve.VR", "IVRCompositor/_GetTrackingSpace");
#pragma pack(pop)
