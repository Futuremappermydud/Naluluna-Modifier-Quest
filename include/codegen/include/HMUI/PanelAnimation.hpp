// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.PanelAnimation
  class PanelAnimation : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::PanelAnimation::$AnimationCoroutine$d__1
    class $AnimationCoroutine$d__1;
    // public System.Void StartAnimation(UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, System.Single duration, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x10C93BC
    void StartAnimation(UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, float duration, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Collections.IEnumerator AnimationCoroutine(System.Single duration, UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x10C952C
    System::Collections::IEnumerator* AnimationCoroutine(float duration, UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Void .ctor()
    // Offset: 0x10C9690
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PanelAnimation* New_ctor();
  }; // HMUI.PanelAnimation
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation*, "HMUI", "PanelAnimation");
#pragma pack(pop)
