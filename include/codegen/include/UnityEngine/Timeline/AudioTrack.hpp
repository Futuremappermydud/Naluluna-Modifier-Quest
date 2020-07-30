// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioMixerProperties
  class AudioMixerProperties;
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: IntervalTree`1<T>
  template<typename T>
  class IntervalTree_1;
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Playable because it is already included!
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AudioTrack
  class AudioTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Nested type: UnityEngine::Timeline::AudioTrack::$get_outputs$d__4
    class $get_outputs$d__4;
    // private UnityEngine.Timeline.AudioMixerProperties m_TrackProperties
    // Offset: 0xA0
    UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties;
    // public UnityEngine.Timeline.TimelineClip CreateClip(UnityEngine.AudioClip clip)
    // Offset: 0x107F27C
    UnityEngine::Timeline::TimelineClip* CreateClip(UnityEngine::AudioClip* clip);
    // private System.Void OnValidate()
    // Offset: 0x107FCEC
    void OnValidate();
    // override UnityEngine.Playables.Playable CompileClips(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.Timeline.TimelineClip> timelineClips, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    // Offset: 0x107F3D8
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: UnityEngine.Playables.Playable TrackAsset::CompileClips(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.Timeline.TimelineClip> timelineClips, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    UnityEngine::Playables::Playable CompileClips(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip*>* timelineClips, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree);
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x107FC28
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> TrackAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x107FDAC
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioTrack* New_ctor();
  }; // UnityEngine.Timeline.AudioTrack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioTrack*, "UnityEngine.Timeline", "AudioTrack");
#pragma pack(pop)
