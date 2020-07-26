// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
  class IVRTrackedCamera::_GetVideoStreamTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCAD7FC
    static IVRTrackedCamera::_GetVideoStreamTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, System.IntPtr ppD3D11ShaderResourceView, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xCAD810
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, System.IntPtr ppD3D11ShaderResourceView, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0xCADAEC
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(System.IntPtr ppD3D11ShaderResourceView, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0xCADC18
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
#pragma pack(pop)
