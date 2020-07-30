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
  // Autogenerated type: UnityEngine.Timeline.NotificationFlags
  struct NotificationFlags : public System::Enum {
    public:
    // public System.Int16 value__
    // Offset: 0x0
    int16_t value;
    // static field const value: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static constexpr const int16_t TriggerInEditMode = 1;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static UnityEngine::Timeline::NotificationFlags _get_TriggerInEditMode();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static void _set_TriggerInEditMode(UnityEngine::Timeline::NotificationFlags value);
    // static field const value: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static constexpr const int16_t Retroactive = 2;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static UnityEngine::Timeline::NotificationFlags _get_Retroactive();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static void _set_Retroactive(UnityEngine::Timeline::NotificationFlags value);
    // static field const value: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static constexpr const int16_t TriggerOnce = 4;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static UnityEngine::Timeline::NotificationFlags _get_TriggerOnce();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static void _set_TriggerOnce(UnityEngine::Timeline::NotificationFlags value);
    // Creating value type constructor for type: NotificationFlags
    NotificationFlags(int16_t value_ = {}) : value{value_} {}
  }; // UnityEngine.Timeline.NotificationFlags
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::NotificationFlags, "UnityEngine.Timeline", "NotificationFlags");
#pragma pack(pop)
