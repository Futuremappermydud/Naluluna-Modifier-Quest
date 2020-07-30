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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_PollNextEventWithPose
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C1AB8
    static IVRSystem::_PollNextEventWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x16C1ACC
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C1D98
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.VREvent_t pEvent, Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x16C1E88
    bool EndInvoke(Valve::VR::VREvent_t& pEvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_PollNextEventWithPose
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PollNextEventWithPose*, "Valve.VR", "IVRSystem/_PollNextEventWithPose");
#pragma pack(pop)
