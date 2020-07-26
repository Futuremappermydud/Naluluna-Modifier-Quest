// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RemoteConfigSettings
  class RemoteConfigSettings : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private System.Action`1<System.Boolean> Updated
    // Offset: 0x18
    System::Action_1<bool>* Updated;
    // static System.Void RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings rcs, System.Boolean wasLastUpdatedFromServer)
    // Offset: 0x195B5FC
    static void RemoteConfigSettingsUpdated(UnityEngine::RemoteConfigSettings* rcs, bool wasLastUpdatedFromServer);
  }; // UnityEngine.RemoteConfigSettings
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RemoteConfigSettings*, "UnityEngine", "RemoteConfigSettings");
#pragma pack(pop)
