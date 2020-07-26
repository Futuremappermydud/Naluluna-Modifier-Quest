// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.LowLevel.PlayerLoopSystem
#include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
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
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
  class PlayerLoopSystem::UpdateFunction : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12FB438
    static PlayerLoopSystem::UpdateFunction* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0x12FB44C
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x12FB658
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12FB684
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
#pragma pack(pop)
