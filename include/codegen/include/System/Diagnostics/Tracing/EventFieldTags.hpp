// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:42 PM
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
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldTags
  struct EventFieldTags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Diagnostics.Tracing.EventFieldTags None
    static constexpr const int None = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static System::Diagnostics::Tracing::EventFieldTags _get_None();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static void _set_None(System::Diagnostics::Tracing::EventFieldTags value);
    // Creating value type constructor for type: EventFieldTags
    EventFieldTags(int value_ = {}) : value{value_} {}
  }; // System.Diagnostics.Tracing.EventFieldTags
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventFieldTags, "System.Diagnostics.Tracing", "EventFieldTags");
#pragma pack(pop)
