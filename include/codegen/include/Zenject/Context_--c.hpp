// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Context/<>c
  class Context::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Context/<>c <>9
    static Zenject::Context::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Context/<>c <>9
    static void _set_$$9(Zenject::Context::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static System::Func_2<System::Type*, bool>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xD56DEC
    static void _cctor();
    // System.Boolean <set_NormalInstallerTypes>b__16_0(System.Type x)
    // Offset: 0xD56E5C
    bool $set_NormalInstallerTypes$b__16_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0xD56E54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Context::$$c* New_ctor();
  }; // Zenject.Context/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Context::$$c*, "Zenject", "Context/<>c");
#pragma pack(pop)
