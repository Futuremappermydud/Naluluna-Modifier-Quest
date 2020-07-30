// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.FactorySubContainerBinderWithParams`1
#include "Zenject/FactorySubContainerBinderWithParams_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass3_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: FactorySubContainerBinder`3<TContract, TParam1, TParam2>
  template<typename TContract, typename TParam1, typename TParam2>
  class FactorySubContainerBinder_3;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactorySubContainerBinder`3
  template<typename TContract, typename TParam1, typename TParam2>
  class FactorySubContainerBinder_3 : public Zenject::FactorySubContainerBinderWithParams_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass4_0;
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/<>c__DisplayClass1_0
    class $$c__DisplayClass1_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_3<TContract, TParam1, TParam2>*;
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      // Offset: 0x0
      Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Offset: 0x0
      System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Zenject.IProvider <ByMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A40A8
      Zenject::IProvider* $ByMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A4090
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0* New_ctor() {
        return (typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`3/<>c__DisplayClass1_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/<>c__DisplayClass2_0
    class $$c__DisplayClass2_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_3<TContract, TParam1, TParam2>*;
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Offset: 0x0
      System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Zenject.IProvider <ByNewGameObjectMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A41E4
      Zenject::IProvider* $ByNewGameObjectMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewGameObjectMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A41CC
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0* New_ctor() {
        return (typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`3/<>c__DisplayClass2_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/<>c__DisplayClass3_0
    class $$c__DisplayClass3_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_3<TContract, TParam1, TParam2>*;
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // public UnityEngine.Object prefab
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Offset: 0x0
      System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Zenject.IProvider <ByNewPrefabMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A4320
      Zenject::IProvider* $ByNewPrefabMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewPrefabMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A4308
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0* New_ctor() {
        return (typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`3/<>c__DisplayClass3_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/<>c__DisplayClass4_0
    class $$c__DisplayClass4_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_3<TContract, TParam1, TParam2>*;
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // public System.String resourcePath
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Offset: 0x0
      System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Zenject.IProvider <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A4488
      Zenject::IProvider* $ByNewPrefabResourceMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewPrefabResourceMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A4470
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0* New_ctor() {
        return (typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`3/<>c__DisplayClass4_0
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0x13A45FC
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByMethod", installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0x13A4774
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewGameObjectMethod", installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0x13A4900
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(UnityEngine::Object* prefab, System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabMethod", prefab, installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0x13A4AB0
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::Il2CppString* resourcePath, System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabResourceMethod", resourcePath, installerMethod));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0x13A45D8
    // Implemented from: Zenject.FactorySubContainerBinderWithParams`1
    // Base method: System.Void FactorySubContainerBinderWithParams`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Base method: System.Void FactorySubContainerBinderBase`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    static FactorySubContainerBinder_3<TContract, TParam1, TParam2>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      return (FactorySubContainerBinder_3<TContract, TParam1, TParam2>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactorySubContainerBinder_3<TContract, TParam1, TParam2>*>::get(), bindContainer, bindInfo, factoryBindInfo, subIdentifier));
    }
  }; // Zenject.FactorySubContainerBinder`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinder_3, "Zenject", "FactorySubContainerBinder`3");
#pragma pack(pop)
