// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:32 PM
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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _modifierNameText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* modifierNameText;
    // private TMPro.TextMeshProUGUI _modifierDescriptionText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* modifierDescriptionText;
    // private UnityEngine.UI.Image _iconImage
    // Offset: 0x28
    UnityEngine::UI::Image* iconImage;
    // private UnityEngine.UI.Image _separatorImage
    // Offset: 0x30
    UnityEngine::UI::Image* separatorImage;
    // public System.Void set_modifierName(System.String value)
    // Offset: 0xB3E364
    void set_modifierName(::Il2CppString* value);
    // public System.Void set_modifierDescription(System.String value)
    // Offset: 0xB3E380
    void set_modifierDescription(::Il2CppString* value);
    // public System.Void set_modifierIcon(UnityEngine.Sprite value)
    // Offset: 0xB3E39C
    void set_modifierIcon(UnityEngine::Sprite* value);
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0xB3E3B8
    void set_showSeparator(bool value);
    // public System.Void .ctor()
    // Offset: 0xB3E3D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayModifierInfoListItem* New_ctor();
  }; // GameplayModifierInfoListItem
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
#pragma pack(pop)
