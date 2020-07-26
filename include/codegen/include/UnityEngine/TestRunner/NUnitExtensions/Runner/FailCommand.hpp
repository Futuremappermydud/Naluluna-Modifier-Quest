// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
  class FailCommand : public NUnit::Framework::Internal::Commands::TestCommand, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::$ExecuteEnumerable$d__4
    class $ExecuteEnumerable$d__4;
    // private NUnit.Framework.Interfaces.ResultState m_ResultState
    // Offset: 0x18
    NUnit::Framework::Interfaces::ResultState* m_ResultState;
    // private System.String m_Message
    // Offset: 0x20
    ::Il2CppString* m_Message;
    // public System.Void .ctor(NUnit.Framework.Internal.Test test, NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0xE1E54C
    static FailCommand* New_ctor(NUnit::Framework::Internal::Test* test, NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE1E59C
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE1E6C4
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
    // Base method: System.Collections.IEnumerable IEnumerableTestMethodCommand::ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "FailCommand");
#pragma pack(pop)
