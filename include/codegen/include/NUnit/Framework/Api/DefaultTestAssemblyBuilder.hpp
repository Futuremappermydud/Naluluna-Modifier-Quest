// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ISuiteBuilder
  class ISuiteBuilder;
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Logger
  class Logger;
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Api
namespace NUnit::Framework::Api {
  // Autogenerated type: NUnit.Framework.Api.DefaultTestAssemblyBuilder
  class DefaultTestAssemblyBuilder : public ::Il2CppObject {
    public:
    // Get static field: static private NUnit.Framework.Internal.Logger log
    static NUnit::Framework::Internal::Logger* _get_log();
    // Set static field: static private NUnit.Framework.Internal.Logger log
    static void _set_log(NUnit::Framework::Internal::Logger* value);
    // private NUnit.Framework.Interfaces.ISuiteBuilder _defaultSuiteBuilder
    // Offset: 0x10
    NUnit::Framework::Interfaces::ISuiteBuilder* defaultSuiteBuilder;
    // public NUnit.Framework.Interfaces.ITest Build(System.Reflection.Assembly assembly, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x105C1E4
    NUnit::Framework::Interfaces::ITest* Build(System::Reflection::Assembly* assembly, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // private NUnit.Framework.Internal.TestSuite Build(System.Reflection.Assembly assembly, System.String assemblyPath, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x105C3C4
    NUnit::Framework::Internal::TestSuite* Build(System::Reflection::Assembly* assembly, ::Il2CppString* assemblyPath, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // private System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> GetFixtures(System.Reflection.Assembly assembly, System.Collections.IList names)
    // Offset: 0x105CAB0
    System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* GetFixtures(System::Reflection::Assembly* assembly, System::Collections::IList* names);
    // private System.Collections.Generic.IList`1<System.Type> GetCandidateFixtureTypes(System.Reflection.Assembly assembly, System.Collections.IList names)
    // Offset: 0x105D5F4
    System::Collections::Generic::IList_1<System::Type*>* GetCandidateFixtureTypes(System::Reflection::Assembly* assembly, System::Collections::IList* names);
    // private NUnit.Framework.Internal.TestSuite BuildTestAssembly(System.Reflection.Assembly assembly, System.String assemblyName, System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> fixtures)
    // Offset: 0x105D294
    NUnit::Framework::Internal::TestSuite* BuildTestAssembly(System::Reflection::Assembly* assembly, ::Il2CppString* assemblyName, System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* fixtures);
    // static private System.Void .cctor()
    // Offset: 0x105DDC8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x105C104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultTestAssemblyBuilder* New_ctor();
  }; // NUnit.Framework.Api.DefaultTestAssemblyBuilder
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Api::DefaultTestAssemblyBuilder*, "NUnit.Framework.Api", "DefaultTestAssemblyBuilder");
#pragma pack(pop)
