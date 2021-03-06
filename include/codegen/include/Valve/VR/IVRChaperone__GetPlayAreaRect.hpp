// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
  // Autogenerated type: Valve.VR.IVRChaperone/_GetPlayAreaRect
  class IVRChaperone::_GetPlayAreaRect : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD31E0
    static IVRChaperone::_GetPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.HmdQuad_t rect)
    // Offset: 0xFCB754
    bool Invoke(Valve::VR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD31F4
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0xFD3288
    bool EndInvoke(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_GetPlayAreaRect
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_GetPlayAreaRect*, "Valve.VR", "IVRChaperone/_GetPlayAreaRect");
#pragma pack(pop)
