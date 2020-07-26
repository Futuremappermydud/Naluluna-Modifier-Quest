// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
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
  // Forward declaring type: RaycastHit2D
  struct RaycastHit2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
  class ReflectionMethodsCache::Raycast2DCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11F25E4
    static ReflectionMethodsCache::Raycast2DCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public UnityEngine.RaycastHit2D Invoke(UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, System.Single f, System.Int32 i)
    // Offset: 0x11F25F8
    UnityEngine::RaycastHit2D Invoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11F2928
    System::IAsyncResult* BeginInvoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit2D EndInvoke(System.IAsyncResult result)
    // Offset: 0x11F2A0C
    UnityEngine::RaycastHit2D EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
#pragma pack(pop)
