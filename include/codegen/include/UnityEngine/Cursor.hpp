// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:27 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CursorLockMode
  struct CursorLockMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Cursor
  class Cursor : public ::Il2CppObject {
    public:
    // static public System.Boolean get_visible()
    // Offset: 0x12F0FC8
    static bool get_visible();
    // static public System.Void set_visible(System.Boolean value)
    // Offset: 0x12F0FFC
    static void set_visible(bool value);
    // static public UnityEngine.CursorLockMode get_lockState()
    // Offset: 0x12F103C
    static UnityEngine::CursorLockMode get_lockState();
    // static public System.Void set_lockState(UnityEngine.CursorLockMode value)
    // Offset: 0x12F1070
    static void set_lockState(UnityEngine::CursorLockMode value);
  }; // UnityEngine.Cursor
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cursor*, "UnityEngine", "Cursor");
#pragma pack(pop)
