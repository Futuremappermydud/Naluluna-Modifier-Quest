// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MissionLevelModifiersViewController
#include "GlobalNamespace/MissionLevelModifiersViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelModifiersViewController/<>c__DisplayClass7_0
  class MissionLevelModifiersViewController::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;
    // System.Void <RefreshContent>b__0(System.Int32 idx, GameplayModifierInfoListItem gameplayModifierInfoListItem)
    // Offset: 0xBF18F4
    void $RefreshContent$b__0(int idx, GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);
    // public System.Void .ctor()
    // Offset: 0xBF18E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionLevelModifiersViewController::$$c__DisplayClass7_0* New_ctor();
  }; // MissionLevelModifiersViewController/<>c__DisplayClass7_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0*, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
#pragma pack(pop)
