// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicTableCell
  class BeatmapCharacteristicTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x50
    TMPro::TextMeshProUGUI* nameText;
    // private UnityEngine.UI.Image _iconImage
    // Offset: 0x58
    UnityEngine::UI::Image* iconImage;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x60
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _selectionImage
    // Offset: 0x68
    UnityEngine::UI::Image* selectionImage;
    // private UnityEngine.Color _bgNormalColor
    // Offset: 0x70
    UnityEngine::Color bgNormalColor;
    // private UnityEngine.Color _bgHighlightColor
    // Offset: 0x80
    UnityEngine::Color bgHighlightColor;
    // public System.Void SetData(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x19776A8
    void SetData(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void RefreshVisuals()
    // Offset: 0x1977710
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x197770C
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x1977798
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x197779C
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicTableCell* New_ctor();
  }; // BeatmapCharacteristicTableCell
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicTableCell*, "", "BeatmapCharacteristicTableCell");
#pragma pack(pop)
