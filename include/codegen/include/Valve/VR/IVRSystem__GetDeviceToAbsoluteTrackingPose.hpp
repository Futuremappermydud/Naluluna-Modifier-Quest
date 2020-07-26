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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
  class IVRSystem::_GetDeviceToAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BBEBC
    static IVRSystem::_GetDeviceToAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount)
    // Offset: 0x16BBED0
    void Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BC194
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BC26C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*, "Valve.VR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
#pragma pack(pop)
