// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.Projection
#include "UnityEngine/ProBuilder/Projection.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Projection/<>c
  class Projection::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.Projection/<>c <>9
    static UnityEngine::ProBuilder::Projection::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.Projection/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::Projection::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>> <>9__6_0
    static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>* _get_$$9__6_0();
    // Set static field: static public System.Comparison`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>> <>9__6_0
    static void _set_$$9__6_0(System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>,UnityEngine.Vector2> <>9__6_1
    static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>, UnityEngine::Vector2>* _get_$$9__6_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>,UnityEngine.Vector2> <>9__6_1
    static void _set_$$9__6_1(System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>, UnityEngine::Vector2>* value);
    // static private System.Void .cctor()
    // Offset: 0x1029E04
    static void _cctor();
    // System.Int32 <Sort>b__6_0(UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> a, UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> b)
    // Offset: 0x1029E74
    int $Sort$b__6_0(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> a, UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> b);
    // UnityEngine.Vector2 <Sort>b__6_1(UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> x)
    // Offset: 0x1029ECC
    UnityEngine::Vector2 $Sort$b__6_1(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> x);
    // public System.Void .ctor()
    // Offset: 0x1029E6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Projection::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.Projection/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Projection::$$c*, "UnityEngine.ProBuilder", "Projection/<>c");
#pragma pack(pop)
