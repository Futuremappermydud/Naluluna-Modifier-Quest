// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_FreeTexture
  class IVRRenderModels::_FreeTexture : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AE8D8
    static IVRRenderModels::_FreeTexture* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pTexture)
    // Offset: 0x16AE8EC
    void Invoke(System::IntPtr pTexture);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AEB4C
    System::IAsyncResult* BeginInvoke(System::IntPtr pTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AEBD8
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_FreeTexture
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_FreeTexture*, "Valve.VR", "IVRRenderModels/_FreeTexture");
#pragma pack(pop)
