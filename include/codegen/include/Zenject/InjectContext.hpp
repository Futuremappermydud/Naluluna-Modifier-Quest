// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectContext
  class InjectContext : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: Zenject::InjectContext::$get_ParentContexts$d__52
    class $get_ParentContexts$d__52;
    // Nested type: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54
    class $get_ParentContextsAndSelf$d__54;
    // Nested type: Zenject::InjectContext::$get_AllObjectTypes$d__56
    class $get_AllObjectTypes$d__56;
    // private Zenject.BindingId _bindingId
    // Offset: 0x10
    Zenject::BindingId bindingId;
    // private System.Type _objectType
    // Offset: 0x20
    System::Type* objectType;
    // private Zenject.InjectContext _parentContext
    // Offset: 0x28
    Zenject::InjectContext* parentContext;
    // private System.Object _objectInstance
    // Offset: 0x30
    ::Il2CppObject* objectInstance;
    // private System.String _memberName
    // Offset: 0x38
    ::Il2CppString* memberName;
    // private System.Boolean _optional
    // Offset: 0x40
    bool optional;
    // private Zenject.InjectSources _sourceType
    // Offset: 0x44
    Zenject::InjectSources sourceType;
    // private System.Object _fallBackValue
    // Offset: 0x48
    ::Il2CppObject* fallBackValue;
    // private System.Object _concreteIdentifier
    // Offset: 0x50
    ::Il2CppObject* concreteIdentifier;
    // private Zenject.DiContainer _container
    // Offset: 0x58
    Zenject::DiContainer* container;
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType)
    // Offset: 0xF25998
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType);
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier)
    // Offset: 0xF181AC
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier);
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier, System.Boolean optional)
    // Offset: 0xF25A0C
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier, bool optional);
    // public System.Void Reset()
    // Offset: 0xF258CC
    void Reset();
    // public Zenject.BindingId get_BindingId()
    // Offset: 0xF25B48
    Zenject::BindingId get_BindingId();
    // public System.Type get_ObjectType()
    // Offset: 0xF25B54
    System::Type* get_ObjectType();
    // public System.Void set_ObjectType(System.Type value)
    // Offset: 0xF25B5C
    void set_ObjectType(System::Type* value);
    // public Zenject.InjectContext get_ParentContext()
    // Offset: 0xF25B64
    Zenject::InjectContext* get_ParentContext();
    // public System.Void set_ParentContext(Zenject.InjectContext value)
    // Offset: 0xF25B6C
    void set_ParentContext(Zenject::InjectContext* value);
    // public System.Object get_ObjectInstance()
    // Offset: 0xF25B74
    ::Il2CppObject* get_ObjectInstance();
    // public System.Void set_ObjectInstance(System.Object value)
    // Offset: 0xF25B7C
    void set_ObjectInstance(::Il2CppObject* value);
    // public System.Object get_Identifier()
    // Offset: 0xF25B84
    ::Il2CppObject* get_Identifier();
    // public System.Void set_Identifier(System.Object value)
    // Offset: 0xF25A04
    void set_Identifier(::Il2CppObject* value);
    // public System.String get_MemberName()
    // Offset: 0xF25B8C
    ::Il2CppString* get_MemberName();
    // public System.Void set_MemberName(System.String value)
    // Offset: 0xF25B94
    void set_MemberName(::Il2CppString* value);
    // public System.Type get_MemberType()
    // Offset: 0xF24E34
    System::Type* get_MemberType();
    // public System.Void set_MemberType(System.Type value)
    // Offset: 0xF259FC
    void set_MemberType(System::Type* value);
    // public System.Boolean get_Optional()
    // Offset: 0xF25B9C
    bool get_Optional();
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0xF25BA4
    void set_Optional(bool value);
    // public Zenject.InjectSources get_SourceType()
    // Offset: 0xF25BB0
    Zenject::InjectSources get_SourceType();
    // public System.Void set_SourceType(Zenject.InjectSources value)
    // Offset: 0xF25BB8
    void set_SourceType(Zenject::InjectSources value);
    // public System.Object get_ConcreteIdentifier()
    // Offset: 0xF25BC0
    ::Il2CppObject* get_ConcreteIdentifier();
    // public System.Void set_ConcreteIdentifier(System.Object value)
    // Offset: 0xF25BC8
    void set_ConcreteIdentifier(::Il2CppObject* value);
    // public System.Object get_FallBackValue()
    // Offset: 0xF25BD0
    ::Il2CppObject* get_FallBackValue();
    // public System.Void set_FallBackValue(System.Object value)
    // Offset: 0xF25BD8
    void set_FallBackValue(::Il2CppObject* value);
    // public Zenject.DiContainer get_Container()
    // Offset: 0xF25BE0
    Zenject::DiContainer* get_Container();
    // public System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0xF25BE8
    void set_Container(Zenject::DiContainer* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContexts()
    // Offset: 0xF25BF0
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContexts();
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContextsAndSelf()
    // Offset: 0xF25CB4
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContextsAndSelf();
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllObjectTypes()
    // Offset: 0xF25D78
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllObjectTypes();
    // public Zenject.InjectContext CreateSubContext(System.Type memberType)
    // Offset: 0xF25E3C
    Zenject::InjectContext* CreateSubContext(System::Type* memberType);
    // public Zenject.InjectContext CreateSubContext(System.Type memberType, System.Object identifier)
    // Offset: 0xF25E44
    Zenject::InjectContext* CreateSubContext(System::Type* memberType, ::Il2CppObject* identifier);
    // public Zenject.InjectContext Clone()
    // Offset: 0xF25F88
    Zenject::InjectContext* Clone();
    // public System.String GetObjectGraphString()
    // Offset: 0xF260AC
    ::Il2CppString* GetObjectGraphString();
    // public System.Void .ctor()
    // Offset: 0xF258A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InjectContext* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xF25A54
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Zenject.InjectContext
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext*, "Zenject", "InjectContext");
#pragma pack(pop)
