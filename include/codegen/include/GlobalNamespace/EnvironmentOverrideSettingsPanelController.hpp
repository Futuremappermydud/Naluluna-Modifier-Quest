// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
  // Forward declaring type: EnvironmentsTableViewDataSource
  class EnvironmentsTableViewDataSource;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnvironmentOverrideSettingsPanelController
  class EnvironmentOverrideSettingsPanelController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IRefreshable {
    public:
    // Nested type: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements
    class Elements;
    // private UnityEngine.UI.Toggle _overrideEnvironmentsToggle
    // Offset: 0x18
    UnityEngine::UI::Toggle* overrideEnvironmentsToggle;
    // private UnityEngine.GameObject _elementsGO
    // Offset: 0x20
    UnityEngine::GameObject* elementsGO;
    // private EnvironmentOverrideSettingsPanelController/Elements[] _elements
    // Offset: 0x28
    ::Array<GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*>* elements;
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Offset: 0x30
    HMUI::PanelAnimationSO* presentPanelAnimation;
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Offset: 0x38
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // private EnvironmentsListSO _allEnvironments
    // Offset: 0x40
    GlobalNamespace::EnvironmentsListSO* allEnvironments;
    // private EnvironmentsTableViewDataSource _environmentsTableViewDataSourceTemplate
    // Offset: 0x48
    GlobalNamespace::EnvironmentsTableViewDataSource* environmentsTableViewDataSourceTemplate;
    // private OverrideEnvironmentSettings _overrideEnvironmentSettings
    // Offset: 0x50
    GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // private System.Boolean _initialized
    // Offset: 0x58
    bool initialized;
    // public OverrideEnvironmentSettings get_overrideEnvironmentSettings()
    // Offset: 0xBD4E50
    GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();
    // public System.Void SetData(OverrideEnvironmentSettings overrideEnvironmentSettings)
    // Offset: 0xBD4E58
    void SetData(GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);
    // protected System.Void OnDestroy()
    // Offset: 0xBD5210
    void OnDestroy();
    // private System.Void HandleDropDownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropDownWithTableView, System.Int32 idx)
    // Offset: 0xBD558C
    void HandleDropDownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropDownWithTableView, int idx);
    // private System.Void HandleOverrideEnvironmentsToggleValueChanged(System.Boolean isOn)
    // Offset: 0xBD5754
    void HandleOverrideEnvironmentsToggleValueChanged(bool isOn);
    // private System.Void <HandleOverrideEnvironmentsToggleValueChanged>b__16_0()
    // Offset: 0xBD5870
    void $HandleOverrideEnvironmentsToggleValueChanged$b__16_0();
    // public System.Void Refresh()
    // Offset: 0xBD5398
    // Implemented from: IRefreshable
    // Base method: System.Void IRefreshable::Refresh()
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0xBD5868
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnvironmentOverrideSettingsPanelController* New_ctor();
  }; // EnvironmentOverrideSettingsPanelController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController*, "", "EnvironmentOverrideSettingsPanelController");
#pragma pack(pop)
