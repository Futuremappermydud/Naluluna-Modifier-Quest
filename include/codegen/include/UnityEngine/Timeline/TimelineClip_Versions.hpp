// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TimelineClip/Versions
  struct TimelineClip::Versions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Timeline.TimelineClip/Versions Initial
    static constexpr const int Initial = 0;
    // Get static field: static public UnityEngine.Timeline.TimelineClip/Versions Initial
    static UnityEngine::Timeline::TimelineClip::Versions _get_Initial();
    // Set static field: static public UnityEngine.Timeline.TimelineClip/Versions Initial
    static void _set_Initial(UnityEngine::Timeline::TimelineClip::Versions value);
    // static field const value: static public UnityEngine.Timeline.TimelineClip/Versions ClipInFromGlobalToLocal
    static constexpr const int ClipInFromGlobalToLocal = 1;
    // Get static field: static public UnityEngine.Timeline.TimelineClip/Versions ClipInFromGlobalToLocal
    static UnityEngine::Timeline::TimelineClip::Versions _get_ClipInFromGlobalToLocal();
    // Set static field: static public UnityEngine.Timeline.TimelineClip/Versions ClipInFromGlobalToLocal
    static void _set_ClipInFromGlobalToLocal(UnityEngine::Timeline::TimelineClip::Versions value);
    // Creating value type constructor for type: Versions
    Versions(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Timeline.TimelineClip/Versions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip::Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
#pragma pack(pop)
