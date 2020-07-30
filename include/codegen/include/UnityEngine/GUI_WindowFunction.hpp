// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.GUI
#include "UnityEngine/GUI.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUI/WindowFunction
  class GUI::WindowFunction : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1252C4C
    static GUI::WindowFunction* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Int32 id)
    // Offset: 0x1252774
    void Invoke(int id);
    // public System.IAsyncResult BeginInvoke(System.Int32 id, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1252C60
    System::IAsyncResult* BeginInvoke(int id, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1252CEC
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.GUI/WindowFunction
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUI::WindowFunction*, "UnityEngine", "GUI/WindowFunction");
#pragma pack(pop)
