// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.PlaceholderFactoryBase`1
#include "Zenject/PlaceholderFactoryBase_1.hpp"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <get_ParamTypes>d__2 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PlaceholderFactory`5
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class PlaceholderFactory_5 : public Zenject::PlaceholderFactoryBase_1<TValue>, public Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>, public Zenject::IFactory {
    public:
    // Nested type: Zenject::PlaceholderFactory_5::$get_ParamTypes$d__2<TParam1, TParam2, TParam3, TParam4, TValue>
    class $get_ParamTypes$d__2;
    // Autogenerated type: Zenject.PlaceholderFactory`5/<get_ParamTypes>d__2
    class $get_ParamTypes$d__2 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<System::Type*>, public System::Collections::IEnumerator, public System::IDisposable {
      public:
      using declaring_type = PlaceholderFactory_5<TValue, TParam1, TParam2, TParam3, TParam4>*;
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Type <>2__current
      // Offset: 0x0
      System::Type* $$2__current;
      // private System.Int32 <>l__initialThreadId
      // Offset: 0x0
      int $$l__initialThreadId;
      // public System.Void .ctor(System.Int32 $$1__state)
      // Offset: 0x15D72BC
      static typename PlaceholderFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>::$get_ParamTypes$d__2* New_ctor(int $$1__state) {
        return (typename PlaceholderFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>::$get_ParamTypes$d__2*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename PlaceholderFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>::$get_ParamTypes$d__2*>::get(), $$1__state));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0x15D72FC
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0x15D7300
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
      // Offset: 0x15D74E4
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      System::Type* System_Collections_Generic_IEnumerator_1_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "System.Collections.Generic.IEnumerator<System.Type>.get_Current"));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0x15D74EC
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0x15D754C
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
      // Offset: 0x15D7554
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this, "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator"));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0x15D75E8
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
    }; // Zenject.PlaceholderFactory`5/<get_ParamTypes>d__2
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0x15D760C
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create", param1, param2, param3, param4));
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0x15D7798
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> PlaceholderFactoryBase`1::get_ParamTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this, "get_ParamTypes"));
    }
    // public System.Void .ctor()
    // Offset: 0x15D77F8
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlaceholderFactory_5<TValue, TParam1, TParam2, TParam3, TParam4>* New_ctor() {
      return (PlaceholderFactory_5<TValue, TParam1, TParam2, TParam3, TParam4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PlaceholderFactory_5<TValue, TParam1, TParam2, TParam3, TParam4>*>::get()));
    }
  }; // Zenject.PlaceholderFactory`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_5, "Zenject", "PlaceholderFactory`5");
#pragma pack(pop)
