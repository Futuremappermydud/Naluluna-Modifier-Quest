// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
#include "UnityEngine/TestTools/TestRunner/PlaymodeTestsController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c
  class PlaymodeTestsController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c <>9
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static System::Func_2<UnityEngine::TestTools::Utils::IAssemblyWrapper*, System::Reflection::Assembly*>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<UnityEngine::TestTools::Utils::IAssemblyWrapper*, System::Reflection::Assembly*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE3124C
    static void _cctor();
    // System.Reflection.Assembly <Run>b__16_0(UnityEngine.TestTools.Utils.IAssemblyWrapper a)
    // Offset: 0xE312BC
    System::Reflection::Assembly* $Run$b__16_0(UnityEngine::TestTools::Utils::IAssemblyWrapper* a);
    // public System.Void .ctor()
    // Offset: 0xE312B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlaymodeTestsController::$$c* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController/<>c");
#pragma pack(pop)
