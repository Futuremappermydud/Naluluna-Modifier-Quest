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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
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
  // Autogenerated type: FlyingObjectEffect
  class FlyingObjectEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AnimationCurve _moveAnimationCurve
    // Offset: 0x18
    UnityEngine::AnimationCurve* moveAnimationCurve;
    // private System.Single _shakeFrequency
    // Offset: 0x20
    float shakeFrequency;
    // private System.Single _shakeStrength
    // Offset: 0x24
    float shakeStrength;
    // private UnityEngine.AnimationCurve _shakeStrengthAnimationCurve
    // Offset: 0x28
    UnityEngine::AnimationCurve* shakeStrengthAnimationCurve;
    // private System.Action`1<FlyingObjectEffect> didFinishEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::FlyingObjectEffect*>* didFinishEvent;
    // private System.Boolean _initialized
    // Offset: 0x38
    bool initialized;
    // private UnityEngine.Quaternion _shakeRotation
    // Offset: 0x3C
    UnityEngine::Quaternion shakeRotation;
    // private UnityEngine.Quaternion _rotation
    // Offset: 0x4C
    UnityEngine::Quaternion rotation;
    // private System.Single _elapsedTime
    // Offset: 0x5C
    float elapsedTime;
    // private UnityEngine.Vector3 _startPos
    // Offset: 0x60
    UnityEngine::Vector3 startPos;
    // private UnityEngine.Vector3 _targetPos
    // Offset: 0x6C
    UnityEngine::Vector3 targetPos;
    // private System.Single _duration
    // Offset: 0x78
    float duration;
    // private System.Boolean _shake
    // Offset: 0x7C
    bool shake;
    // public System.Void add_didFinishEvent(System.Action`1<FlyingObjectEffect> value)
    // Offset: 0xBEFFCC
    void add_didFinishEvent(System::Action_1<GlobalNamespace::FlyingObjectEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FlyingObjectEffect> value)
    // Offset: 0xBF0070
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::FlyingObjectEffect*>* value);
    // public System.Void InitAndPresent(System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, System.Boolean shake)
    // Offset: 0xBF0114
    void InitAndPresent(float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, bool shake);
    // protected System.Void Update()
    // Offset: 0xBF0200
    void Update();
    // protected System.Void ManualUpdate(System.Single t)
    // Offset: 0xFFFFFFFF
    void ManualUpdate(float t);
    // protected System.Void .ctor()
    // Offset: 0xBF04B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingObjectEffect* New_ctor();
  }; // FlyingObjectEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
#pragma pack(pop)
