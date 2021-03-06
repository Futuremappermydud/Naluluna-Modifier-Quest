// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.ParameterizedFixtureSuite
  class ParameterizedFixtureSuite : public NUnit::Framework::Internal::TestSuite {
    public:
    // private System.Boolean _genericFixture
    // Offset: 0x89
    bool genericFixture;
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x18D5700
    // Implemented from: NUnit.Framework.Internal.TestSuite
    // Base method: System.Void TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    static ParameterizedFixtureSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public override System.String get_TestType()
    // Offset: 0x18D5978
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_TestType()
    ::Il2CppString* get_TestType();
  }; // NUnit.Framework.Internal.ParameterizedFixtureSuite
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterizedFixtureSuite*, "NUnit.Framework.Internal", "ParameterizedFixtureSuite");
#pragma pack(pop)
