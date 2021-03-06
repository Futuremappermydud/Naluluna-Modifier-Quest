// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
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
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionState
  struct AnalyticsSessionState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static constexpr const int kSessionStopped = 0;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionStopped();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static void _set_kSessionStopped(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static constexpr const int kSessionStarted = 1;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionStarted();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static void _set_kSessionStarted(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static constexpr const int kSessionPaused = 2;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionPaused();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static void _set_kSessionPaused(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static constexpr const int kSessionResumed = 3;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionResumed();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static void _set_kSessionResumed(UnityEngine::Analytics::AnalyticsSessionState value);
    // Creating value type constructor for type: AnalyticsSessionState
    AnalyticsSessionState(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Analytics.AnalyticsSessionState
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::AnalyticsSessionState, "UnityEngine.Analytics", "AnalyticsSessionState");
#pragma pack(pop)
