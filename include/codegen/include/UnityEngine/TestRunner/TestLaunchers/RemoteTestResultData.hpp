// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
  class RemoteTestResultData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c
    class $$c;
    // public System.String testId
    // Offset: 0x10
    ::Il2CppString* testId;
    // public System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // public System.String fullName
    // Offset: 0x20
    ::Il2CppString* fullName;
    // public System.String resultState
    // Offset: 0x28
    ::Il2CppString* resultState;
    // public NUnit.Framework.Interfaces.TestStatus testStatus
    // Offset: 0x30
    NUnit::Framework::Interfaces::TestStatus testStatus;
    // public System.Double duration
    // Offset: 0x38
    double duration;
    // public System.DateTime startTime
    // Offset: 0x40
    System::DateTime startTime;
    // public System.DateTime endTime
    // Offset: 0x48
    System::DateTime endTime;
    // public System.String message
    // Offset: 0x50
    ::Il2CppString* message;
    // public System.String stackTrace
    // Offset: 0x58
    ::Il2CppString* stackTrace;
    // public System.Int32 assertCount
    // Offset: 0x60
    int assertCount;
    // public System.Int32 failCount
    // Offset: 0x64
    int failCount;
    // public System.Int32 passCount
    // Offset: 0x68
    int passCount;
    // public System.Int32 skipCount
    // Offset: 0x6C
    int skipCount;
    // public System.Int32 inconclusiveCount
    // Offset: 0x70
    int inconclusiveCount;
    // public System.Boolean hasChildren
    // Offset: 0x74
    bool hasChildren;
    // public System.String output
    // Offset: 0x78
    ::Il2CppString* output;
    // public System.String xml
    // Offset: 0x80
    ::Il2CppString* xml;
    // public System.String[] childrenIds
    // Offset: 0x88
    ::Array<::Il2CppString*>* childrenIds;
    // System.Void .ctor(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xE256FC
    static RemoteTestResultData* New_ctor(NUnit::Framework::Interfaces::ITestResult* result);
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultData");
#pragma pack(pop)
