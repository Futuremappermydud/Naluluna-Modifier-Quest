// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackBindingFlags
  struct TrackBindingFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags None
    static UnityEngine::Timeline::TrackBindingFlags _get_None();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags None
    static void _set_None(UnityEngine::Timeline::TrackBindingFlags value);
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static constexpr const int AllowCreateComponent = 1;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static UnityEngine::Timeline::TrackBindingFlags _get_AllowCreateComponent();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static void _set_AllowCreateComponent(UnityEngine::Timeline::TrackBindingFlags value);
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags All
    static constexpr const int All = 1;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags All
    static UnityEngine::Timeline::TrackBindingFlags _get_All();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags All
    static void _set_All(UnityEngine::Timeline::TrackBindingFlags value);
    // Creating value type constructor for type: TrackBindingFlags
    TrackBindingFlags(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Timeline.TrackBindingFlags
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackBindingFlags, "UnityEngine.Timeline", "TrackBindingFlags");
#pragma pack(pop)
