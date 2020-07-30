// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand
  class EnumerableSetUpTearDownCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<System::Reflection::MethodInfo*> {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c
    class $$c;
    // static private System.Reflection.MethodInfo[] GetMethodsWithAttributeFromFixture(System.Type fixtureType, System.Type setUpType)
    // Offset: 0xE290C8
    static ::Array<System::Reflection::MethodInfo*>* GetMethodsWithAttributeFromFixture(System::Type* fixtureType, System::Type* setUpType);
    // protected System.Collections.IEnumerator InvokeBefore(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xE29210
    System::Collections::IEnumerator* InvokeBefore(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xE292C4
    System::Collections::IEnumerator* InvokeAfter(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0xE1F560
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    static EnumerableSetUpTearDownCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand);
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xE29378
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase`1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableSetUpTearDownCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableSetUpTearDownCommand*, "UnityEngine.TestTools", "EnumerableSetUpTearDownCommand");
#pragma pack(pop)
