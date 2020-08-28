// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatLine
  class BeatLine : public GlobalNamespace::LightWithId {
    public:
    // Nested type: GlobalNamespace::BeatLine::Pool
    class Pool;
    // Nested type: GlobalNamespace::BeatLine::HighlightData
    struct HighlightData;
    // Autogenerated type: BeatLine/HighlightData
    struct HighlightData : public System::ValueType {
      public:
      // public System.Single startTime
      // Offset: 0x0
      float startTime;
      // public System.Single arriveDuration
      // Offset: 0x4
      float arriveDuration;
      // public System.Single halfJumpDuration
      // Offset: 0x8
      float halfJumpDuration;
      // Creating value type constructor for type: HighlightData
      HighlightData(float startTime_ = {}, float arriveDuration_ = {}, float halfJumpDuration_ = {}) : startTime{startTime_}, arriveDuration{arriveDuration_}, halfJumpDuration{halfJumpDuration_} {}
    }; // BeatLine/HighlightData
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // private UnityEngine.AnimationCurve _arriveFadeCurve
    // Offset: 0x38
    UnityEngine::AnimationCurve* arriveFadeCurve;
    // private UnityEngine.AnimationCurve _jumpFadeCurve
    // Offset: 0x40
    UnityEngine::AnimationCurve* jumpFadeCurve;
    // private System.Single _alphaMul
    // Offset: 0x48
    float alphaMul;
    // private System.Single _maxAlpha
    // Offset: 0x4C
    float maxAlpha;
    // private System.Collections.Generic.List`1<BeatLine/HighlightData> _highlights
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>* highlights;
    // private UnityEngine.Color _color
    // Offset: 0x58
    UnityEngine::Color color;
    // private System.Single _rotation
    // Offset: 0x68
    float rotation;
    // public System.Boolean get_isFinished()
    // Offset: 0xB8E894
    bool get_isFinished();
    // public System.Single get_rotation()
    // Offset: 0xB8E8EC
    float get_rotation();
    // public System.Void Init(UnityEngine.Vector3 position, System.Single rotation)
    // Offset: 0xB8E8F4
    void Init(UnityEngine::Vector3 position, float rotation);
    // public System.Void AddHighlight(System.Single startTime, System.Single arriveDuration, System.Single jumpDuration)
    // Offset: 0xB8EA0C
    void AddHighlight(float startTime, float arriveDuration, float jumpDuration);
    // public System.Void ManualUpdate(System.Single songTime)
    // Offset: 0xB8EA90
    void ManualUpdate(float songTime);
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xB8EA00
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xB8EC04
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatLine* New_ctor();
  }; // BeatLine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine*, "", "BeatLine");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine::HighlightData, "", "BeatLine/HighlightData");
#pragma pack(pop)
