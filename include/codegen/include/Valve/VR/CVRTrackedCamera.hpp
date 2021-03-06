// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRTrackedCamera
  class CVRTrackedCamera : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRTrackedCamera FnTable
    // Offset: 0x10
    Valve::VR::IVRTrackedCamera FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFD183C
    static CVRTrackedCamera* New_ctor(System::IntPtr pInterface);
    // public System.String GetCameraErrorNameFromEnum(Valve.VR.EVRTrackedCameraError eCameraError)
    // Offset: 0xFD1950
    ::Il2CppString* GetCameraErrorNameFromEnum(Valve::VR::EVRTrackedCameraError eCameraError);
    // public Valve.VR.EVRTrackedCameraError HasCamera(System.UInt32 nDeviceIndex, System.Boolean pHasCamera)
    // Offset: 0xFBF804
    Valve::VR::EVRTrackedCameraError HasCamera(uint nDeviceIndex, bool& pHasCamera);
    // public Valve.VR.EVRTrackedCameraError GetCameraFrameSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pnWidth, System.UInt32 pnHeight, System.UInt32 pnFrameBufferSize)
    // Offset: 0xFD19E4
    Valve::VR::EVRTrackedCameraError GetCameraFrameSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize);
    // public Valve.VR.EVRTrackedCameraError GetCameraIntrinsics(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, Valve.VR.HmdVector2_t pFocalLength, Valve.VR.HmdVector2_t pCenter)
    // Offset: 0xFD1A0C
    Valve::VR::EVRTrackedCameraError GetCameraIntrinsics(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter);
    // public Valve.VR.EVRTrackedCameraError GetCameraProjection(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, Valve.VR.HmdMatrix44_t pProjection)
    // Offset: 0xFD1A28
    Valve::VR::EVRTrackedCameraError GetCameraProjection(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection);
    // public Valve.VR.EVRTrackedCameraError AcquireVideoStreamingService(System.UInt32 nDeviceIndex, System.UInt64 pHandle)
    // Offset: 0xFBF8E0
    Valve::VR::EVRTrackedCameraError AcquireVideoStreamingService(uint nDeviceIndex, uint64_t& pHandle);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamingService(System.UInt64 hTrackedCamera)
    // Offset: 0xFBF9B0
    Valve::VR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamFrameBuffer(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFD1A44
    Valve::VR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, Valve.VR.VRTextureBounds_t pTextureBounds, System.UInt32 pnWidth, System.UInt32 pnHeight)
    // Offset: 0xFC0288
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureD3D11(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, System.IntPtr ppD3D11ShaderResourceView, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFC026C
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureGL(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pglTextureId, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFC024C
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamTextureGL(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0xFC0230
    Valve::VR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId);
  }; // Valve.VR.CVRTrackedCamera
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRTrackedCamera*, "Valve.VR", "CVRTrackedCamera");
#pragma pack(pop)
