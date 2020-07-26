// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
#include "UnityEngine/TestRunner/TestLaunchers/IRemoteTestResultDataFactory.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestData
  class RemoteTestData;
  // Forward declaring type: RemoteTestResultData
  class RemoteTestResultData;
  // Forward declaring type: RemoteTestResultDataWithTestData
  class RemoteTestResultDataWithTestData;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataFactory
  class RemoteTestResultDataFactory : public ::Il2CppObject, public UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory {
    public:
    // private UnityEngine.TestRunner.TestLaunchers.RemoteTestData[] CreateTestDataList(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE26400
    ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>* CreateTestDataList(NUnit::Framework::Interfaces::ITest* test);
    // static private UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData[] CreateTestResultDataList(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xE265A0
    static ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>* CreateTestResultDataList(NUnit::Framework::Interfaces::ITestResult* result);
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTestResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xE26288
    // Implemented from: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
    // Base method: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData IRemoteTestResultDataFactory::CreateFromTestResult(NUnit.Framework.Interfaces.ITestResult result)
    UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTestResult(NUnit::Framework::Interfaces::ITestResult* result);
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE26734
    // Implemented from: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
    // Base method: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData IRemoteTestResultDataFactory::CreateFromTest(NUnit.Framework.Interfaces.ITest test)
    UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTest(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void .ctor()
    // Offset: 0xE26858
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemoteTestResultDataFactory* New_ctor();
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataFactory
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataFactory*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultDataFactory");
#pragma pack(pop)
