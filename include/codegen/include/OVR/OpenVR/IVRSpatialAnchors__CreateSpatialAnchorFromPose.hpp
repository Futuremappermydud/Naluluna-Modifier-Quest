// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
  class IVRSpatialAnchors::_CreateSpatialAnchorFromPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x169FCA8
    static IVRSpatialAnchors::_CreateSpatialAnchorFromPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.SpatialAnchorPose_t pPose, System.UInt32 pHandleOut)
    // Offset: 0x169FCBC
    OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.SpatialAnchorPose_t pPose, System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x169FF84
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(OVR.OpenVR.SpatialAnchorPose_t pPose, System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0x16A006C
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
#pragma pack(pop)
