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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TweenPosition
  class TweenPosition : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TweenPosition::$AnimateToNewPosCoroutine$d__11
    class $AnimateToNewPosCoroutine$d__11;
    // public System.Boolean _unscaledTime
    // Offset: 0x18
    bool unscaledTime;
    // public System.Boolean _localPosition
    // Offset: 0x19
    bool localPosition;
    // public System.Single _duration
    // Offset: 0x1C
    float duration;
    // public UnityEngine.AnimationCurve _animationCurve
    // Offset: 0x20
    UnityEngine::AnimationCurve* animationCurve;
    // private UnityEngine.Transform _transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // private UnityEngine.Vector3 _targetPos
    // Offset: 0x30
    UnityEngine::Vector3 targetPos;
    // public System.Void set_TargetPos(UnityEngine.Vector3 value)
    // Offset: 0xCBE77C
    void set_TargetPos(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_TargetPos()
    // Offset: 0xCBE90C
    UnityEngine::Vector3 get_TargetPos();
    // protected System.Void Awake()
    // Offset: 0xCBE918
    void Awake();
    // private System.Void AnimateToNewPos(UnityEngine.Vector3 pos)
    // Offset: 0xCBE85C
    void AnimateToNewPos(UnityEngine::Vector3 pos);
    // private System.Collections.IEnumerator AnimateToNewPosCoroutine(UnityEngine.Vector3 pos)
    // Offset: 0xCBE948
    System::Collections::IEnumerator* AnimateToNewPosCoroutine(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0xCBE9F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TweenPosition* New_ctor();
  }; // TweenPosition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TweenPosition*, "", "TweenPosition");
#pragma pack(pop)
