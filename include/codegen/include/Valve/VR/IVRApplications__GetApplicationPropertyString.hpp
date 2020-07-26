// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationPropertyString
  class IVRApplications::_GetApplicationPropertyString : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD20B0
    static IVRApplications::_GetApplicationPropertyString* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, Valve.VR.EVRApplicationError peError)
    // Offset: 0xFC71D4
    uint Invoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, Valve.VR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD20C4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(Valve.VR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0xFD21AC
    uint EndInvoke(Valve::VR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationPropertyString
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationPropertyString*, "Valve.VR", "IVRApplications/_GetApplicationPropertyString");
#pragma pack(pop)
