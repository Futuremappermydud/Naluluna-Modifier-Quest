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
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionNodeSelectionManager
  class MissionNodeSelectionManager : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodesManager _missionNodesManager
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // private System.Action`1<MissionNodeVisualController> didSelectMissionNodeEvent
    // Offset: 0x20
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* didSelectMissionNodeEvent;
    // private MissionNode[] _missionNodes
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionNode*>* missionNodes;
    // private MissionNodeVisualController _selectedNode
    // Offset: 0x30
    GlobalNamespace::MissionNodeVisualController* selectedNode;
    // public System.Void add_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0xBF3DF0
    void add_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0xBF3E94
    void remove_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void DeselectSelectedNode()
    // Offset: 0xBF3F38
    void DeselectSelectedNode();
    // protected System.Void Start()
    // Offset: 0xBF4008
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xBF4298
    void OnDestroy();
    // private System.Void HandleNodeWasSelect(MissionNodeVisualController missionNode)
    // Offset: 0xBF4544
    void HandleNodeWasSelect(GlobalNamespace::MissionNodeVisualController* missionNode);
    // private System.Void HandleNodeWasDisplayed(MissionNodeVisualController missionNode)
    // Offset: 0xBF4618
    void HandleNodeWasDisplayed(GlobalNamespace::MissionNodeVisualController* missionNode);
    // public System.Void .ctor()
    // Offset: 0xBF46A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionNodeSelectionManager* New_ctor();
  }; // MissionNodeSelectionManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
#pragma pack(pop)
