// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: NUnit.Framework.Internal.TestExecutionStatus
#include "NUnit/Framework/Internal/TestExecutionStatus.hpp"
// Including type: NUnit.Framework.ParallelScope
#include "NUnit/Framework/ParallelScope.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: Randomizer
  class Randomizer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestListener
  class ITestListener;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework::Internal::Execution
namespace NUnit::Framework::Internal::Execution {
  // Forward declaring type: IWorkItemDispatcher
  class IWorkItemDispatcher;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
  class UnityTestExecutionContext : public ::Il2CppObject, public NUnit::Framework::Internal::ITestExecutionContext {
    public:
    // private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext _priorContext
    // Offset: 0x10
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* priorContext;
    // private NUnit.Framework.Internal.TestResult _currentResult
    // Offset: 0x18
    NUnit::Framework::Internal::TestResult* currentResult;
    // private System.Int32 _assertCount
    // Offset: 0x20
    int assertCount;
    // Get static field: static private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <CurrentContext>k__BackingField
    static UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* _get_$CurrentContext$k__BackingField();
    // Set static field: static private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <CurrentContext>k__BackingField
    static void _set_$CurrentContext$k__BackingField(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context;
    // private NUnit.Framework.Internal.Test <CurrentTest>k__BackingField
    // Offset: 0x30
    NUnit::Framework::Internal::Test* CurrentTest;
    // private System.DateTime <StartTime>k__BackingField
    // Offset: 0x38
    System::DateTime StartTime;
    // private System.Int64 <StartTicks>k__BackingField
    // Offset: 0x40
    int64_t StartTicks;
    // private System.Object <TestObject>k__BackingField
    // Offset: 0x48
    ::Il2CppObject* TestObject;
    // private System.String <WorkDirectory>k__BackingField
    // Offset: 0x50
    ::Il2CppString* WorkDirectory;
    // private NUnit.Framework.Internal.TestExecutionStatus _executionStatus
    // Offset: 0x58
    NUnit::Framework::Internal::TestExecutionStatus executionStatus;
    // private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <UpstreamActions>k__BackingField
    // Offset: 0x60
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions;
    // private System.Int32 <TestCaseTimeout>k__BackingField
    // Offset: 0x68
    int TestCaseTimeout;
    // private System.Globalization.CultureInfo <CurrentCulture>k__BackingField
    // Offset: 0x70
    System::Globalization::CultureInfo* CurrentCulture;
    // private System.Globalization.CultureInfo <CurrentUICulture>k__BackingField
    // Offset: 0x78
    System::Globalization::CultureInfo* CurrentUICulture;
    // private NUnit.Framework.Interfaces.ITestListener <Listener>k__BackingField
    // Offset: 0x80
    NUnit::Framework::Interfaces::ITestListener* Listener;
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Offset: 0x88
    System::IO::TextWriter* OutWriter;
    // private System.Boolean <StopOnError>k__BackingField
    // Offset: 0x90
    bool StopOnError;
    // private NUnit.Framework.Internal.Execution.IWorkItemDispatcher <Dispatcher>k__BackingField
    // Offset: 0x98
    NUnit::Framework::Internal::Execution::IWorkItemDispatcher* Dispatcher;
    // private NUnit.Framework.ParallelScope <ParallelScope>k__BackingField
    // Offset: 0xA0
    NUnit::Framework::ParallelScope ParallelScope;
    // private System.String <WorkerId>k__BackingField
    // Offset: 0xA8
    ::Il2CppString* WorkerId;
    // private NUnit.Framework.Internal.Randomizer <RandomGenerator>k__BackingField
    // Offset: 0xB0
    NUnit::Framework::Internal::Randomizer* RandomGenerator;
    // private NUnit.Framework.Constraints.ValueFormatter <CurrentValueFormatter>k__BackingField
    // Offset: 0xB8
    NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter;
    // private System.Boolean <IsSingleThreaded>k__BackingField
    // Offset: 0xC0
    bool IsSingleThreaded;
    // private UnityEngine.TestTools.BeforeAfterTestCommandState <SetUpTearDownState>k__BackingField
    // Offset: 0xC8
    UnityEngine::TestTools::BeforeAfterTestCommandState* SetUpTearDownState;
    // private UnityEngine.TestTools.BeforeAfterTestCommandState <OuterUnityTestActionState>k__BackingField
    // Offset: 0xD0
    UnityEngine::TestTools::BeforeAfterTestCommandState* OuterUnityTestActionState;
    // private System.Int32 <EnumerableRepeatedTestState>k__BackingField
    // Offset: 0xD8
    int EnumerableRepeatedTestState;
    // private System.Int32 <EnumerableRetryTestState>k__BackingField
    // Offset: 0xDC
    int EnumerableRetryTestState;
    // static public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext get_CurrentContext()
    // Offset: 0xE21CDC
    static UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* get_CurrentContext();
    // static public System.Void set_CurrentContext(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext value)
    // Offset: 0xE21D2C
    static void set_CurrentContext(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // public NUnit.Framework.Internal.Test get_CurrentTest()
    // Offset: 0xE21D84
    NUnit::Framework::Internal::Test* get_CurrentTest();
    // public System.Void set_CurrentTest(NUnit.Framework.Internal.Test value)
    // Offset: 0xE21D8C
    void set_CurrentTest(NUnit::Framework::Internal::Test* value);
    // public System.DateTime get_StartTime()
    // Offset: 0xE21D94
    System::DateTime get_StartTime();
    // public System.Void set_StartTime(System.DateTime value)
    // Offset: 0xE21D9C
    void set_StartTime(System::DateTime value);
    // public System.Int64 get_StartTicks()
    // Offset: 0xE21DA4
    int64_t get_StartTicks();
    // public System.Void set_StartTicks(System.Int64 value)
    // Offset: 0xE21DAC
    void set_StartTicks(int64_t value);
    // public System.String get_WorkDirectory()
    // Offset: 0xE21E1C
    ::Il2CppString* get_WorkDirectory();
    // public System.Void set_WorkDirectory(System.String value)
    // Offset: 0xE21E24
    void set_WorkDirectory(::Il2CppString* value);
    // public NUnit.Framework.Internal.TestExecutionStatus get_ExecutionStatus()
    // Offset: 0xE18D18
    NUnit::Framework::Internal::TestExecutionStatus get_ExecutionStatus();
    // public System.Void set_ExecutionStatus(NUnit.Framework.Internal.TestExecutionStatus value)
    // Offset: 0xE1AFA4
    void set_ExecutionStatus(NUnit::Framework::Internal::TestExecutionStatus value);
    // public System.Collections.Generic.List`1<NUnit.Framework.ITestAction> get_UpstreamActions()
    // Offset: 0xE21E2C
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* get_UpstreamActions();
    // private System.Void set_UpstreamActions(System.Collections.Generic.List`1<NUnit.Framework.ITestAction> value)
    // Offset: 0xE21E34
    void set_UpstreamActions(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* value);
    // public System.Int32 get_TestCaseTimeout()
    // Offset: 0xE21E3C
    int get_TestCaseTimeout();
    // public System.Void set_TestCaseTimeout(System.Int32 value)
    // Offset: 0xE21E44
    void set_TestCaseTimeout(int value);
    // public System.Globalization.CultureInfo get_CurrentCulture()
    // Offset: 0xE21E4C
    System::Globalization::CultureInfo* get_CurrentCulture();
    // public System.Void set_CurrentCulture(System.Globalization.CultureInfo value)
    // Offset: 0xE21E54
    void set_CurrentCulture(System::Globalization::CultureInfo* value);
    // public System.Globalization.CultureInfo get_CurrentUICulture()
    // Offset: 0xE21E5C
    System::Globalization::CultureInfo* get_CurrentUICulture();
    // public System.Void set_CurrentUICulture(System.Globalization.CultureInfo value)
    // Offset: 0xE21E64
    void set_CurrentUICulture(System::Globalization::CultureInfo* value);
    // public NUnit.Framework.Interfaces.ITestListener get_Listener()
    // Offset: 0xE21E6C
    NUnit::Framework::Interfaces::ITestListener* get_Listener();
    // public System.Void set_Listener(NUnit.Framework.Interfaces.ITestListener value)
    // Offset: 0xE21E74
    void set_Listener(NUnit::Framework::Interfaces::ITestListener* value);
    // public System.Void .ctor(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext other)
    // Offset: 0xE1BEE0
    static UnityTestExecutionContext* New_ctor(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* other);
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0xE21E84
    void set_OutWriter(System::IO::TextWriter* value);
    // public UnityEngine.TestTools.BeforeAfterTestCommandState get_SetUpTearDownState()
    // Offset: 0xE21E94
    UnityEngine::TestTools::BeforeAfterTestCommandState* get_SetUpTearDownState();
    // public System.Void set_SetUpTearDownState(UnityEngine.TestTools.BeforeAfterTestCommandState value)
    // Offset: 0xE21E9C
    void set_SetUpTearDownState(UnityEngine::TestTools::BeforeAfterTestCommandState* value);
    // public UnityEngine.TestTools.BeforeAfterTestCommandState get_OuterUnityTestActionState()
    // Offset: 0xE21EA4
    UnityEngine::TestTools::BeforeAfterTestCommandState* get_OuterUnityTestActionState();
    // public System.Void set_OuterUnityTestActionState(UnityEngine.TestTools.BeforeAfterTestCommandState value)
    // Offset: 0xE21EAC
    void set_OuterUnityTestActionState(UnityEngine::TestTools::BeforeAfterTestCommandState* value);
    // public System.Int32 get_EnumerableRepeatedTestState()
    // Offset: 0xE21EB4
    int get_EnumerableRepeatedTestState();
    // public System.Void set_EnumerableRepeatedTestState(System.Int32 value)
    // Offset: 0xE21EBC
    void set_EnumerableRepeatedTestState(int value);
    // public System.Int32 get_EnumerableRetryTestState()
    // Offset: 0xE21EC4
    int get_EnumerableRetryTestState();
    // public System.Void set_EnumerableRetryTestState(System.Int32 value)
    // Offset: 0xE21ECC
    void set_EnumerableRetryTestState(int value);
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0xE21DB4
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Internal.TestResult ITestExecutionContext::get_CurrentResult()
    NUnit::Framework::Internal::TestResult* get_CurrentResult();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0xE21DBC
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    void set_CurrentResult(NUnit::Framework::Internal::TestResult* value);
    // public System.Object get_TestObject()
    // Offset: 0xE21E0C
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Object ITestExecutionContext::get_TestObject()
    ::Il2CppObject* get_TestObject();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0xE21E14
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_TestObject(System.Object value)
    void set_TestObject(::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0xE217A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UnityTestExecutionContext* New_ctor();
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0xE21E7C
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.IO.TextWriter ITestExecutionContext::get_OutWriter()
    System::IO::TextWriter* get_OutWriter();
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0xE21E8C
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Constraints.ValueFormatter ITestExecutionContext::get_CurrentValueFormatter()
    NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter();
    // public System.Void IncrementAssertCount()
    // Offset: 0xE21ED4
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::IncrementAssertCount()
    void IncrementAssertCount();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext");
#pragma pack(pop)
