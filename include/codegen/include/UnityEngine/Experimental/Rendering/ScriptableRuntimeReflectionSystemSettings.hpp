// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
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
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: ScriptableRuntimeReflectionSystemWrapper
  class ScriptableRuntimeReflectionSystemWrapper;
  // Forward declaring type: IScriptableRuntimeReflectionSystem
  class IScriptableRuntimeReflectionSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
  class ScriptableRuntimeReflectionSystemSettings : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper s_Instance
    static UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* _get_s_Instance();
    // Set static field: static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper s_Instance
    static void _set_s_Instance(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* value);
    // static private System.Void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem value)
    // Offset: 0x12F6EA0
    static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
    // static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
    // Offset: 0x12F7018
    static UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance();
    // static private System.Void ScriptingDirtyReflectionSystemInstance()
    // Offset: 0x12F7080
    static void ScriptingDirtyReflectionSystemInstance();
    // static private System.Void .cctor()
    // Offset: 0x12F70B4
    static void _cctor();
  }; // UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
#pragma pack(pop)
