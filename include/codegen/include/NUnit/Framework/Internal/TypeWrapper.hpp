// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper
  class TypeWrapper : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITypeInfo, public NUnit::Framework::Interfaces::IReflectionInfo {
    public:
    // Nested type: NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass1
    class $$c__DisplayClass1;
    // private System.Type <Type>k__BackingField
    // Offset: 0x10
    System::Type* Type;
    // public System.Void .ctor(System.Type type)
    // Offset: 0x18D4D8C
    static TypeWrapper* New_ctor(System::Type* type);
    // private System.Void set_Type(System.Type value)
    // Offset: 0x18E14F0
    void set_Type(System::Type* value);
    // public System.Type get_Type()
    // Offset: 0x18E14E8
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Type ITypeInfo::get_Type()
    System::Type* get_Type();
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0x18E14F8
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITypeInfo::get_BaseType()
    NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.String get_FullName()
    // Offset: 0x18E158C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::get_FullName()
    ::Il2CppString* get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x18E15B0
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Reflection.Assembly ITypeInfo::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0x18E15E0
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::get_Namespace()
    ::Il2CppString* get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x18E1604
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsAbstract()
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x18E162C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsGenericType()
    bool get_IsGenericType();
    // public System.Boolean IsType(System.Type type)
    // Offset: 0x18E165C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::IsType(System.Type type)
    bool IsType(System::Type* type);
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x18E166C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x18E169C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsGenericTypeDefinition()
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0x18E16CC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsSealed()
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0x18E16F4
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsStaticClass()
    bool get_IsStaticClass();
    // public System.String GetDisplayName()
    // Offset: 0x18E1754
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::GetDisplayName()
    ::Il2CppString* GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0x18E17BC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::GetDisplayName(System.Object[] args)
    ::Il2CppString* GetDisplayName(::Array<::Il2CppObject*>* args);
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0x18E1834
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITypeInfo::MakeGenericType(System.Type[] typeArgs)
    NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::Array<System::Type*>* typeArgs);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x18E18C8
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Type ITypeInfo::GetGenericTypeDefinition()
    System::Type* GetGenericTypeDefinition();
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xD43C2C
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: T[] IReflectionInfo::GetCustomAttributes(System.Boolean inherit)
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetCustomAttributes", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, inherit));
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0x14D3734
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: System.Boolean IReflectionInfo::IsDefined(System.Boolean inherit)
    template<class T>
    bool IsDefined(bool inherit) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>(this, "IsDefined", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, inherit));
    }
    // public System.Boolean HasMethodWithAttribute(System.Type attributeType)
    // Offset: 0x18E18EC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::HasMethodWithAttribute(System.Type attributeType)
    bool HasMethodWithAttribute(System::Type* attributeType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0x18E1964
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.IMethodInfo[] ITypeInfo::GetMethods(System.Reflection.BindingFlags flags)
    ::Array<NUnit::Framework::Interfaces::IMethodInfo*>* GetMethods(System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0x18E1AC0
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Reflection.ConstructorInfo ITypeInfo::GetConstructor(System.Type[] argTypes)
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0x18E1BB8
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::HasConstructor(System.Type[] argTypes)
    bool HasConstructor(::Array<System::Type*>* argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0x18E1BD4
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Object ITypeInfo::Construct(System.Object[] args)
    ::Il2CppObject* Construct(::Array<::Il2CppObject*>* args);
    // public override System.String ToString()
    // Offset: 0x18E1C4C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Internal.TypeWrapper
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeWrapper*, "NUnit.Framework.Internal", "TypeWrapper");
#pragma pack(pop)
