// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MissionResultsViewController
#include "GlobalNamespace/MissionResultsViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
  // Forward declaring type: ResultObjectiveListItem
  class ResultObjectiveListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionResultsViewController/<>c__DisplayClass28_0
  class MissionResultsViewController::$$c__DisplayClass28_0 : public ::Il2CppObject {
    public:
    // public System.Boolean levelCleared
    // Offset: 0x10
    bool levelCleared;
    // public MissionResultsViewController <>4__this
    // Offset: 0x18
    GlobalNamespace::MissionResultsViewController* $$4__this;
    // public MissionObjective[] missionObjectives
    // Offset: 0x20
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // public MissionObjectiveResult[] missionObjectiveResults
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults;
    // System.Void <SetDataToUI>b__0(System.Int32 idx, ResultObjectiveListItem objectiveListItem)
    // Offset: 0xBF8184
    void $SetDataToUI$b__0(int idx, GlobalNamespace::ResultObjectiveListItem* objectiveListItem);
    // public System.Void .ctor()
    // Offset: 0xBF80AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionResultsViewController::$$c__DisplayClass28_0* New_ctor();
  }; // MissionResultsViewController/<>c__DisplayClass28_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController::$$c__DisplayClass28_0*, "", "MissionResultsViewController/<>c__DisplayClass28_0");
#pragma pack(pop)
