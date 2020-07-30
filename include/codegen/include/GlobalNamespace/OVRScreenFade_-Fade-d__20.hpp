// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRScreenFade
#include "GlobalNamespace/OVRScreenFade.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRScreenFade/<Fade>d__20
  class OVRScreenFade::$Fade$d__20 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public OVRScreenFade <>4__this
    // Offset: 0x20
    GlobalNamespace::OVRScreenFade* $$4__this;
    // public System.Single startAlpha
    // Offset: 0x28
    float startAlpha;
    // public System.Single endAlpha
    // Offset: 0x2C
    float endAlpha;
    // private System.Single <elapsedTime>5__2
    // Offset: 0x30
    float $elapsedTime$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xF39DA0
    static OVRScreenFade::$Fade$d__20* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF39E40
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF39E44
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF39F80
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF39F88
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF39FE8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // OVRScreenFade/<Fade>d__20
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRScreenFade::$Fade$d__20*, "", "OVRScreenFade/<Fade>d__20");
#pragma pack(pop)
