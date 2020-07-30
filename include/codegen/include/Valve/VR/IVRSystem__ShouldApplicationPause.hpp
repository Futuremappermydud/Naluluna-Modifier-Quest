// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Autogenerated type: Valve.VR.IVRSystem/_ShouldApplicationPause
  class IVRSystem::_ShouldApplicationPause : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C2470
    static IVRSystem::_ShouldApplicationPause* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke()
    // Offset: 0x16C2484
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C269C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C26C8
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_ShouldApplicationPause
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ShouldApplicationPause*, "Valve.VR", "IVRSystem/_ShouldApplicationPause");
#pragma pack(pop)
