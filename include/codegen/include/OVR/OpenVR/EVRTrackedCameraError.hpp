// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRTrackedCameraError
  struct EVRTrackedCameraError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError None
    static OVR::OpenVR::EVRTrackedCameraError _get_None();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError None
    static void _set_None(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError OperationFailed
    static constexpr const int OperationFailed = 100;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError OperationFailed
    static OVR::OpenVR::EVRTrackedCameraError _get_OperationFailed();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError OperationFailed
    static void _set_OperationFailed(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidHandle
    static constexpr const int InvalidHandle = 101;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidHandle
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidHandle();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidHandle
    static void _set_InvalidHandle(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static constexpr const int InvalidFrameHeaderVersion = 102;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidFrameHeaderVersion();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static void _set_InvalidFrameHeaderVersion(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError OutOfHandles
    static constexpr const int OutOfHandles = 103;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError OutOfHandles
    static OVR::OpenVR::EVRTrackedCameraError _get_OutOfHandles();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError OutOfHandles
    static void _set_OutOfHandles(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError IPCFailure
    static constexpr const int IPCFailure = 104;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError IPCFailure
    static OVR::OpenVR::EVRTrackedCameraError _get_IPCFailure();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError IPCFailure
    static void _set_IPCFailure(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError NotSupportedForThisDevice
    static constexpr const int NotSupportedForThisDevice = 105;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError NotSupportedForThisDevice
    static OVR::OpenVR::EVRTrackedCameraError _get_NotSupportedForThisDevice();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError NotSupportedForThisDevice
    static void _set_NotSupportedForThisDevice(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError SharedMemoryFailure
    static constexpr const int SharedMemoryFailure = 106;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError SharedMemoryFailure
    static OVR::OpenVR::EVRTrackedCameraError _get_SharedMemoryFailure();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError SharedMemoryFailure
    static void _set_SharedMemoryFailure(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError FrameBufferingFailure
    static constexpr const int FrameBufferingFailure = 107;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError FrameBufferingFailure
    static OVR::OpenVR::EVRTrackedCameraError _get_FrameBufferingFailure();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError FrameBufferingFailure
    static void _set_FrameBufferingFailure(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError StreamSetupFailure
    static constexpr const int StreamSetupFailure = 108;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError StreamSetupFailure
    static OVR::OpenVR::EVRTrackedCameraError _get_StreamSetupFailure();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError StreamSetupFailure
    static void _set_StreamSetupFailure(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidGLTextureId
    static constexpr const int InvalidGLTextureId = 109;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidGLTextureId
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidGLTextureId();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidGLTextureId
    static void _set_InvalidGLTextureId(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidSharedTextureHandle
    static constexpr const int InvalidSharedTextureHandle = 110;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidSharedTextureHandle
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidSharedTextureHandle();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidSharedTextureHandle
    static void _set_InvalidSharedTextureHandle(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError FailedToGetGLTextureId
    static constexpr const int FailedToGetGLTextureId = 111;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError FailedToGetGLTextureId
    static OVR::OpenVR::EVRTrackedCameraError _get_FailedToGetGLTextureId();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError FailedToGetGLTextureId
    static void _set_FailedToGetGLTextureId(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError SharedTextureFailure
    static constexpr const int SharedTextureFailure = 112;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError SharedTextureFailure
    static OVR::OpenVR::EVRTrackedCameraError _get_SharedTextureFailure();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError SharedTextureFailure
    static void _set_SharedTextureFailure(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError NoFrameAvailable
    static constexpr const int NoFrameAvailable = 113;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError NoFrameAvailable
    static OVR::OpenVR::EVRTrackedCameraError _get_NoFrameAvailable();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError NoFrameAvailable
    static void _set_NoFrameAvailable(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidArgument
    static constexpr const int InvalidArgument = 114;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidArgument
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidArgument();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidArgument
    static void _set_InvalidArgument(OVR::OpenVR::EVRTrackedCameraError value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameBufferSize
    static constexpr const int InvalidFrameBufferSize = 115;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameBufferSize
    static OVR::OpenVR::EVRTrackedCameraError _get_InvalidFrameBufferSize();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraError InvalidFrameBufferSize
    static void _set_InvalidFrameBufferSize(OVR::OpenVR::EVRTrackedCameraError value);
    // Creating value type constructor for type: EVRTrackedCameraError
    EVRTrackedCameraError(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRTrackedCameraError
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraError, "OVR.OpenVR", "EVRTrackedCameraError");
#pragma pack(pop)
