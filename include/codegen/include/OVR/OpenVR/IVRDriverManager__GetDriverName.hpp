// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRDriverManager
#include "OVR/OpenVR/IVRDriverManager.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRDriverManager/_GetDriverName
  class IVRDriverManager::_GetDriverName : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150005C
    static IVRDriverManager::_GetDriverName* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1500070
    uint Invoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150031C
    System::IAsyncResult* BeginInvoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x15003CC
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRDriverManager/_GetDriverName
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRDriverManager::_GetDriverName*, "OVR.OpenVR", "IVRDriverManager/_GetDriverName");
#pragma pack(pop)
