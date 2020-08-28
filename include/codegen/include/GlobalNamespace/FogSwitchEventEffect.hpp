// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FogSwitchEventEffect
  class FogSwitchEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FogSwitchEventEffect::$AnimateToFogCoroutine$d__8
    class $AnimateToFogCoroutine$d__8;
    // private BloomFogSO _bloomFog
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // private BeatmapEventType _event
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType event;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // static field const value: static private System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 2;
    // Get static field: static private System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static private System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // protected System.Void Start()
    // Offset: 0xBF179C
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xBF1830
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xBF1908
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void AnimateToFog(System.Single duration, System.Single value)
    // Offset: 0xBF195C
    void AnimateToFog(float duration, float value);
    // private System.Collections.IEnumerator AnimateToFogCoroutine(System.Single duration, System.Single value)
    // Offset: 0xBF19AC
    System::Collections::IEnumerator* AnimateToFogCoroutine(float duration, float value);
    // public System.Void .ctor()
    // Offset: 0xBF1A68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FogSwitchEventEffect* New_ctor();
  }; // FogSwitchEventEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FogSwitchEventEffect*, "", "FogSwitchEventEffect");
#pragma pack(pop)
