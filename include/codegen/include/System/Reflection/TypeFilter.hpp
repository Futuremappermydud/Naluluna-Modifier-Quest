// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.TypeFilter
  class TypeFilter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x113AA90
    static TypeFilter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Type m, System.Object filterCriteria)
    // Offset: 0x1141F74
    bool Invoke(System::Type* m, ::Il2CppObject* filterCriteria);
    // public System.IAsyncResult BeginInvoke(System.Type m, System.Object filterCriteria, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1142384
    System::IAsyncResult* BeginInvoke(System::Type* m, ::Il2CppObject* filterCriteria, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x11423B4
    bool EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.TypeFilter
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");
#pragma pack(pop)
