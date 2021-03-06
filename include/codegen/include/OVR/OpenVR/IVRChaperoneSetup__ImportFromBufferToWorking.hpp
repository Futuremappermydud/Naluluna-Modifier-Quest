// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
  class IVRChaperoneSetup::_ImportFromBufferToWorking : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBEA4C
    static IVRChaperoneSetup::_ImportFromBufferToWorking* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0xEB7490
    bool Invoke(::Il2CppString* pBuffer, uint nImportFlags);
    // public System.IAsyncResult BeginInvoke(System.String pBuffer, System.UInt32 nImportFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBEA60
    System::IAsyncResult* BeginInvoke(::Il2CppString* pBuffer, uint nImportFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBEAFC
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking*, "OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
#pragma pack(pop)
