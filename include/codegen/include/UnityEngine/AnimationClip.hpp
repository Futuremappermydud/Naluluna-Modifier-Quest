// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Motion
#include "UnityEngine/Motion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: WrapMode
  struct WrapMode;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AnimationClip
  class AnimationClip : public UnityEngine::Motion {
    public:
    // static private System.Void Internal_CreateAnimationClip(UnityEngine.AnimationClip self)
    // Offset: 0x192289C
    static void Internal_CreateAnimationClip(UnityEngine::AnimationClip* self);
    // public System.Void SampleAnimation(UnityEngine.GameObject go, System.Single time)
    // Offset: 0x19228DC
    void SampleAnimation(UnityEngine::GameObject* go, float time);
    // static System.Void SampleAnimation(UnityEngine.GameObject go, UnityEngine.AnimationClip clip, System.Single inTime, UnityEngine.WrapMode wrapMode)
    // Offset: 0x19229AC
    static void SampleAnimation(UnityEngine::GameObject* go, UnityEngine::AnimationClip* clip, float inTime, UnityEngine::WrapMode wrapMode);
    // public System.Single get_length()
    // Offset: 0x1922A14
    float get_length();
    // public System.Single get_frameRate()
    // Offset: 0x1922A54
    float get_frameRate();
    // public System.Void set_frameRate(System.Single value)
    // Offset: 0x1922A94
    void set_frameRate(float value);
    // public System.Void SetCurve(System.String relativePath, System.Type type, System.String propertyName, UnityEngine.AnimationCurve curve)
    // Offset: 0x1922AE4
    void SetCurve(::Il2CppString* relativePath, System::Type* type, ::Il2CppString* propertyName, UnityEngine::AnimationCurve* curve);
    // public System.Void EnsureQuaternionContinuity()
    // Offset: 0x1922B54
    void EnsureQuaternionContinuity();
    // public UnityEngine.WrapMode get_wrapMode()
    // Offset: 0x192296C
    UnityEngine::WrapMode get_wrapMode();
    // public System.Boolean get_legacy()
    // Offset: 0x1922B94
    bool get_legacy();
    // public System.Void set_legacy(System.Boolean value)
    // Offset: 0x1922BD4
    void set_legacy(bool value);
    // public System.Boolean get_empty()
    // Offset: 0x1922C24
    bool get_empty();
    // public System.Boolean get_hasGenericRootTransform()
    // Offset: 0x1922C64
    bool get_hasGenericRootTransform();
    // public System.Boolean get_hasMotionCurves()
    // Offset: 0x1922CA4
    bool get_hasMotionCurves();
    // public System.Boolean get_hasRootCurves()
    // Offset: 0x1922CE4
    bool get_hasRootCurves();
    // System.Boolean get_hasRootMotion()
    // Offset: 0x1922D24
    bool get_hasRootMotion();
    // public System.Void .ctor()
    // Offset: 0x19227F0
    // Implemented from: UnityEngine.Motion
    // Base method: System.Void Motion::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnimationClip* New_ctor();
  }; // UnityEngine.AnimationClip
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
#pragma pack(pop)
