// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.UnhandledExceptionHandler
#include "UnityEngine/UnhandledExceptionHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UnhandledExceptionHandler/<>c
  class UnhandledExceptionHandler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static UnityEngine::UnhandledExceptionHandler::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static void _set_$$9(UnityEngine::UnhandledExceptionHandler::$$c* value);
    // Get static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static System::UnhandledExceptionEventHandler* _get_$$9__0_0();
    // Set static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static void _set_$$9__0_0(System::UnhandledExceptionEventHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x137F6F4
    static void _cctor();
    // System.Void <RegisterUECatcher>b__0_0(System.Object sender, System.UnhandledExceptionEventArgs e)
    // Offset: 0x137F764
    void $RegisterUECatcher$b__0_0(::Il2CppObject* sender, System::UnhandledExceptionEventArgs* e);
    // public System.Void .ctor()
    // Offset: 0x137F75C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UnhandledExceptionHandler::$$c* New_ctor();
  }; // UnityEngine.UnhandledExceptionHandler/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnhandledExceptionHandler::$$c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
#pragma pack(pop)
