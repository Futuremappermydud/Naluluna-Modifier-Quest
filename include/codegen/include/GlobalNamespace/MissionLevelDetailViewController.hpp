// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: ObjectiveListItemsList
  class ObjectiveListItemsList;
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelDetailViewController
  class MissionLevelDetailViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x68
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private UnityEngine.UI.Button _playButton
    // Offset: 0x70
    UnityEngine::UI::Button* playButton;
    // private TMPro.TextMeshProUGUI _songNameText
    // Offset: 0x78
    TMPro::TextMeshProUGUI* songNameText;
    // private TMPro.TextMeshProUGUI _missionText
    // Offset: 0x80
    TMPro::TextMeshProUGUI* missionText;
    // private TMPro.TextMeshProUGUI _difficultyText
    // Offset: 0x88
    TMPro::TextMeshProUGUI* difficultyText;
    // private TMPro.TextMeshProUGUI _characteristicsText
    // Offset: 0x90
    TMPro::TextMeshProUGUI* characteristicsText;
    // private ObjectiveListItemsList _objectiveListItems
    // Offset: 0x98
    GlobalNamespace::ObjectiveListItemsList* objectiveListItems;
    // private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    // Offset: 0xA0
    GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList;
    // private UnityEngine.GameObject _modifiersPanelGO
    // Offset: 0xA8
    UnityEngine::GameObject* modifiersPanelGO;
    // private System.Action`1<MissionLevelDetailViewController> didPressPlayButtonEvent
    // Offset: 0xB0
    System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* didPressPlayButtonEvent;
    // private MissionNode _missionNode
    // Offset: 0xB8
    GlobalNamespace::MissionNode* missionNode;
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0xBEFCC8
    void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0xBEFD6C
    void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public MissionNode get_missionNode()
    // Offset: 0xBEFE10
    GlobalNamespace::MissionNode* get_missionNode();
    // public System.Void Setup(MissionNode missionNode)
    // Offset: 0xBEFE18
    void Setup(GlobalNamespace::MissionNode* missionNode);
    // public System.Void RefreshContent()
    // Offset: 0xBEFE5C
    void RefreshContent();
    // private System.Void PlayButtonPressed()
    // Offset: 0xBF01F8
    void PlayButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xBF014C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xBF025C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionLevelDetailViewController* New_ctor();
  }; // MissionLevelDetailViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelDetailViewController*, "", "MissionLevelDetailViewController");
#pragma pack(pop)
