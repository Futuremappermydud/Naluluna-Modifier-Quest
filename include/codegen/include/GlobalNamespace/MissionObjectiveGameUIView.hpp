// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite _notFailedIcon
    // Offset: 0x18
    UnityEngine::Sprite* notFailedIcon;
    // private UnityEngine.Sprite _failedIcon
    // Offset: 0x20
    UnityEngine::Sprite* failedIcon;
    // private UnityEngine.Sprite _notClearedIcon
    // Offset: 0x28
    UnityEngine::Sprite* notClearedIcon;
    // private UnityEngine.Sprite _clearedIcon
    // Offset: 0x30
    UnityEngine::Sprite* clearedIcon;
    // private UnityEngine.UI.Image _resultIcon
    // Offset: 0x38
    UnityEngine::UI::Image* resultIcon;
    // private UnityEngine.Color _finalClearIconColor
    // Offset: 0x40
    UnityEngine::Color finalClearIconColor;
    // private UnityEngine.Color _finalFailIconColor
    // Offset: 0x50
    UnityEngine::Color finalFailIconColor;
    // private UnityEngine.Color _nonFinalIconColor
    // Offset: 0x60
    UnityEngine::Color nonFinalIconColor;
    // private UnityEngine.ParticleSystem _clearedPS
    // Offset: 0x70
    UnityEngine::ParticleSystem* clearedPS;
    // private System.Int32 _numberOfParticles
    // Offset: 0x78
    int numberOfParticles;
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x80
    TMPro::TextMeshProUGUI* nameText;
    // private TMPro.TextMeshProUGUI _valueText
    // Offset: 0x88
    TMPro::TextMeshProUGUI* valueText;
    // private TMPro.TextMeshProUGUI _conditionText
    // Offset: 0x90
    TMPro::TextMeshProUGUI* conditionText;
    // private MissionObjectiveChecker _missionObjectiveChecker
    // Offset: 0x98
    GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker;
    // public System.Void SetMissionObjectiveChecker(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0xBF6F84
    void SetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0xBF7358
    void HandleMissionObjectiveStatusDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveCheckedValueDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0xBF735C
    void HandleMissionObjectiveCheckedValueDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void RefreshIcon()
    // Offset: 0xBF71E8
    void RefreshIcon();
    // private System.Void RefreshValue()
    // Offset: 0xBF72FC
    void RefreshValue();
    // public System.Void .ctor()
    // Offset: 0xBF7360
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionObjectiveGameUIView* New_ctor();
  }; // MissionObjectiveGameUIView
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveGameUIView*, "", "MissionObjectiveGameUIView");
#pragma pack(pop)
