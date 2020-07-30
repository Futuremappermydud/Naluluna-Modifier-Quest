// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EVRTrackedCameraFrameType
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t : public System::ValueType {
    public:
    // public Valve.VR.EVRTrackedCameraFrameType eFrameType
    // Offset: 0x0
    Valve::VR::EVRTrackedCameraFrameType eFrameType;
    // public System.UInt32 nWidth
    // Offset: 0x4
    uint nWidth;
    // public System.UInt32 nHeight
    // Offset: 0x8
    uint nHeight;
    // public System.UInt32 nBytesPerPixel
    // Offset: 0xC
    uint nBytesPerPixel;
    // public System.UInt32 nFrameSequence
    // Offset: 0x10
    uint nFrameSequence;
    // public Valve.VR.TrackedDevicePose_t standingTrackedDevicePose
    // Offset: 0x14
    Valve::VR::TrackedDevicePose_t standingTrackedDevicePose;
    // Creating value type constructor for type: CameraVideoStreamFrameHeader_t
    CameraVideoStreamFrameHeader_t(Valve::VR::EVRTrackedCameraFrameType eFrameType_ = {}, uint nWidth_ = {}, uint nHeight_ = {}, uint nBytesPerPixel_ = {}, uint nFrameSequence_ = {}, Valve::VR::TrackedDevicePose_t standingTrackedDevicePose_ = {}) : eFrameType{eFrameType_}, nWidth{nWidth_}, nHeight{nHeight_}, nBytesPerPixel{nBytesPerPixel_}, nFrameSequence{nFrameSequence_}, standingTrackedDevicePose{standingTrackedDevicePose_} {}
  }; // Valve.VR.CameraVideoStreamFrameHeader_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CameraVideoStreamFrameHeader_t, "Valve.VR", "CameraVideoStreamFrameHeader_t");
#pragma pack(pop)
