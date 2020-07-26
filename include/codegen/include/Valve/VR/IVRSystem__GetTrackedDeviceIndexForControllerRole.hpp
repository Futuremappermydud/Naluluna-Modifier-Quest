// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:05 PM
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
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
  class IVRSystem::_GetTrackedDeviceIndexForControllerRole : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C0224
    static IVRSystem::_GetTrackedDeviceIndexForControllerRole* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(Valve.VR.ETrackedControllerRole unDeviceType)
    // Offset: 0x16C0238
    uint Invoke(Valve::VR::ETrackedControllerRole unDeviceType);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackedControllerRole unDeviceType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C04AC
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackedControllerRole unDeviceType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C0538
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*, "Valve.VR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
#pragma pack(pop)
