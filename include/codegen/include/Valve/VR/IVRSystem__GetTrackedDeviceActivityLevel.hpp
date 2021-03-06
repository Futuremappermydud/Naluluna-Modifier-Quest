// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:11 PM
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel
  class IVRSystem::_GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BFBA4
    static IVRSystem::_GetTrackedDeviceActivityLevel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EDeviceActivityLevel Invoke(System.UInt32 unDeviceId)
    // Offset: 0x16BFBB8
    Valve::VR::EDeviceActivityLevel Invoke(uint unDeviceId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BFE2C
    System::IAsyncResult* BeginInvoke(uint unDeviceId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EDeviceActivityLevel EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BFEB8
    Valve::VR::EDeviceActivityLevel EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel*, "Valve.VR", "IVRSystem/_GetTrackedDeviceActivityLevel");
#pragma pack(pop)
