// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Timeline.ITimelineEvaluateCallback
#include "UnityEngine/Timeline/ITimelineEvaluateCallback.hpp"
// Including type: UnityEngine.Animations.AnimationPlayableOutput
#include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Experimental::Animations
namespace UnityEngine::Experimental::Animations {
  // Forward declaring type: IAnimationWindowPreview
  class IAnimationWindowPreview;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AnimationPreviewUpdateCallback
  class AnimationPreviewUpdateCallback : public ::Il2CppObject, public UnityEngine::Timeline::ITimelineEvaluateCallback {
    public:
    // private UnityEngine.Animations.AnimationPlayableOutput m_Output
    // Offset: 0x10
    UnityEngine::Animations::AnimationPlayableOutput m_Output;
    // private UnityEngine.Playables.PlayableGraph m_Graph
    // Offset: 0x20
    UnityEngine::Playables::PlayableGraph m_Graph;
    // private System.Collections.Generic.List`1<UnityEngine.Experimental.Animations.IAnimationWindowPreview> m_PreviewComponents
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>* m_PreviewComponents;
    // public System.Void .ctor(UnityEngine.Animations.AnimationPlayableOutput output)
    // Offset: 0x107B270
    static AnimationPreviewUpdateCallback* New_ctor(UnityEngine::Animations::AnimationPlayableOutput output);
    // private System.Void FetchPreviewComponents()
    // Offset: 0x107B4AC
    void FetchPreviewComponents();
    // public System.Void Evaluate()
    // Offset: 0x107B320
    // Implemented from: UnityEngine.Timeline.ITimelineEvaluateCallback
    // Base method: System.Void ITimelineEvaluateCallback::Evaluate()
    void Evaluate();
  }; // UnityEngine.Timeline.AnimationPreviewUpdateCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPreviewUpdateCallback*, "UnityEngine.Timeline", "AnimationPreviewUpdateCallback");
#pragma pack(pop)
