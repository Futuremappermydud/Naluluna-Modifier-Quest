// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRChaperoneSetup
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRChaperoneSetup FnTable
    // Offset: 0x10
    Valve::VR::IVRChaperoneSetup FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFCC618
    static CVRChaperoneSetup* New_ctor(System::IntPtr pInterface);
    // public System.Boolean CommitWorkingCopy(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0xFCC72C
    bool CommitWorkingCopy(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0xFCC9BC
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(System.Single pSizeX, System.Single pSizeZ)
    // Offset: 0xFCC9D8
    bool GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(Valve.VR.HmdQuad_t rect)
    // Offset: 0xFCC9FC
    bool GetWorkingPlayAreaRect(Valve::VR::HmdQuad_t& rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFCCA18
    bool GetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFCCAC4
    bool GetLiveCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFCCDE0
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0xFCCDFC
    bool GetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0xFCCE18
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFCCE34
    void SetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFCCE5C
    void SetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0xFCCE78
    void SetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0xFCCE94
    void ReloadFromDisk(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFCCEB0
    bool GetLiveSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0xFCCECC
    void SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0xFCCEF4
    bool GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFCCFA0
    bool SetWorkingPhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFCCFC8
    bool GetLivePhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, System.UInt32 pnBufferLength)
    // Offset: 0xFCD074
    bool ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0xFCD4A0
    bool ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags);
  }; // Valve.VR.CVRChaperoneSetup
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRChaperoneSetup*, "Valve.VR", "CVRChaperoneSetup");
#pragma pack(pop)
