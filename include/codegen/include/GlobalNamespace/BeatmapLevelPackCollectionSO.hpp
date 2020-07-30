// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO : public GlobalNamespace::PersistentScriptableObject, public GlobalNamespace::IBeatmapLevelPackCollection {
    public:
    // private BeatmapLevelPackSO[] _beatmapLevelPacks
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks;
    // private PreviewBeatmapLevelPackSO[] _previewBeatmapLevelPack
    // Offset: 0x20
    ::Array<GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPack;
    // private IBeatmapLevelPack[] _allBeatmapLevelPacks
    // Offset: 0x28
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* allBeatmapLevelPacks;
    // public System.Void LoadAllBeatmapLevelPacksAsync()
    // Offset: 0xB53138
    void LoadAllBeatmapLevelPacksAsync();
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0xB53108
    // Implemented from: IBeatmapLevelPackCollection
    // Base method: IBeatmapLevelPack[] IBeatmapLevelPackCollection::get_beatmapLevelPacks()
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();
    // public System.Void .ctor()
    // Offset: 0xB532B8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelPackCollectionSO* New_ctor();
  }; // BeatmapLevelPackCollectionSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollectionSO*, "", "BeatmapLevelPackCollectionSO");
#pragma pack(pop)
