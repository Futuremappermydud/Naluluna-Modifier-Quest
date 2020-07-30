// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetParentsAndSelf>d__17
  class UnityUtil::$GetParentsAndSelf$d__17 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private UnityEngine.Transform <>2__current
    // Offset: 0x18
    UnityEngine::Transform* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private UnityEngine.Transform transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // public UnityEngine.Transform <>3__transform
    // Offset: 0x30
    UnityEngine::Transform* $$3__transform;
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xD4D424
    static UnityUtil::$GetParentsAndSelf$d__17* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xD4EB40
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xD4EB24
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xD4EC00
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private UnityEngine.Transform System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
    // Offset: 0xD4EF10
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    UnityEngine::Transform* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xD4EF18
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xD4EF78
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
    // Offset: 0xD4EF80
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xD4F034
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetParentsAndSelf>d__17
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*, "ModestTree.Util", "UnityUtil/<GetParentsAndSelf>d__17");
#pragma pack(pop)
