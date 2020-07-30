// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.SubContainerCreatorByNewPrefabDynamicContext
#include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`2
  template<typename TParam1, typename TParam2>
  class SubContainerCreatorByNewPrefabMethod_2 : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewPrefabMethod_2::$$c__DisplayClass2_0<TParam1, TParam2>
    class $$c__DisplayClass2_0;
    // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`2/<>c__DisplayClass2_0
    class $$c__DisplayClass2_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*;
      // public Zenject.SubContainerCreatorByNewPrefabMethod`2<TParam1,TParam2> <>4__this
      // Offset: 0x0
      Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>* $$4__this;
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Offset: 0x0
      System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0x1931128
      void $AddInstallers$b__0(Zenject::DiContainer* subContainer) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "<AddInstallers>b__0", subContainer));
      }
      // public System.Void .ctor()
      // Offset: 0x1931110
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::$$c__DisplayClass2_0* New_ctor() {
        return (typename SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::$$c__DisplayClass2_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>::$$c__DisplayClass2_0*>::get()));
      }
    }; // Zenject.SubContainerCreatorByNewPrefabMethod`2/<>c__DisplayClass2_0
    // private readonly System.Action`3<Zenject.DiContainer,TParam1,TParam2> _installerMethod
    // Offset: 0x0
    System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0x1931294
    static SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>* New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      return (SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SubContainerCreatorByNewPrefabMethod_2<TParam1, TParam2>*>::get(), container, prefabProvider, gameObjectBindInfo, installerMethod));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0x19312D0
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddInstallers", args, context));
    }
  }; // Zenject.SubContainerCreatorByNewPrefabMethod`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewPrefabMethod_2, "Zenject", "SubContainerCreatorByNewPrefabMethod`2");
#pragma pack(pop)
