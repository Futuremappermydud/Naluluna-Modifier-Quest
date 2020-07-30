// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.CullingGroup
#include "UnityEngine/CullingGroup.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CullingGroupEvent
  struct CullingGroupEvent;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CullingGroup/StateChanged
  class CullingGroup::StateChanged : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12F0F1C
    static CullingGroup::StateChanged* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.CullingGroupEvent sphere)
    // Offset: 0x12F0CBC
    void Invoke(UnityEngine::CullingGroupEvent sphere);
    // public System.IAsyncResult BeginInvoke(UnityEngine.CullingGroupEvent sphere, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12F0F30
    System::IAsyncResult* BeginInvoke(UnityEngine::CullingGroupEvent sphere, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12F0FBC
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.CullingGroup/StateChanged
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CullingGroup::StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
#pragma pack(pop)
