// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner/<ExMethod>d__11
  class CoroutineRunner::$ExMethod$d__11 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    // Offset: 0x20
    UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this;
    // public System.Collections.IEnumerator e
    // Offset: 0x28
    System::Collections::IEnumerator* e;
    // public System.Int32 timeout
    // Offset: 0x30
    int timeout;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE324F8
    static CoroutineRunner::$ExMethod$d__11* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE325FC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE32600
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE32744
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE3274C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE327AC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner/<ExMethod>d__11
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__11*, "UnityEngine.TestTools.Utils", "CoroutineRunner/<ExMethod>d__11");
#pragma pack(pop)
