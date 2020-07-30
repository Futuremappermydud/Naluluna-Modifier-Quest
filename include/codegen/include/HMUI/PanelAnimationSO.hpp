// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.PanelAnimationSO
  class PanelAnimationSO : public UnityEngine::ScriptableObject {
    public:
    // private System.Single _duration
    // Offset: 0x18
    float duration;
    // private UnityEngine.AnimationCurve _scaleXAnimationCurve
    // Offset: 0x20
    UnityEngine::AnimationCurve* scaleXAnimationCurve;
    // private UnityEngine.AnimationCurve _scaleYAnimationCurve
    // Offset: 0x28
    UnityEngine::AnimationCurve* scaleYAnimationCurve;
    // private UnityEngine.AnimationCurve _alphaAnimationCurve
    // Offset: 0x30
    UnityEngine::AnimationCurve* alphaAnimationCurve;
    // private UnityEngine.AnimationCurve _parentAlphaAnimationCurve
    // Offset: 0x38
    UnityEngine::AnimationCurve* parentAlphaAnimationCurve;
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go)
    // Offset: 0x10C9A1C
    void ExecuteAnimation(UnityEngine::GameObject* go);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, System.Action finishedCallback)
    // Offset: 0x10C9AEC
    void ExecuteAnimation(UnityEngine::GameObject* go, System::Action* finishedCallback);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, UnityEngine.CanvasGroup parentCanvasGroup, System.Action finishedCallback)
    // Offset: 0x10C9AFC
    void ExecuteAnimation(UnityEngine::GameObject* go, UnityEngine::CanvasGroup* parentCanvasGroup, System::Action* finishedCallback);
    // public System.Void ExecuteAnimation(UnityEngine.GameObject go, UnityEngine.CanvasGroup parentCanvasGroup, System.Boolean instant, System.Action finishedCallback)
    // Offset: 0x10C9A2C
    void ExecuteAnimation(UnityEngine::GameObject* go, UnityEngine::CanvasGroup* parentCanvasGroup, bool instant, System::Action* finishedCallback);
    // public System.Void .ctor()
    // Offset: 0x10C9B08
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PanelAnimationSO* New_ctor();
  }; // HMUI.PanelAnimationSO
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimationSO*, "HMUI", "PanelAnimationSO");
#pragma pack(pop)
