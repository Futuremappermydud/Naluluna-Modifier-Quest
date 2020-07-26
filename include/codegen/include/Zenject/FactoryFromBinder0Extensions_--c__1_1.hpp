// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
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
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/<>c__1`1
  template<typename TContract>
  class FactoryFromBinder0Extensions::$$c__1_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder0Extensions/<>c__1`1<TContract> <>9
    static Zenject::FactoryFromBinder0Extensions::$$c__1_1<TContract>* _get_$$9() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder0Extensions::$$c__1_1<TContract>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder0Extensions/<>c__1`1<TContract> <>9
    static void _set_$$9(Zenject::FactoryFromBinder0Extensions::$$c__1_1<TContract>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get(), "<>9", value));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__1_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__1_0() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get(), "<>9__1_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__1_0
    static void _set_$$9__1_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get(), "<>9__1_0", value));
    }
    // static private System.Void .cctor()
    // Offset: 0x117D560
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get(), ".cctor"));
    }
    // System.Void <FromPoolableMemoryPool>b__1_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0x117D654
    void $FromPoolableMemoryPool$b__1_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "<FromPoolableMemoryPool>b__1_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0x117D63C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder0Extensions::$$c__1_1<TContract>* New_ctor() {
      return (FactoryFromBinder0Extensions::$$c__1_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__1_1<TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder0Extensions/<>c__1`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__1_1, "Zenject", "FactoryFromBinder0Extensions/<>c__1`1");
#pragma pack(pop)
