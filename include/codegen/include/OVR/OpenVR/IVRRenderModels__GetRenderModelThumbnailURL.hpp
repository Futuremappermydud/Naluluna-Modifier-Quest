// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
  class IVRRenderModels::_GetRenderModelThumbnailURL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1697F58
    static IVRRenderModels::_GetRenderModelThumbnailURL* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x1697F6C
    uint Invoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, OVR.OpenVR.EVRRenderModelError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16983C0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(OVR.OpenVR.EVRRenderModelError peError, System.IAsyncResult result)
    // Offset: 0x1698488
    uint EndInvoke(OVR::OpenVR::EVRRenderModelError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
#pragma pack(pop)
