// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.DirectorControlPlayable
  class DirectorControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // public UnityEngine.Playables.PlayableDirector director
    // Offset: 0x10
    UnityEngine::Playables::PlayableDirector* director;
    // private System.Boolean m_SyncTime
    // Offset: 0x18
    bool m_SyncTime;
    // private System.Double m_AssetDuration
    // Offset: 0x20
    double m_AssetDuration;
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.DirectorControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.PlayableDirector director)
    // Offset: 0x10823F8
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::DirectorControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableDirector* director);
    // private System.Void SyncSpeed(System.Double speed)
    // Offset: 0x1083EE0
    void SyncSpeed(double speed);
    // private System.Void SyncPlayState(UnityEngine.Playables.PlayableGraph graph, System.Double playableTime)
    // Offset: 0x1084010
    void SyncPlayState(UnityEngine::Playables::PlayableGraph graph, double playableTime);
    // private System.Boolean DetectDiscontinuity(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1083DE0
    bool DetectDiscontinuity(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // private System.Boolean DetectOutOfSync(UnityEngine.Playables.Playable playable)
    // Offset: 0x10843D8
    bool DetectOutOfSync(UnityEngine::Playables::Playable playable);
    // private System.Void UpdateTime(UnityEngine.Playables.Playable playable)
    // Offset: 0x1084518
    void UpdateTime(UnityEngine::Playables::Playable playable);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1083B48
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1083C2C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x10840A0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1084194
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x10842AC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Void .ctor()
    // Offset: 0x10846F4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    static DirectorControlPlayable* New_ctor();
  }; // UnityEngine.Timeline.DirectorControlPlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");
#pragma pack(pop)
