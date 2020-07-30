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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_SuspendRendering
  class IVRCompositor::_SuspendRendering : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EEC20
    static IVRCompositor::_SuspendRendering* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bSuspend)
    // Offset: 0x15EEC34
    void Invoke(bool bSuspend);
    // public System.IAsyncResult BeginInvoke(System.Boolean bSuspend, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EEEB0
    System::IAsyncResult* BeginInvoke(bool bSuspend, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15EEF40
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_SuspendRendering
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_SuspendRendering*, "Valve.VR", "IVRCompositor/_SuspendRendering");
#pragma pack(pop)
