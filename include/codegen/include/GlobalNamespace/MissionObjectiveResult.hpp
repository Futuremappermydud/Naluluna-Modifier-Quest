// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveResult
  class MissionObjectiveResult : public ::Il2CppObject {
    public:
    // private MissionObjective <missionObjective>k__BackingField
    // Offset: 0x10
    GlobalNamespace::MissionObjective* missionObjective;
    // private System.Boolean <cleared>k__BackingField
    // Offset: 0x18
    bool cleared;
    // private System.Int32 <value>k__BackingField
    // Offset: 0x1C
    int value;
    // public MissionObjective get_missionObjective()
    // Offset: 0xBF7370
    GlobalNamespace::MissionObjective* get_missionObjective();
    // private System.Void set_missionObjective(MissionObjective value)
    // Offset: 0xBF7378
    void set_missionObjective(GlobalNamespace::MissionObjective* value);
    // public System.Boolean get_cleared()
    // Offset: 0xBF7380
    bool get_cleared();
    // private System.Void set_cleared(System.Boolean value)
    // Offset: 0xBF7388
    void set_cleared(bool value);
    // public System.Int32 get_value()
    // Offset: 0xBF7394
    int get_value();
    // private System.Void set_value(System.Int32 value)
    // Offset: 0xBF739C
    void set_value(int value);
    // public System.Void .ctor(MissionObjective missionObjective, System.Boolean cleared, System.Int32 value)
    // Offset: 0xBF6DA0
    static MissionObjectiveResult* New_ctor(GlobalNamespace::MissionObjective* missionObjective, bool cleared, int value);
  }; // MissionObjectiveResult
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveResult*, "", "MissionObjectiveResult");
#pragma pack(pop)
