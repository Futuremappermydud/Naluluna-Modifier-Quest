// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.EventPayload
#include "System/Diagnostics/Tracing/EventPayload.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
  class EventPayload::$GetEnumerator$d__17 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*>>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Object> <>2__current
    // Offset: 0x18
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> $$2__current;
    // public System.Diagnostics.Tracing.EventPayload <>4__this
    // Offset: 0x28
    System::Diagnostics::Tracing::EventPayload* $$4__this;
    // private System.Int32 <i>5__1
    // Offset: 0x30
    int $i$5__1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xC87BA0
    static EventPayload::$GetEnumerator$d__17* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xC87F54
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xC87F58
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
    // Offset: 0xC88118
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xC88124
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xC88184
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventPayload::$GetEnumerator$d__17*, "System.Diagnostics.Tracing", "EventPayload/<GetEnumerator>d__17");
#pragma pack(pop)
