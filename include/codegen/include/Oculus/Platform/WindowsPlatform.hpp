// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.WindowsPlatform
  class WindowsPlatform : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::WindowsPlatform::UnityLogDelegate
    class UnityLogDelegate;
    // private System.Void CPPLogCallback(System.IntPtr tag, System.IntPtr message)
    // Offset: 0x1951604
    void CPPLogCallback(System::IntPtr tag, System::IntPtr message);
    // private System.IntPtr getCallbackPointer()
    // Offset: 0x19516DC
    System::IntPtr getCallbackPointer();
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x195171C
    bool Initialize(::Il2CppString* appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x1951800
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // public System.Void .ctor()
    // Offset: 0x1951914
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WindowsPlatform* New_ctor();
  }; // Oculus.Platform.WindowsPlatform
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::WindowsPlatform*, "Oculus.Platform", "WindowsPlatform");
#pragma pack(pop)
