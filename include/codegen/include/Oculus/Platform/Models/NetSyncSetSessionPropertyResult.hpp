// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSession
  class NetSyncSession;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.NetSyncSetSessionPropertyResult
  class NetSyncSetSessionPropertyResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.NetSyncSession Session
    // Offset: 0x10
    Oculus::Platform::Models::NetSyncSession* Session;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8FA28
    static NetSyncSetSessionPropertyResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.NetSyncSetSessionPropertyResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, "Oculus.Platform.Models", "NetSyncSetSessionPropertyResult");
#pragma pack(pop)
