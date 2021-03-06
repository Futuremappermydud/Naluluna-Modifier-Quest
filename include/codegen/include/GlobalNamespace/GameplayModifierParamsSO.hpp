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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifierParamsSO
  class GameplayModifierParamsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _modifierNameLocalizationKey
    // Offset: 0x18
    ::Il2CppString* modifierNameLocalizationKey;
    // private System.String _descriptionLocalizationKey
    // Offset: 0x20
    ::Il2CppString* descriptionLocalizationKey;
    // private System.Single _multiplier
    // Offset: 0x28
    float multiplier;
    // private UnityEngine.Sprite _icon
    // Offset: 0x30
    UnityEngine::Sprite* icon;
    // private GameplayModifierParamsSO[] _mutuallyExclusives
    // Offset: 0x38
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* mutuallyExclusives;
    // public System.String get_modifierNameLocalizationKey()
    // Offset: 0xB3F110
    ::Il2CppString* get_modifierNameLocalizationKey();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0xB3F118
    ::Il2CppString* get_descriptionLocalizationKey();
    // public System.Single get_multiplier()
    // Offset: 0xB3F120
    float get_multiplier();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0xB3F128
    UnityEngine::Sprite* get_icon();
    // public GameplayModifierParamsSO[] get_mutuallyExclusives()
    // Offset: 0xB3F130
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* get_mutuallyExclusives();
    // public System.Void .ctor()
    // Offset: 0xB3F138
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayModifierParamsSO* New_ctor();
  }; // GameplayModifierParamsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierParamsSO*, "", "GameplayModifierParamsSO");
#pragma pack(pop)
