// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.Test
  class Test : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITest, public NUnit::Framework::Interfaces::IXmlNodeBuilder, public System::IComparable {
    public:
    // Get static field: static private System.Int32 _nextID
    static int _get__nextID();
    // Set static field: static private System.Int32 _nextID
    static void _set__nextID(int value);
    // protected System.Reflection.MethodInfo[] setUpMethods
    // Offset: 0x10
    ::Array<System::Reflection::MethodInfo*>* setUpMethods;
    // protected System.Reflection.MethodInfo[] tearDownMethods
    // Offset: 0x18
    ::Array<System::Reflection::MethodInfo*>* tearDownMethods;
    // protected NUnit.Framework.Interfaces.ITypeInfo DeclaringTypeInfo
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo;
    // private NUnit.Framework.Interfaces.IMethodInfo _method
    // Offset: 0x28
    NUnit::Framework::Interfaces::IMethodInfo* method;
    // private System.String <Id>k__BackingField
    // Offset: 0x30
    ::Il2CppString* Id;
    // private System.String <Name>k__BackingField
    // Offset: 0x38
    ::Il2CppString* Name;
    // private System.String <FullName>k__BackingField
    // Offset: 0x40
    ::Il2CppString* FullName;
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Offset: 0x48
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Offset: 0x50
    NUnit::Framework::Interfaces::RunState RunState;
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Offset: 0x58
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // private NUnit.Framework.Interfaces.ITest <Parent>k__BackingField
    // Offset: 0x60
    NUnit::Framework::Interfaces::ITest* Parent;
    // private System.Object <Fixture>k__BackingField
    // Offset: 0x68
    ::Il2CppObject* Fixture;
    // Get static field: static private System.String <IdPrefix>k__BackingField
    static ::Il2CppString* _get_$IdPrefix$k__BackingField();
    // Set static field: static private System.String <IdPrefix>k__BackingField
    static void _set_$IdPrefix$k__BackingField(::Il2CppString* value);
    // private System.Int32 <Seed>k__BackingField
    // Offset: 0x70
    int Seed;
    // private System.Boolean <RequiresThread>k__BackingField
    // Offset: 0x74
    bool RequiresThread;
    // protected System.Void .ctor(System.String name)
    // Offset: 0x18D78C0
    static Test* New_ctor(::Il2CppString* name);
    // protected System.Void .ctor(System.String pathName, System.String name)
    // Offset: 0x18D7A08
    static Test* New_ctor(::Il2CppString* pathName, ::Il2CppString* name);
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x18D7AB0
    static Test* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // protected System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x18D7C4C
    static Test* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method);
    // private System.Void Initialize(System.String name)
    // Offset: 0x18D7938
    void Initialize(::Il2CppString* name);
    // static private System.String GetNextId()
    // Offset: 0x18D7EAC
    static ::Il2CppString* GetNextId();
    // public System.Void set_Id(System.String value)
    // Offset: 0x18D7FC4
    void set_Id(::Il2CppString* value);
    // public System.Void set_Name(System.String value)
    // Offset: 0x18D7FCC
    void set_Name(::Il2CppString* value);
    // public System.Void set_FullName(System.String value)
    // Offset: 0x18D7FDC
    void set_FullName(::Il2CppString* value);
    // public System.String get_ClassName()
    // Offset: 0x18D7FE4
    ::Il2CppString* get_ClassName();
    // public System.String get_MethodName()
    // Offset: 0x18D8258
    ::Il2CppString* get_MethodName();
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x18D8260
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // public System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x18D5C34
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x18D8270
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.String get_XmlElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_XmlElementName();
    // public System.String get_TestType()
    // Offset: 0x18D8278
    ::Il2CppString* get_TestType();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x18D82B0
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Void set_Parent(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x18D8340
    void set_Parent(NUnit::Framework::Interfaces::ITest* value);
    // public System.Object get_Fixture()
    // Offset: 0x18D8348
    ::Il2CppObject* get_Fixture();
    // public System.Void set_Fixture(System.Object value)
    // Offset: 0x18D8350
    void set_Fixture(::Il2CppObject* value);
    // static public System.String get_IdPrefix()
    // Offset: 0x18D7F54
    static ::Il2CppString* get_IdPrefix();
    // public System.Int32 get_Seed()
    // Offset: 0x18D8358
    int get_Seed();
    // public System.Void set_Seed(System.Int32 value)
    // Offset: 0x18D8360
    void set_Seed(int value);
    // public NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public System.Void ApplyAttributesToTest(System.Reflection.ICustomAttributeProvider provider)
    // Offset: 0x18D8368
    void ApplyAttributesToTest(System::Reflection::ICustomAttributeProvider* provider);
    // protected System.Void PopulateTestNode(NUnit.Framework.Interfaces.TNode thisNode, System.Boolean recursive)
    // Offset: 0x18D8554
    void PopulateTestNode(NUnit::Framework::Interfaces::TNode* thisNode, bool recursive);
    // static private System.Void .cctor()
    // Offset: 0x18D8984
    static void _cctor();
    // public System.String get_Id()
    // Offset: 0x18D7FBC
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Id()
    ::Il2CppString* get_Id();
    // public System.String get_Name()
    // Offset: 0x18D7C44
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Name()
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0x18D7FD4
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_FullName()
    ::Il2CppString* get_FullName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x18D8250
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITest::get_TypeInfo()
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0x18D5D54
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IMethodInfo ITest::get_Method()
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x18D8268
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.RunState ITest::get_RunState()
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0x18D82A0
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Int32 ITest::get_TestCaseCount()
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x18D82A8
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IPropertyBag ITest::get_Properties()
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Boolean get_IsSuite()
    // Offset: 0x18D82B8
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_IsSuite()
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_HasChildren()
    bool get_HasChildren();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0x18D8338
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITest ITest::get_Parent()
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> ITest::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x18D8844
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x18D88D0
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
  }; // NUnit.Framework.Internal.Test
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Test*, "NUnit.Framework.Internal", "Test");
#pragma pack(pop)
