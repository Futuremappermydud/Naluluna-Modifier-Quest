// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.TextSegmentedControlCellBase
#include "HMUI/TextSegmentedControlCellBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TextSegmentedControlCellNew
  class TextSegmentedControlCellNew : public HMUI::TextSegmentedControlCellBase {
    public:
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x40
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.Color _normalTextColor
    // Offset: 0x48
    UnityEngine::Color normalTextColor;
    // private UnityEngine.Color _selectedTextColor
    // Offset: 0x58
    UnityEngine::Color selectedTextColor;
    // private UnityEngine.Color _highlightTextColor
    // Offset: 0x68
    UnityEngine::Color highlightTextColor;
    // private UnityEngine.Color _selectedHighlightTextColor
    // Offset: 0x78
    UnityEngine::Color selectedHighlightTextColor;
    // private UnityEngine.Color _normalBGColor
    // Offset: 0x88
    UnityEngine::Color normalBGColor;
    // private UnityEngine.Color _selectedBGColor
    // Offset: 0x98
    UnityEngine::Color selectedBGColor;
    // private UnityEngine.Color _highlightBGColor
    // Offset: 0xA8
    UnityEngine::Color highlightBGColor;
    // private UnityEngine.Color _selectedHighlightBGColor
    // Offset: 0xB8
    UnityEngine::Color selectedHighlightBGColor;
    // private System.Void RefreshVisuals()
    // Offset: 0x10D4720
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0x10D471C
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::SelectionDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0x10D482C
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::HighlightDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x10D4830
    // Implemented from: HMUI.TextSegmentedControlCellBase
    // Base method: System.Void TextSegmentedControlCellBase::.ctor()
    // Base method: System.Void SegmentedControlCell::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextSegmentedControlCellNew* New_ctor();
  }; // HMUI.TextSegmentedControlCellNew
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSegmentedControlCellNew*, "HMUI", "TextSegmentedControlCellNew");
#pragma pack(pop)
