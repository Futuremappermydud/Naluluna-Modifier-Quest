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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetDXGIOutputInfo
  class IVRSystem::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BBB9C
    static IVRSystem::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Int32 pnAdapterIndex)
    // Offset: 0x16BBBB0
    void Invoke(int& pnAdapterIndex);
    // public System.IAsyncResult BeginInvoke(System.Int32 pnAdapterIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BBE00
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.Int32 pnAdapterIndex, System.IAsyncResult result)
    // Offset: 0x16BBE94
    void EndInvoke(int& pnAdapterIndex, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetDXGIOutputInfo
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetDXGIOutputInfo*, "Valve.VR", "IVRSystem/_GetDXGIOutputInfo");
#pragma pack(pop)
