// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRManager/<>c
  class OVRManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRManager/<>c <>9
    static GlobalNamespace::OVRManager::$$c* _get_$$9();
    // Set static field: static public readonly OVRManager/<>c <>9
    static void _set_$$9(GlobalNamespace::OVRManager::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Camera> <>9__242_0
    static System::Comparison_1<UnityEngine::Camera*>* _get_$$9__242_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Camera> <>9__242_0
    static void _set_$$9__242_0(System::Comparison_1<UnityEngine::Camera*>* value);
    // static private System.Void .cctor()
    // Offset: 0xED4218
    static void _cctor();
    // System.Int32 <FindMainCamera>b__242_0(UnityEngine.Camera c0, UnityEngine.Camera c1)
    // Offset: 0xED4288
    int $FindMainCamera$b__242_0(UnityEngine::Camera* c0, UnityEngine::Camera* c1);
    // public System.Void .ctor()
    // Offset: 0xED4280
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRManager::$$c* New_ctor();
  }; // OVRManager/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager::$$c*, "", "OVRManager/<>c");
#pragma pack(pop)
