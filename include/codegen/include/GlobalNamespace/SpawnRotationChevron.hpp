// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnRotationChevron
  class SpawnRotationChevron : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SpawnRotationChevron::InitData
    class InitData;
    // private UnityEngine.GameObject[] _chevronGameObjects
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* chevronGameObjects;
    // private UnityEngine.GameObject[] _sideLineGameObjects
    // Offset: 0x20
    ::Array<UnityEngine::GameObject*>* sideLineGameObjects;
    // private SpawnRotationChevron/InitData _initData
    // Offset: 0x28
    GlobalNamespace::SpawnRotationChevron::InitData* initData;
    // protected System.Void Start()
    // Offset: 0xB87A78
    void Start();
    // public System.Void .ctor()
    // Offset: 0xB87B4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SpawnRotationChevron* New_ctor();
  }; // SpawnRotationChevron
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
#pragma pack(pop)
