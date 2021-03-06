// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.PlaceholderFactoryBase`1
#include "Zenject/PlaceholderFactoryBase_1.hpp"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
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
  // Autogenerated type: Zenject.PlaceholderFactory`4
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3>
  class PlaceholderFactory_4 : public Zenject::PlaceholderFactoryBase_1<TValue>, public Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>, public Zenject::IFactory {
    public:
    // Nested type: Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2<TParam1, TParam2, TParam3, TValue>
    class $get_ParamTypes$d__2;
    // Autogenerated type: Zenject.PlaceholderFactory`4/<get_ParamTypes>d__2
    class $get_ParamTypes$d__2 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<System::Type*>, public System::Collections::IEnumerator, public System::IDisposable {
      public:
      using declaring_type = PlaceholderFactory_4<TValue, TParam1, TParam2, TParam3>*;
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
      // Offset: 0x15D6DF8
      static typename PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::$get_ParamTypes$d__2* New_ctor(int $$1__state) {
        return (typename PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::$get_ParamTypes$d__2*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::$get_ParamTypes$d__2*>::get(), $$1__state));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0x15D6E38
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0x15D6E3C
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
      // Offset: 0x15D6FC4
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      System::Type* System_Collections_Generic_IEnumerator_1_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "System.Collections.Generic.IEnumerator<System.Type>.get_Current"));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0x15D6FCC
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0x15D702C
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
      // Offset: 0x15D7034
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this, "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator"));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0x15D70C8
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
    }; // Zenject.PlaceholderFactory`4/<get_ParamTypes>d__2
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0x15D70EC
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create", param1, param2, param3));
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0x15D7238
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> PlaceholderFactoryBase`1::get_ParamTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this, "get_ParamTypes"));
    }
    // public System.Void .ctor()
    // Offset: 0x15D7298
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlaceholderFactory_4<TValue, TParam1, TParam2, TParam3>* New_ctor() {
      return (PlaceholderFactory_4<TValue, TParam1, TParam2, TParam3>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PlaceholderFactory_4<TValue, TParam1, TParam2, TParam3>*>::get()));
    }
  }; // Zenject.PlaceholderFactory`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_4, "Zenject", "PlaceholderFactory`4");
#pragma pack(pop)
