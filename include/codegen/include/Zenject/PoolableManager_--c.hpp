// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
// Including type: Zenject.PoolableManager/PoolableInfo
#include "Zenject/PoolableManager_PoolableInfo.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableManager/<>c
  class PoolableManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.PoolableManager/<>c <>9
    static Zenject::PoolableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.PoolableManager/<>c <>9
    static void _set_$$9(Zenject::PoolableManager::$$c* value);
    // Get static field: static public System.Func`2<Zenject.PoolableManager/PoolableInfo,System.Int32> <>9__2_1
    static System::Func_2<Zenject::PoolableManager::PoolableInfo, int>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<Zenject.PoolableManager/PoolableInfo,System.Int32> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<Zenject::PoolableManager::PoolableInfo, int>* value);
    // Get static field: static public System.Func`2<Zenject.PoolableManager/PoolableInfo,Zenject.IPoolable> <>9__2_2
    static System::Func_2<Zenject::PoolableManager::PoolableInfo, Zenject::IPoolable*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<Zenject.PoolableManager/PoolableInfo,Zenject.IPoolable> <>9__2_2
    static void _set_$$9__2_2(System::Func_2<Zenject::PoolableManager::PoolableInfo, Zenject::IPoolable*>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__3_1
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Nullable_1<int>>* _get_$$9__3_1();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__3_1
    static void _set_$$9__3_1(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, System::Nullable_1<int>>* value);
    // static private System.Void .cctor()
    // Offset: 0xFAD800
    static void _cctor();
    // System.Int32 <.ctor>b__2_1(Zenject.PoolableManager/PoolableInfo x)
    // Offset: 0xFAD870
    int $_ctor$b__2_1(Zenject::PoolableManager::PoolableInfo x);
    // Zenject.IPoolable <.ctor>b__2_2(Zenject.PoolableManager/PoolableInfo x)
    // Offset: 0xFAD878
    Zenject::IPoolable* $_ctor$b__2_2(Zenject::PoolableManager::PoolableInfo x);
    // System.Nullable`1<System.Int32> <CreatePoolableInfo>b__3_1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0xFAD880
    System::Nullable_1<int> $CreatePoolableInfo$b__3_1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0xFAD868
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableManager::$$c* New_ctor();
  }; // Zenject.PoolableManager/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager::$$c*, "Zenject", "PoolableManager/<>c");
#pragma pack(pop)
