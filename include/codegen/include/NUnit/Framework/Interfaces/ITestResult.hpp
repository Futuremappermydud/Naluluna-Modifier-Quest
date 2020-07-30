// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITestResult
  class ITestResult : public NUnit::Framework::Interfaces::IXmlNodeBuilder {
    public:
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.Double get_Duration()
    // Offset: 0xFFFFFFFF
    double get_Duration();
    // public System.DateTime get_StartTime()
    // Offset: 0xFFFFFFFF
    System::DateTime get_StartTime();
    // public System.DateTime get_EndTime()
    // Offset: 0xFFFFFFFF
    System::DateTime get_EndTime();
    // public System.String get_Message()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Message();
    // public System.String get_StackTrace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_StackTrace();
    // public System.Int32 get_AssertCount()
    // Offset: 0xFFFFFFFF
    int get_AssertCount();
    // public System.Int32 get_FailCount()
    // Offset: 0xFFFFFFFF
    int get_FailCount();
    // public System.Int32 get_PassCount()
    // Offset: 0xFFFFFFFF
    int get_PassCount();
    // public System.Int32 get_SkipCount()
    // Offset: 0xFFFFFFFF
    int get_SkipCount();
    // public System.Int32 get_InconclusiveCount()
    // Offset: 0xFFFFFFFF
    int get_InconclusiveCount();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    bool get_HasChildren();
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
    // public NUnit.Framework.Interfaces.ITest get_Test()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITest* get_Test();
    // public System.String get_Output()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Output();
  }; // NUnit.Framework.Interfaces.ITestResult
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestResult*, "NUnit.Framework.Interfaces", "ITestResult");
#pragma pack(pop)
