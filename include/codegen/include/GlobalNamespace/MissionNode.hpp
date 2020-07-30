// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
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
  // Forward declaring type: MissionDataSO
  class MissionDataSO;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionNode
  class MissionNode : public UnityEngine::MonoBehaviour {
    public:
    // private MissionDataSO _missionDataSO
    // Offset: 0x18
    GlobalNamespace::MissionDataSO* missionDataSO;
    // private System.String _letterPartName
    // Offset: 0x20
    ::Il2CppString* letterPartName;
    // private System.Int32 _numberPartName
    // Offset: 0x28
    int numberPartName;
    // private UnityEngine.RectTransform _rectTransform
    // Offset: 0x30
    UnityEngine::RectTransform* rectTransform;
    // private MissionNodeVisualController _missionNodeVisualController
    // Offset: 0x38
    GlobalNamespace::MissionNodeVisualController* missionNodeVisualController;
    // private MissionNode[] _childNodes
    // Offset: 0x40
    ::Array<GlobalNamespace::MissionNode*>* childNodes;
    // public MissionDataSO get_missionData()
    // Offset: 0xBF3940
    GlobalNamespace::MissionDataSO* get_missionData();
    // public MissionNode[] get_childNodes()
    // Offset: 0xBF3948
    ::Array<GlobalNamespace::MissionNode*>* get_childNodes();
    // public MissionNodeVisualController get_missionNodeVisualController()
    // Offset: 0xBF3950
    GlobalNamespace::MissionNodeVisualController* get_missionNodeVisualController();
    // public System.String get_letterPartName()
    // Offset: 0xBF3958
    ::Il2CppString* get_letterPartName();
    // public System.Int32 get_numberPartName()
    // Offset: 0xBF3960
    int get_numberPartName();
    // public System.String get_missionId()
    // Offset: 0xBF3968
    ::Il2CppString* get_missionId();
    // public System.String get_formattedMissionNodeName()
    // Offset: 0xBF3998
    ::Il2CppString* get_formattedMissionNodeName();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0xBF2B50
    UnityEngine::Vector2 get_position();
    // public System.Single get_radius()
    // Offset: 0xBF3A1C
    float get_radius();
    // public System.Void .ctor()
    // Offset: 0xBF3A60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionNode* New_ctor();
  }; // MissionNode
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNode*, "", "MissionNode");
#pragma pack(pop)
