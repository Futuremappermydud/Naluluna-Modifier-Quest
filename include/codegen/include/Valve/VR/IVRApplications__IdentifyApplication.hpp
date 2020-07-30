// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_IdentifyApplication
  class IVRApplications::_IdentifyApplication : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD28D8
    static IVRApplications::_IdentifyApplication* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0xFC6850
    Valve::VR::EVRApplicationError Invoke(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unProcessId, System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD28EC
    System::IAsyncResult* BeginInvoke(uint unProcessId, ::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD2984
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_IdentifyApplication
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_IdentifyApplication*, "Valve.VR", "IVRApplications/_IdentifyApplication");
#pragma pack(pop)
