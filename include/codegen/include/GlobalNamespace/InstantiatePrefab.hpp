// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstantiatePrefab
  class InstantiatePrefab : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject _prefab
    // Offset: 0x18
    UnityEngine::GameObject* prefab;
    // protected System.Void Awake()
    // Offset: 0xCA1BF8
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xCA1CF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InstantiatePrefab* New_ctor();
  }; // InstantiatePrefab
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstantiatePrefab*, "", "InstantiatePrefab");
#pragma pack(pop)
