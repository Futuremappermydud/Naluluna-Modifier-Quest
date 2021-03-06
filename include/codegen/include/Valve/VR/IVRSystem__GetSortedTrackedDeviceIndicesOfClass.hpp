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
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
  class IVRSystem::_GetSortedTrackedDeviceIndicesOfClass : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BF03C
    static IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0x16BF050
    uint Invoke(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>*& punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BF318
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>*& punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BF3E4
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*, "Valve.VR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
#pragma pack(pop)
