// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
  class TestResultRenderer : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Styles
    class Styles;
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> m_FailedTestCollection
    // Offset: 0x10
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* m_FailedTestCollection;
    // private System.Boolean m_ShowResults
    // Offset: 0x18
    bool m_ShowResults;
    // private UnityEngine.Vector2 m_ScrollPosition
    // Offset: 0x1C
    UnityEngine::Vector2 m_ScrollPosition;
    // static field const value: static private System.Int32 k_MaxStringLength
    static constexpr const int k_MaxStringLength = 15000;
    // Get static field: static private System.Int32 k_MaxStringLength
    static int _get_k_MaxStringLength();
    // Set static field: static private System.Int32 k_MaxStringLength
    static void _set_k_MaxStringLength(int value);
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0xE2D6E4
    static TestResultRenderer* New_ctor(NUnit::Framework::Interfaces::ITestResult* testResults);
    // private System.Void GetFailedTests(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0xE2ED6C
    void GetFailedTests(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void ShowResults()
    // Offset: 0xE2D778
    void ShowResults();
    // public System.Void Draw()
    // Offset: 0xE2D7A4
    void Draw();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer");
#pragma pack(pop)
