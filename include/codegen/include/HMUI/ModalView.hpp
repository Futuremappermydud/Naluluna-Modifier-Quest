// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ModalView
  class ModalView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ModalView::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // private HMUI.PanelAnimationSO _presentPanelAnimations
    // Offset: 0x18
    HMUI::PanelAnimationSO* presentPanelAnimations;
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Offset: 0x20
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // private System.Action _blockerClickedEvent
    // Offset: 0x28
    System::Action* blockerClickedEvent;
    // static field const value: static private System.Int32 kSortingLayer
    static constexpr const int kSortingLayer = 30000;
    // Get static field: static private System.Int32 kSortingLayer
    static int _get_kSortingLayer();
    // Set static field: static private System.Int32 kSortingLayer
    static void _set_kSortingLayer(int value);
    // private System.Boolean _isShown
    // Offset: 0x30
    bool isShown;
    // private System.Boolean _viewIsValid
    // Offset: 0x31
    bool viewIsValid;
    // private UnityEngine.Canvas _mainCanvas
    // Offset: 0x38
    UnityEngine::Canvas* mainCanvas;
    // private UnityEngine.CanvasGroup _parentCanvasGroup
    // Offset: 0x40
    UnityEngine::CanvasGroup* parentCanvasGroup;
    // private UnityEngine.GameObject _blockerGO
    // Offset: 0x48
    UnityEngine::GameObject* blockerGO;
    // public System.Void add__blockerClickedEvent(System.Action value)
    // Offset: 0xEC34F0
    void add__blockerClickedEvent(System::Action* value);
    // public System.Void remove__blockerClickedEvent(System.Action value)
    // Offset: 0xEC37A8
    void remove__blockerClickedEvent(System::Action* value);
    // protected System.Void OnDisable()
    // Offset: 0xED29BC
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0xED29C8
    void OnDestroy();
    // private System.Void SetupView()
    // Offset: 0xED2A78
    void SetupView();
    // public System.Void Hide(System.Boolean animated, System.Action finishedCallback)
    // Offset: 0xEC3950
    void Hide(bool animated, System::Action* finishedCallback);
    // public System.Void Show(System.Boolean animated, System.Boolean moveToCenter, System.Action finishedCallback)
    // Offset: 0xEC3AA4
    void Show(bool animated, bool moveToCenter, System::Action* finishedCallback);
    // private UnityEngine.GameObject CreateBlocker(UnityEngine.Canvas rootCanvas)
    // Offset: 0xED2DEC
    UnityEngine::GameObject* CreateBlocker(UnityEngine::Canvas* rootCanvas);
    // private System.Void HandleBlockerButtonClicked()
    // Offset: 0xED31FC
    void HandleBlockerButtonClicked();
    // public System.Void .ctor()
    // Offset: 0xED3210
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ModalView* New_ctor();
  }; // HMUI.ModalView
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView*, "HMUI", "ModalView");
#pragma pack(pop)
