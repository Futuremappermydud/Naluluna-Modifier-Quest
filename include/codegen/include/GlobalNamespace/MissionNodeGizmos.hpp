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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionNodeGizmos
  class MissionNodeGizmos : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNode _missionNode
    // Offset: 0x18
    GlobalNamespace::MissionNode* missionNode;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x20
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private CampaignProgressModel _missionProgressModel
    // Offset: 0x28
    GlobalNamespace::CampaignProgressModel* missionProgressModel;
    // public System.Void .ctor()
    // Offset: 0xC09C18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionNodeGizmos* New_ctor();
  }; // MissionNodeGizmos
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeGizmos*, "", "MissionNodeGizmos");
#pragma pack(pop)
