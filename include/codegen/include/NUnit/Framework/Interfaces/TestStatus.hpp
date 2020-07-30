// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.TestStatus
  struct TestStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static constexpr const int Inconclusive = 0;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static NUnit::Framework::Interfaces::TestStatus _get_Inconclusive();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static void _set_Inconclusive(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static constexpr const int Skipped = 1;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static NUnit::Framework::Interfaces::TestStatus _get_Skipped();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static void _set_Skipped(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Passed
    static constexpr const int Passed = 2;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Passed
    static NUnit::Framework::Interfaces::TestStatus _get_Passed();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Passed
    static void _set_Passed(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Failed
    static constexpr const int Failed = 3;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Failed
    static NUnit::Framework::Interfaces::TestStatus _get_Failed();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Failed
    static void _set_Failed(NUnit::Framework::Interfaces::TestStatus value);
    // Creating value type constructor for type: TestStatus
    TestStatus(int value_ = {}) : value{value_} {}
  }; // NUnit.Framework.Interfaces.TestStatus
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TestStatus, "NUnit.Framework.Interfaces", "TestStatus");
#pragma pack(pop)
