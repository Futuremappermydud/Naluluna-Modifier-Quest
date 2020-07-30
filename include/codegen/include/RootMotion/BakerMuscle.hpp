// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BakerMuscle
  class BakerMuscle : public ::Il2CppObject {
    public:
    // public UnityEngine.AnimationCurve curve
    // Offset: 0x10
    UnityEngine::AnimationCurve* curve;
    // private System.Int32 muscleIndex
    // Offset: 0x18
    int muscleIndex;
    // private System.String propertyName
    // Offset: 0x20
    ::Il2CppString* propertyName;
    // public System.Void .ctor(System.Int32 muscleIndex)
    // Offset: 0x1387D8C
    static BakerMuscle* New_ctor(int muscleIndex);
    // private System.String MuscleNameToPropertyName(System.String n)
    // Offset: 0x1387E08
    ::Il2CppString* MuscleNameToPropertyName(::Il2CppString* n);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x13884F8
    void MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x13885AC
    void SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp);
    // public System.Void Reset()
    // Offset: 0x1388490
    void Reset();
    // public System.Void SetKeyframe(System.Single time, System.Single[] muscles)
    // Offset: 0x1388690
    void SetKeyframe(float time, ::Array<float>* muscles);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x13886D8
    void SetLoopFrame(float time);
  }; // RootMotion.BakerMuscle
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerMuscle*, "RootMotion", "BakerMuscle");
#pragma pack(pop)
