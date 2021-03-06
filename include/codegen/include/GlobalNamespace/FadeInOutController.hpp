// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FadeInOutController
  class FadeInOutController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FadeInOutController::$Fade$d__12
    class $Fade$d__12;
    // private FloatSO _easeValue
    // Offset: 0x18
    GlobalNamespace::FloatSO* easeValue;
    // private UnityEngine.AnimationCurve _fadeInCurve
    // Offset: 0x20
    UnityEngine::AnimationCurve* fadeInCurve;
    // private UnityEngine.AnimationCurve _fadeOutCurve
    // Offset: 0x28
    UnityEngine::AnimationCurve* fadeOutCurve;
    // private System.Single _fadeInStartDelay
    // Offset: 0x30
    float fadeInStartDelay;
    // private System.Single _defaultFadeOutDuration
    // Offset: 0x34
    float defaultFadeOutDuration;
    // private System.Single _defaultFadeInDuration
    // Offset: 0x38
    float defaultFadeInDuration;
    // private UnityEngine.Coroutine _coroutine
    // Offset: 0x40
    UnityEngine::Coroutine* coroutine;
    // public System.Void FadeOutInstant()
    // Offset: 0xCB0A9C
    void FadeOutInstant();
    // public System.Void FadeIn()
    // Offset: 0xCB0B74
    void FadeIn();
    // public System.Void FadeOut()
    // Offset: 0xCB0C54
    void FadeOut();
    // public System.Void FadeIn(System.Single duration)
    // Offset: 0xCB0B7C
    void FadeIn(float duration);
    // public System.Void FadeOut(System.Single duration)
    // Offset: 0xCB0AA4
    void FadeOut(float duration);
    // private System.Collections.IEnumerator Fade(System.Single fromValue, System.Single toValue, System.Single duration, System.Single startDelay, UnityEngine.AnimationCurve curve)
    // Offset: 0xCB0C5C
    System::Collections::IEnumerator* Fade(float fromValue, float toValue, float duration, float startDelay, UnityEngine::AnimationCurve* curve);
    // public System.Void .ctor()
    // Offset: 0xCB0D4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FadeInOutController* New_ctor();
  }; // FadeInOutController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOutController*, "", "FadeInOutController");
#pragma pack(pop)
