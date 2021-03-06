// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
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
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Warning
  class Warning : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::Warning::Logger
    class Logger;
    // Get static field: static public System.Boolean logged
    static bool _get_logged();
    // Set static field: static public System.Boolean logged
    static void _set_logged(bool value);
    // static public System.Void Log(System.String message, RootMotion.Warning/Logger logger, System.Boolean logInEditMode)
    // Offset: 0x122EC58
    static void Log(::Il2CppString* message, RootMotion::Warning::Logger* logger, bool logInEditMode);
    // static public System.Void Log(System.String message, UnityEngine.Transform context, System.Boolean logInEditMode)
    // Offset: 0x1217E30
    static void Log(::Il2CppString* message, UnityEngine::Transform* context, bool logInEditMode);
  }; // RootMotion.Warning
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning*, "RootMotion", "Warning");
#pragma pack(pop)
