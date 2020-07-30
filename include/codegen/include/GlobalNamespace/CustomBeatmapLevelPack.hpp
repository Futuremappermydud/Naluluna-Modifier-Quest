// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
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
  // Forward declaring type: CustomBeatmapLevelCollection
  class CustomBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomBeatmapLevelPack
  class CustomBeatmapLevelPack : public ::Il2CppObject, public GlobalNamespace::IBeatmapLevelPack, public GlobalNamespace::IAnnotatedBeatmapLevelCollection {
    public:
    // private System.String _packID
    // Offset: 0x10
    ::Il2CppString* packID;
    // private System.String _packName
    // Offset: 0x18
    ::Il2CppString* packName;
    // private System.String _shortPackName
    // Offset: 0x20
    ::Il2CppString* shortPackName;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x28
    UnityEngine::Sprite* coverImage;
    // private CustomBeatmapLevelCollection _customBeatmapLevelCollection
    // Offset: 0x30
    GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection;
    // public System.Boolean get_isPackAlwaysOwned()
    // Offset: 0xBCDE44
    bool get_isPackAlwaysOwned();
    // public System.Void .ctor(System.String packID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, CustomBeatmapLevelCollection customBeatmapLevelCollection)
    // Offset: 0xBCDE4C
    static CustomBeatmapLevelPack* New_ctor(::Il2CppString* packID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection);
    // public System.String get_packID()
    // Offset: 0xBCDE14
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0xBCDE1C
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0xBCDE24
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0xBCDE2C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0xBCDE34
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0xBCDE3C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
  }; // CustomBeatmapLevelPack
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelPack*, "", "CustomBeatmapLevelPack");
#pragma pack(pop)
