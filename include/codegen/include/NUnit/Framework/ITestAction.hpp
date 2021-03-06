// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ActionTargets
  struct ActionTargets;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.ITestAction
  class ITestAction {
    public:
    // public System.Void BeforeTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void BeforeTest(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void AfterTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void AfterTest(NUnit::Framework::Interfaces::ITest* test);
    // public NUnit.Framework.ActionTargets get_Targets()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::ActionTargets get_Targets();
  }; // NUnit.Framework.ITestAction
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ITestAction*, "NUnit.Framework", "ITestAction");
#pragma pack(pop)
