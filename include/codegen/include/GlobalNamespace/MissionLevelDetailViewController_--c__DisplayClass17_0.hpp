// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MissionLevelDetailViewController
#include "GlobalNamespace/MissionLevelDetailViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: ObjectiveListItem
  class ObjectiveListItem;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelDetailViewController/<>c__DisplayClass17_0
  class MissionLevelDetailViewController::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    // public MissionObjective[] missionObjectives
    // Offset: 0x10
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;
    // System.Void <RefreshContent>b__0(System.Int32 idx, ObjectiveListItem objectiveListItem)
    // Offset: 0xBF0264
    void $RefreshContent$b__0(int idx, GlobalNamespace::ObjectiveListItem* objectiveListItem);
    // System.Void <RefreshContent>b__1(System.Int32 idx, GameplayModifierInfoListItem gameplayModifierInfoListItem)
    // Offset: 0xBF0484
    void $RefreshContent$b__1(int idx, GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);
    // public System.Void .ctor()
    // Offset: 0xBF01F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionLevelDetailViewController::$$c__DisplayClass17_0* New_ctor();
  }; // MissionLevelDetailViewController/<>c__DisplayClass17_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass17_0*, "", "MissionLevelDetailViewController/<>c__DisplayClass17_0");
#pragma pack(pop)
