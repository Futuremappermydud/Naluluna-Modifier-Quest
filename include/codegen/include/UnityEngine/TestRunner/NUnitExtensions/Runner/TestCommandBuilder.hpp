// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder
  class TestCommandBuilder : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c
    class $$c;
    // static public NUnit.Framework.Internal.Commands.TestCommand BuildTestCommand(NUnit.Framework.Internal.TestMethod test, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0xE1C8EC
    static NUnit::Framework::Internal::Commands::TestCommand* BuildTestCommand(NUnit::Framework::Internal::TestMethod* test, NUnit::Framework::Interfaces::ITestFilter* filter);
    // static private System.String GetTestBuilderName(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0xE1EC08
    static ::Il2CppString* GetTestBuilderName(NUnit::Framework::Internal::TestMethod* testMethod);
    // static private NUnit.Framework.Internal.Commands.TestCommand TryReplaceWithEnumerableCommand(NUnit.Framework.Internal.Commands.TestCommand command)
    // Offset: 0xE1EAB0
    static NUnit::Framework::Internal::Commands::TestCommand* TryReplaceWithEnumerableCommand(NUnit::Framework::Internal::Commands::TestCommand* command);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "TestCommandBuilder");
#pragma pack(pop)
