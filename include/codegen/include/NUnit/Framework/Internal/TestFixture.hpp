// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
// Including type: NUnit.Framework.Interfaces.IDisposableFixture
#include "NUnit/Framework/Interfaces/IDisposableFixture.hpp"
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
  // Autogenerated type: NUnit.Framework.Internal.TestFixture
  class TestFixture : public NUnit::Framework::Internal::TestSuite, public NUnit::Framework::Interfaces::IDisposableFixture {
    public:
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x18D9D3C
    // Implemented from: NUnit.Framework.Internal.TestSuite
    // Base method: System.Void TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    static TestFixture* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType);
  }; // NUnit.Framework.Internal.TestFixture
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFixture*, "NUnit.Framework.Internal", "TestFixture");
#pragma pack(pop)
