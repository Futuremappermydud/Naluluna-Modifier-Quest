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
  // Forward declaring type: EIOBufferMode
  struct EIOBufferMode;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Open
  class IVRIOBuffer::_Open : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1501264
    static IVRIOBuffer::_Open* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EIOBufferError Invoke(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, System.UInt64 pulBuffer)
    // Offset: 0x1501278
    OVR::OpenVR::EIOBufferError Invoke(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, uint64_t& pulBuffer);
    // public System.IAsyncResult BeginInvoke(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, System.UInt64 pulBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150171C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, uint64_t& pulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(System.UInt64 pulBuffer, System.IAsyncResult result)
    // Offset: 0x150180C
    OVR::OpenVR::EIOBufferError EndInvoke(uint64_t& pulBuffer, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Open
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Open*, "OVR.OpenVR", "IVRIOBuffer/_Open");
#pragma pack(pop)
