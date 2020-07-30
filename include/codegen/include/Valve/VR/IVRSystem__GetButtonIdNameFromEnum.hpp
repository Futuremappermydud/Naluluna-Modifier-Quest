// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetButtonIdNameFromEnum
  class IVRSystem::_GetButtonIdNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BA758
    static IVRSystem::_GetButtonIdNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(Valve.VR.EVRButtonId eButtonId)
    // Offset: 0x16BA76C
    System::IntPtr Invoke(Valve::VR::EVRButtonId eButtonId);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRButtonId eButtonId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BA9E0
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRButtonId eButtonId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BAA6C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetButtonIdNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetButtonIdNameFromEnum*, "Valve.VR", "IVRSystem/_GetButtonIdNameFromEnum");
#pragma pack(pop)
