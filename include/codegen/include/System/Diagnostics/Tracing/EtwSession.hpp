// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ActivityFilter
  class ActivityFilter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference`1<T>
  template<typename T>
  class WeakReference_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EtwSession
  class EtwSession : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::EtwSession::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: System::Diagnostics::Tracing::EtwSession::$$c
    class $$c;
    // public readonly System.Int32 m_etwSessionId
    // Offset: 0x10
    int m_etwSessionId;
    // public System.Diagnostics.Tracing.ActivityFilter m_activityFilter
    // Offset: 0x18
    System::Diagnostics::Tracing::ActivityFilter* m_activityFilter;
    // Get static field: static private System.Collections.Generic.List`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> s_etwSessions
    static System::Collections::Generic::List_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* _get_s_etwSessions();
    // Set static field: static private System.Collections.Generic.List`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> s_etwSessions
    static void _set_s_etwSessions(System::Collections::Generic::List_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* value);
    // static public System.Diagnostics.Tracing.EtwSession GetEtwSession(System.Int32 etwSessionId, System.Boolean bCreateIfNeeded)
    // Offset: 0xC85BFC
    static System::Diagnostics::Tracing::EtwSession* GetEtwSession(int etwSessionId, bool bCreateIfNeeded);
    // static public System.Void RemoveEtwSession(System.Diagnostics.Tracing.EtwSession etwSession)
    // Offset: 0xC86054
    static void RemoveEtwSession(System::Diagnostics::Tracing::EtwSession* etwSession);
    // static private System.Void TrimGlobalList()
    // Offset: 0xC85EFC
    static void TrimGlobalList();
    // private System.Void .ctor(System.Int32 etwSessionId)
    // Offset: 0xC85ED0
    static EtwSession* New_ctor(int etwSessionId);
    // static private System.Void .cctor()
    // Offset: 0xC861C4
    static void _cctor();
  }; // System.Diagnostics.Tracing.EtwSession
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EtwSession*, "System.Diagnostics.Tracing", "EtwSession");
#pragma pack(pop)
