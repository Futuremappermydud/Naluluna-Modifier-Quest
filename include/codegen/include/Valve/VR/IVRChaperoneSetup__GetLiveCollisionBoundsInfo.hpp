// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
  class IVRChaperoneSetup::_GetLiveCollisionBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD3668
    static IVRChaperoneSetup::_GetLiveCollisionBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.HmdQuad_t[] pQuadsBuffer, System.UInt32 punQuadsCount)
    // Offset: 0xFCCB68
    bool Invoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdQuad_t[] pQuadsBuffer, System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD367C
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0xFD3718
    bool EndInvoke(uint& punQuadsCount, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo");
#pragma pack(pop)
