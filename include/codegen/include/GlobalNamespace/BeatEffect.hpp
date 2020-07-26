// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatEffect
  class BeatEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatEffect::Pool
    class Pool;
    // private System.Action`1<BeatEffect> didFinishEvent
    // Offset: 0x18
    System::Action_1<GlobalNamespace::BeatEffect*>* didFinishEvent;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Offset: 0x20
    UnityEngine::SpriteRenderer* spriteRenderer;
    // private UnityEngine.Transform _spriteTransform
    // Offset: 0x28
    UnityEngine::Transform* spriteTransform;
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Offset: 0x38
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // private UnityEngine.AnimationCurve _spriteXScaleCurve
    // Offset: 0x40
    UnityEngine::AnimationCurve* spriteXScaleCurve;
    // private UnityEngine.AnimationCurve _spriteYScaleCurve
    // Offset: 0x48
    UnityEngine::AnimationCurve* spriteYScaleCurve;
    // private UnityEngine.AnimationCurve _transparencyCurve
    // Offset: 0x50
    UnityEngine::AnimationCurve* transparencyCurve;
    // private System.Single _animationDuration
    // Offset: 0x58
    float animationDuration;
    // private System.Single _elapsedTime
    // Offset: 0x5C
    float elapsedTime;
    // private UnityEngine.Color _color
    // Offset: 0x60
    UnityEngine::Color color;
    // public System.Void add_didFinishEvent(System.Action`1<BeatEffect> value)
    // Offset: 0x19730B0
    void add_didFinishEvent(System::Action_1<GlobalNamespace::BeatEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BeatEffect> value)
    // Offset: 0x1973154
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::BeatEffect*>* value);
    // public System.Void Init(UnityEngine.Color color, System.Single animationDuration, UnityEngine.Quaternion rotation)
    // Offset: 0x19731F8
    void Init(UnityEngine::Color color, float animationDuration, UnityEngine::Quaternion rotation);
    // protected System.Void Update()
    // Offset: 0x19732F0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19734C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatEffect* New_ctor();
  }; // BeatEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffect*, "", "BeatEffect");
#pragma pack(pop)
