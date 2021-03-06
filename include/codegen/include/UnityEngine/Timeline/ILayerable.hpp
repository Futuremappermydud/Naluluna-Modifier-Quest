// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.ILayerable
  class ILayerable {
    public:
    // public UnityEngine.Playables.Playable CreateLayerMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, int inputCount);
  }; // UnityEngine.Timeline.ILayerable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ILayerable*, "UnityEngine.Timeline", "ILayerable");
#pragma pack(pop)
