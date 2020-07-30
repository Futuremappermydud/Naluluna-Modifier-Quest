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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MemberFilter
  class MemberFilter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1353EA0
    static MemberFilter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x1353EB4
    bool Invoke(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // public System.IAsyncResult BeginInvoke(System.Reflection.MemberInfo m, System.Object filterCriteria, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13542C4
    System::IAsyncResult* BeginInvoke(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x13542F4
    bool EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.MemberFilter
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberFilter*, "System.Reflection", "MemberFilter");
#pragma pack(pop)
