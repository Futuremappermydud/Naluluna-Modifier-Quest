// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`7<T1, T2, T3, T4, T5, T6, T7>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class Action_7;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Autogenerated type: Zenject.SubContainerCreatorByMethod`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class SubContainerCreatorByMethod_6 : public Zenject::SubContainerCreatorByMethodBase {
    public:
    // private readonly System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> _installMethod
    // Offset: 0x0
    System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installMethod)
    // Offset: 0x15E0C94
    static SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod) {
      return (SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*>::get(), container, containerBindInfo, installMethod));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x15E0CD0
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
    }
  }; // Zenject.SubContainerCreatorByMethod`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_6, "Zenject", "SubContainerCreatorByMethod`6");
#pragma pack(pop)
