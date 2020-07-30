// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.XR.WSA.WorldAnchor
#include "UnityEngine/XR/WSA/WorldAnchor.hpp"
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
// Type namespace: UnityEngine.XR.WSA
namespace UnityEngine::XR::WSA {
  // Autogenerated type: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
  class WorldAnchor::OnTrackingChangedDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19626E0
    static WorldAnchor::OnTrackingChangedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.XR.WSA.WorldAnchor worldAnchor, System.Boolean located)
    // Offset: 0x1962298
    void Invoke(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located);
    // public System.IAsyncResult BeginInvoke(UnityEngine.XR.WSA.WorldAnchor worldAnchor, System.Boolean located, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19626F4
    System::IAsyncResult* BeginInvoke(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1962794
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate*, "UnityEngine.XR.WSA", "WorldAnchor/OnTrackingChangedDelegate");
#pragma pack(pop)
