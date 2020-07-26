// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:23 PM
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
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.IPropertyPreview
  class IPropertyPreview {
    public:
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0xFFFFFFFF
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
  }; // UnityEngine.Timeline.IPropertyPreview
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IPropertyPreview*, "UnityEngine.Timeline", "IPropertyPreview");
#pragma pack(pop)
