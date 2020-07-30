// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: NUnit.Framework.RepeatAttribute
#include "NUnit/Framework/RepeatAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
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
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableRepeatedTestCommand
  class EnumerableRepeatedTestCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableRepeatedTestCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    // private System.Int32 repeatCount
    // Offset: 0x20
    int repeatCount;
    // public System.Void .ctor(NUnit.Framework.RepeatAttribute/RepeatedTestCommand commandToReplace)
    // Offset: 0xE1FA6C
    static EnumerableRepeatedTestCommand* New_ctor(NUnit::Framework::RepeatAttribute::RepeatedTestCommand* commandToReplace);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE27EA0
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE27F0C
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
    // Base method: System.Collections.IEnumerable IEnumerableTestMethodCommand::ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableRepeatedTestCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableRepeatedTestCommand*, "UnityEngine.TestTools", "EnumerableRepeatedTestCommand");
#pragma pack(pop)
