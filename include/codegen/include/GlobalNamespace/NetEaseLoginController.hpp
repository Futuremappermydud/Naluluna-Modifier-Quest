// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetEaseLoginController
  class NetEaseLoginController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NetEaseLoginController::$Start$d__3
    class $Start$d__3;
    // Nested type: GlobalNamespace::NetEaseLoginController::$LoginAsync$d__4
    struct $LoginAsync$d__4;
    // private MenuScenesTransitionSetupDataSO _arcadeMenuTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::MenuScenesTransitionSetupDataSO* arcadeMenuTransitionSetupData;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private NetEaseManager _netEaseManager
    // Offset: 0x28
    GlobalNamespace::NetEaseManager* netEaseManager;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0xBFCEE0
    System::Collections::IEnumerator* Start();
    // private System.Void LoginAsync()
    // Offset: 0xBFCF88
    void LoginAsync();
    // public System.Void .ctor()
    // Offset: 0xBFD064
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetEaseLoginController* New_ctor();
  }; // NetEaseLoginController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLoginController*, "", "NetEaseLoginController");
#pragma pack(pop)
