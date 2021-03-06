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
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetRenderModelCount
  class IVRRenderModels::_GetRenderModelCount : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B07FC
    static IVRRenderModels::_GetRenderModelCount* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke()
    // Offset: 0x16B0810
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B0A24
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16B0A50
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetRenderModelCount
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetRenderModelCount*, "Valve.VR", "IVRRenderModels/_GetRenderModelCount");
#pragma pack(pop)
