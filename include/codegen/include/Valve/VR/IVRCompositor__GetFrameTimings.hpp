// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetFrameTimings
  class IVRCompositor::_GetFrameTimings : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EA3FC
    static IVRCompositor::_GetFrameTimings* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x15EA410
    uint Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.IAsyncResult BeginInvoke(Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EA684
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(Valve.VR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x15EA738
    uint EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetFrameTimings
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetFrameTimings*, "Valve.VR", "IVRCompositor/_GetFrameTimings");
#pragma pack(pop)
