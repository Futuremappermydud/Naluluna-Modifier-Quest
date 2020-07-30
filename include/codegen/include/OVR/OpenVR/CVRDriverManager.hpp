// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVR.OpenVR.IVRDriverManager
#include "OVR/OpenVR/IVRDriverManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRDriverManager
  class CVRDriverManager : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRDriverManager FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRDriverManager FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xEB7EE4
    static CVRDriverManager* New_ctor(System::IntPtr pInterface);
    // public System.UInt32 GetDriverCount()
    // Offset: 0xEB7FF4
    uint GetDriverCount();
    // public System.UInt32 GetDriverName(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0xEB8010
    uint GetDriverName(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.UInt64 GetDriverHandle(System.String pchDriverName)
    // Offset: 0xEB802C
    uint64_t GetDriverHandle(::Il2CppString* pchDriverName);
  }; // OVR.OpenVR.CVRDriverManager
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRDriverManager*, "OVR.OpenVR", "CVRDriverManager");
#pragma pack(pop)
