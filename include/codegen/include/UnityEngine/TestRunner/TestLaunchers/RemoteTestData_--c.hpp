// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData
#include "UnityEngine/TestRunner/TestLaunchers/RemoteTestData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData/<>c
  class RemoteTestData::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestData/<>c <>9
    static UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestData/<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITest,System.String> <>9__18_0
    static System::Func_2<NUnit::Framework::Interfaces::ITest*, ::Il2CppString*>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITest,System.String> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<NUnit::Framework::Interfaces::ITest*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE255E0
    static void _cctor();
    // System.String <.ctor>b__18_0(NUnit.Framework.Interfaces.ITest t)
    // Offset: 0xE25650
    ::Il2CppString* $_ctor$b__18_0(NUnit::Framework::Interfaces::ITest* t);
    // public System.Void .ctor()
    // Offset: 0xE25648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemoteTestData::$$c* New_ctor();
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestData/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestData/<>c");
#pragma pack(pop)
