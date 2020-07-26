// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
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
  // Autogenerated type: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork
  class IVRSystem::_ShouldApplicationReduceRenderingWork : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C26F4
    static IVRSystem::_ShouldApplicationReduceRenderingWork* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke()
    // Offset: 0x16C2708
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C2920
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C294C
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork*, "Valve.VR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
#pragma pack(pop)
