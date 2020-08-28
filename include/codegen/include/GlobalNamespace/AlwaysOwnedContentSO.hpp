// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AlwaysOwnedContentSO
  class AlwaysOwnedContentSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelPackSO[] _alwaysOwnedPacks
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* alwaysOwnedPacks;
    // private BeatmapLevelSO[] _alwaysOwnedBeatmapLevels
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLevelSO*>* alwaysOwnedBeatmapLevels;
    // public BeatmapLevelPackSO[] get_alwaysOwnedPacks()
    // Offset: 0xB855E4
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* get_alwaysOwnedPacks();
    // public BeatmapLevelSO[] get_alwaysOwnedBeatmapLevels()
    // Offset: 0xB855EC
    ::Array<GlobalNamespace::BeatmapLevelSO*>* get_alwaysOwnedBeatmapLevels();
    // public System.Void .ctor()
    // Offset: 0xB855F4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AlwaysOwnedContentSO* New_ctor();
  }; // AlwaysOwnedContentSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysOwnedContentSO*, "", "AlwaysOwnedContentSO");
#pragma pack(pop)
