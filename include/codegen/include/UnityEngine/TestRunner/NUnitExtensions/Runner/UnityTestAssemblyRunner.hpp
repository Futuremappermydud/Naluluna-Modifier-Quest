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
// Forward declaring namespace: UnityEngine::TestTools::NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Forward declaring type: UnityTestAssemblyBuilder
  class UnityTestAssemblyBuilder;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: ITestListener
  class ITestListener;
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestPlatform
  struct TestPlatform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner
  class UnityTestAssemblyRunner : public ::Il2CppObject {
    public:
    // private readonly UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder unityBuilder
    // Offset: 0x10
    UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* unityBuilder;
    // private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory m_Factory
    // Offset: 0x18
    UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* m_Factory;
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    // Offset: 0x20
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context;
    // private System.Collections.Generic.IDictionary`2<System.String,System.Object> <Settings>k__BackingField
    // Offset: 0x28
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* Settings;
    // private NUnit.Framework.Interfaces.ITest <LoadedTest>k__BackingField
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITest* LoadedTest;
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem <TopLevelWorkItem>k__BackingField
    // Offset: 0x38
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* TopLevelWorkItem;
    // protected UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext get_Context()
    // Offset: 0xE21684
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* get_Context();
    // protected System.Void set_Context(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext value)
    // Offset: 0xE2168C
    void set_Context(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // protected System.Void set_Settings(System.Collections.Generic.IDictionary`2<System.String,System.Object> value)
    // Offset: 0xE21694
    void set_Settings(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // public NUnit.Framework.Interfaces.ITest get_LoadedTest()
    // Offset: 0xE2169C
    NUnit::Framework::Interfaces::ITest* get_LoadedTest();
    // protected System.Void set_LoadedTest(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0xE216A4
    void set_LoadedTest(NUnit::Framework::Interfaces::ITest* value);
    // public NUnit.Framework.Interfaces.ITestResult get_Result()
    // Offset: 0xE216AC
    NUnit::Framework::Interfaces::ITestResult* get_Result();
    // public System.Boolean get_IsTestRunning()
    // Offset: 0xE216C4
    bool get_IsTestRunning();
    // public System.Boolean get_IsTestComplete()
    // Offset: 0xE216E4
    bool get_IsTestComplete();
    // public System.Void .ctor(UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder builder, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0xE21704
    static UnityTestAssemblyRunner* New_ctor(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* builder, UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory);
    // public NUnit.Framework.Interfaces.ITest Load(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform testPlatform, System.Collections.Generic.IDictionary`2<System.String,System.Object> settings)
    // Offset: 0xE21860
    NUnit::Framework::Interfaces::ITest* Load(::Array<System::Reflection::Assembly*>* assemblies, UnityEngine::TestTools::TestPlatform testPlatform, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* settings);
    // public System.Collections.IEnumerable Run(NUnit.Framework.Interfaces.ITestListener listener, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0xE21BD4
    System::Collections::IEnumerable* Run(NUnit::Framework::Interfaces::ITestListener* listener, NUnit::Framework::Interfaces::ITestFilter* filter);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem get_TopLevelWorkItem()
    // Offset: 0xE21CA4
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* get_TopLevelWorkItem();
    // public System.Void set_TopLevelWorkItem(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem value)
    // Offset: 0xE21CAC
    void set_TopLevelWorkItem(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* value);
    // public System.Void StopRun()
    // Offset: 0xE21CB4
    void StopRun();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestAssemblyRunner");
#pragma pack(pop)
