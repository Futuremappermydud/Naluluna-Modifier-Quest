// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteController/<DissolveCoroutine>d__64
  class NoteController::$DissolveCoroutine$d__64 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public NoteController <>4__this
    // Offset: 0x20
    GlobalNamespace::NoteController* $$4__this;
    // public System.Single duration
    // Offset: 0x28
    float duration;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xBFFA64
    static NoteController::$DissolveCoroutine$d__64* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xBFFAFC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xBFFB00
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xBFFBF4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xBFFBFC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xBFFC5C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // NoteController/<DissolveCoroutine>d__64
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteController::$DissolveCoroutine$d__64*, "", "NoteController/<DissolveCoroutine>d__64");
#pragma pack(pop)
