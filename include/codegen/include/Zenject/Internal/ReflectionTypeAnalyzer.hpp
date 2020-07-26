// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer
  class ReflectionTypeAnalyzer : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c
    class $$c;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_1
    class $$c__DisplayClass7_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<System.Type> _injectAttributeTypes
    static System::Collections::Generic::HashSet_1<System::Type*>* _get__injectAttributeTypes();
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<System.Type> _injectAttributeTypes
    static void _set__injectAttributeTypes(System::Collections::Generic::HashSet_1<System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF28A28
    static void _cctor();
    // static public System.Void AddCustomInjectAttribute()
    // Offset: 0xC4E134
    template<class T>
    static void AddCustomInjectAttribute() {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("Zenject.Internal", "ReflectionTypeAnalyzer", "AddCustomInjectAttribute", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // static public System.Void AddCustomInjectAttribute(System.Type type)
    // Offset: 0xF28B04
    static void AddCustomInjectAttribute(System::Type* type);
    // static public Zenject.Internal.ReflectionTypeInfo GetReflectionInfo(System.Type type)
    // Offset: 0xF28BC8
    static Zenject::Internal::ReflectionTypeInfo* GetReflectionInfo(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo> GetPropertyInfos(System.Type type)
    // Offset: 0xF29480
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* GetPropertyInfos(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo> GetFieldInfos(System.Type type)
    // Offset: 0xF292AC
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* GetFieldInfos(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo> GetMethodInfos(System.Type type)
    // Offset: 0xF28F50
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* GetMethodInfos(System::Type* type);
    // static private Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo GetConstructorInfo(System.Type type)
    // Offset: 0xF28D90
    static Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* GetConstructorInfo(System::Type* type);
    // static private Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo CreateInjectableInfoForParam(System.Type parentType, System.Reflection.ParameterInfo paramInfo)
    // Offset: 0xF29BA0
    static Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* CreateInjectableInfoForParam(System::Type* parentType, System::Reflection::ParameterInfo* paramInfo);
    // static private Zenject.InjectableInfo GetInjectableInfoForMember(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0xF29DD0
    static Zenject::InjectableInfo* GetInjectableInfoForMember(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
    // static private System.Reflection.ConstructorInfo TryGetInjectConstructor(System.Type type)
    // Offset: 0xF29774
    static System::Reflection::ConstructorInfo* TryGetInjectConstructor(System::Type* type);
  }; // Zenject.Internal.ReflectionTypeAnalyzer
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer*, "Zenject.Internal", "ReflectionTypeAnalyzer");
#pragma pack(pop)
