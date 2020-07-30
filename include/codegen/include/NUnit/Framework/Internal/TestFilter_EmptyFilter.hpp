// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestFilter/EmptyFilter
  class TestFilter::EmptyFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D9CC8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D9CD0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D9CD8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x18D9CE0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Void .ctor()
    // Offset: 0x18D9C60
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestFilter::EmptyFilter* New_ctor();
  }; // NUnit.Framework.Internal.TestFilter/EmptyFilter
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFilter::EmptyFilter*, "NUnit.Framework.Internal", "TestFilter/EmptyFilter");
#pragma pack(pop)
