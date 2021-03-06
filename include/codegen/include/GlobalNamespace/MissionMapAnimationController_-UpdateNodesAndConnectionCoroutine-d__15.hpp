// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
  class MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public MissionMapAnimationController <>4__this
    // Offset: 0x20
    GlobalNamespace::MissionMapAnimationController* $$4__this;
    // private MissionNodeConnection[] <newEnabledConnection>5__2
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionNodeConnection*>* $newEnabledConnection$5__2;
    // private MissionNodeConnection[] <>7__wrap2
    // Offset: 0x30
    ::Array<GlobalNamespace::MissionNodeConnection*>* $$7__wrap2;
    // private System.Int32 <>7__wrap3
    // Offset: 0x38
    int $$7__wrap3;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xC088B0
    static MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xC08E9C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xC08EA0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xC09400
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xC09408
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xC09468
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
#pragma pack(pop)
