// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: IPlaylist
#include "GlobalNamespace/IPlaylist.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UserFavoritesPlaylistSO
  class UserFavoritesPlaylistSO : public UnityEngine::ScriptableObject, public GlobalNamespace::IPlaylist, public GlobalNamespace::IAnnotatedBeatmapLevelCollection {
    public:
    // private System.String _playListLocalizedName
    // Offset: 0x18
    ::Il2CppString* playListLocalizedName;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x20
    UnityEngine::Sprite* coverImage;
    // private IBeatmapLevelCollection _beatmapLevelCollection
    // Offset: 0x28
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // public System.Void SetupFromLevelPackCollection(System.Collections.Generic.HashSet`1<System.String> userFavoritesBeatmapLevelIds, IBeatmapLevelPackCollection beatmapLevelPackCollection)
    // Offset: 0xC38C84
    void SetupFromLevelPackCollection(System::Collections::Generic::HashSet_1<::Il2CppString*>* userFavoritesBeatmapLevelIds, GlobalNamespace::IBeatmapLevelPackCollection* beatmapLevelPackCollection);
    // public System.String get_collectionName()
    // Offset: 0xC38C68
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0xC38C74
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0xC38C7C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0xC38CCC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static UserFavoritesPlaylistSO* New_ctor();
  }; // UserFavoritesPlaylistSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserFavoritesPlaylistSO*, "", "UserFavoritesPlaylistSO");
#pragma pack(pop)
