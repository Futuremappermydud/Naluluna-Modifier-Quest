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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty
  class IVRSystem::_GetMatrix34TrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BD464
    static IVRSystem::_GetMatrix34TrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.HmdMatrix34_t Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x16BD478
    Valve::VR::HmdMatrix34_t Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BD754
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix34_t EndInvoke(Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x16BD828
    Valve::VR::HmdMatrix34_t EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
#pragma pack(pop)
