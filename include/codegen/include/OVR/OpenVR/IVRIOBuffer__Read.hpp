// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Read
  class IVRIOBuffer::_Read : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1501B78
    static IVRIOBuffer::_Read* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, System.UInt32 punRead)
    // Offset: 0x1501B8C
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, System.UInt32 punRead, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1501E3C
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(System.UInt32 punRead, System.IAsyncResult result)
    // Offset: 0x1501F24
    OVR::OpenVR::EIOBufferError EndInvoke(uint& punRead, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Read
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
#pragma pack(pop)
