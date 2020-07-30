// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.NUnitAttribute
#include "NUnit/Framework/NUnitAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.IFixtureBuilder
#include "NUnit/Framework/Interfaces/IFixtureBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.ITestFixtureData
#include "NUnit/Framework/Interfaces/ITestFixtureData.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
}
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestFixtureBuilder
  class NUnitTestFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute
  class TestFixtureAttribute : public NUnit::Framework::NUnitAttribute, public NUnit::Framework::Interfaces::IFixtureBuilder, public NUnit::Framework::Interfaces::ITestFixtureData {
    public:
    // Nested type: NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__0
    class $BuildFrom$d__0;
    // private readonly NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder _builder
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* builder;
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Offset: 0x18
    NUnit::Framework::Interfaces::RunState RunState;
    // private System.Object[] <Arguments>k__BackingField
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // private System.Type[] <TypeArgs>k__BackingField
    // Offset: 0x30
    ::Array<System::Type*>* TypeArgs;
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x18E2590
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: NUnit.Framework.Interfaces.RunState ITestData::get_RunState()
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Object[] get_Arguments()
    // Offset: 0x18E2598
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: System.Object[] ITestData::get_Arguments()
    ::Array<::Il2CppObject*>* get_Arguments();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x18E25A0
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: NUnit.Framework.Interfaces.IPropertyBag ITestData::get_Properties()
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Type[] get_TypeArgs()
    // Offset: 0x18E25A8
    // Implemented from: NUnit.Framework.Interfaces.ITestFixtureData
    // Base method: System.Type[] ITestFixtureData::get_TypeArgs()
    ::Array<System::Type*>* get_TypeArgs();
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x18E25B0
    // Implemented from: NUnit.Framework.Interfaces.IFixtureBuilder
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> IFixtureBuilder::BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
  }; // NUnit.Framework.TestFixtureAttribute
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute*, "NUnit.Framework", "TestFixtureAttribute");
#pragma pack(pop)
