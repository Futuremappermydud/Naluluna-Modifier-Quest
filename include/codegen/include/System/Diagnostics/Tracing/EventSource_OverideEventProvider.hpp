// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventProvider
#include "System/Diagnostics/Tracing/EventProvider.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ControllerCommand
  struct ControllerCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventSource/OverideEventProvider
  class EventSource::OverideEventProvider : public System::Diagnostics::Tracing::EventProvider {
    public:
    // private System.Diagnostics.Tracing.EventSource m_eventSource
    // Offset: 0x60
    System::Diagnostics::Tracing::EventSource* m_eventSource;
    // public System.Void .ctor(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0xD7E658
    static EventSource::OverideEventProvider* New_ctor(System::Diagnostics::Tracing::EventSource* eventSource);
    // protected override System.Void OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand command, System.Collections.Generic.IDictionary`2<System.String,System.String> arguments, System.Int32 perEventSourceSessionId, System.Int32 etwSessionId)
    // Offset: 0xD7E6DC
    // Implemented from: System.Diagnostics.Tracing.EventProvider
    // Base method: System.Void EventProvider::OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand command, System.Collections.Generic.IDictionary`2<System.String,System.String> arguments, System.Int32 perEventSourceSessionId, System.Int32 etwSessionId)
    void OnControllerCommand(System::Diagnostics::Tracing::ControllerCommand command, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppString*>* arguments, int perEventSourceSessionId, int etwSessionId);
  }; // System.Diagnostics.Tracing.EventSource/OverideEventProvider
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSource::OverideEventProvider*, "System.Diagnostics.Tracing", "EventSource/OverideEventProvider");
#pragma pack(pop)
