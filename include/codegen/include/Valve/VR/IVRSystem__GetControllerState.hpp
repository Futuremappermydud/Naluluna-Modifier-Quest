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
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetControllerState
  class IVRSystem::_GetControllerState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BB118
    static IVRSystem::_GetControllerState* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x16BB12C
    bool Invoke(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BB3DC
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.VRControllerState_t pControllerState, System.IAsyncResult result)
    // Offset: 0x16BB4A8
    bool EndInvoke(Valve::VR::VRControllerState_t& pControllerState, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetControllerState
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetControllerState*, "Valve.VR", "IVRSystem/_GetControllerState");
#pragma pack(pop)
