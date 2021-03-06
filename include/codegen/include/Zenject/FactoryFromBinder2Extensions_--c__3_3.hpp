// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`3<TParam1, TParam2, TParam3>
  template<typename TParam1, typename TParam2, typename TParam3>
  class IPoolable_3;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/<>c__3`3
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryFromBinder2Extensions::$$c__3_3 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder2Extensions/<>c__3`3<TParam1,TParam2,TContract> <>9
    static Zenject::FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>* _get_$$9() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder2Extensions/<>c__3`3<TParam1,TParam2,TContract> <>9
    static void _set_$$9(Zenject::FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get(), "<>9", value));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__3_0() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get(), "<>9__3_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static void _set_$$9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get(), "<>9__3_0", value));
    }
    // static private System.Void .cctor()
    // Offset: 0x117DE88
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get(), ".cctor"));
    }
    // System.Void <FromMonoPoolableMemoryPool>b__3_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0x117DF7C
    void $FromMonoPoolableMemoryPool$b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "<FromMonoPoolableMemoryPool>b__3_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0x117DF64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>* New_ctor() {
      return (FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__3_3<TParam1, TParam2, TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/<>c__3`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__3_3, "Zenject", "FactoryFromBinder2Extensions/<>c__3`3");
#pragma pack(pop)
