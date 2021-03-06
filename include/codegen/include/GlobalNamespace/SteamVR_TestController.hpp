// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_TestController
  class SteamVR_TestController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<System.Int32> controllerIndices
    // Offset: 0x18
    System::Collections::Generic::List_1<int>* controllerIndices;
    // private Valve.VR.EVRButtonId[] buttonIds
    // Offset: 0x20
    ::Array<Valve::VR::EVRButtonId>* buttonIds;
    // private Valve.VR.EVRButtonId[] axisIds
    // Offset: 0x28
    ::Array<Valve::VR::EVRButtonId>* axisIds;
    // public UnityEngine.Transform point
    // Offset: 0x30
    UnityEngine::Transform* point;
    // public UnityEngine.Transform pointer
    // Offset: 0x38
    UnityEngine::Transform* pointer;
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0xD941E0
    void OnDeviceConnected(int index, bool connected);
    // private System.Void OnEnable()
    // Offset: 0xD947E4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xD948A8
    void OnDisable();
    // private System.Void PrintControllerStatus(System.Int32 index)
    // Offset: 0xD94394
    void PrintControllerStatus(int index);
    // private System.Void Update()
    // Offset: 0xD9496C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xD952BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_TestController* New_ctor();
  }; // SteamVR_TestController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TestController*, "", "SteamVR_TestController");
#pragma pack(pop)
