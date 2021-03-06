// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FireworksController
  class FireworksController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworksController::$SpawningCoroutine$d__5
    class $SpawningCoroutine$d__5;
    // private UnityEngine.Vector3 _spawnSize
    // Offset: 0x18
    UnityEngine::Vector3 spawnSize;
    // private System.Single _minSpawnInterval
    // Offset: 0x24
    float minSpawnInterval;
    // private System.Single _maxSpawnInterval
    // Offset: 0x28
    float maxSpawnInterval;
    // private FireworkItemController/Pool _fireworkItemPool
    // Offset: 0x30
    GlobalNamespace::FireworkItemController::Pool* fireworkItemPool;
    // protected System.Void OnEnable()
    // Offset: 0xBEE814
    void OnEnable();
    // private System.Collections.IEnumerator SpawningCoroutine()
    // Offset: 0xBEE840
    System::Collections::IEnumerator* SpawningCoroutine();
    // private System.Void HandleFireworkItemControllerDidFinish(FireworkItemController fireworkItemController)
    // Offset: 0xBEE8E8
    void HandleFireworkItemControllerDidFinish(GlobalNamespace::FireworkItemController* fireworkItemController);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xBEE994
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xBEEA18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FireworksController* New_ctor();
  }; // FireworksController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksController*, "", "FireworksController");
#pragma pack(pop)
