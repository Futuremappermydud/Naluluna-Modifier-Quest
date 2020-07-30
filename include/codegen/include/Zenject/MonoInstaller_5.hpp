// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoInstaller`5<TDerived, TParam1, TParam2, TParam3, TParam4>
  template<typename TDerived, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class MonoInstaller_5;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoInstaller`5
  template<typename TDerived, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class MonoInstaller_5 : public Zenject::MonoInstallerBase {
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0x15D22E0
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_5<TDerived, TParam1, TParam2, TParam3, TParam4>*>::get(), "InstallFromResource", container, p1, p2, p3, p4));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0x15D23D8
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_5<TDerived, TParam1, TParam2, TParam3, TParam4>*>::get(), "InstallFromResource", resourcePath, container, p1, p2, p3, p4));
    }
    // public System.Void .ctor()
    // Offset: 0x15D2504
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoInstaller_5<TDerived, TParam1, TParam2, TParam3, TParam4>* New_ctor() {
      return (MonoInstaller_5<TDerived, TParam1, TParam2, TParam3, TParam4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_5<TDerived, TParam1, TParam2, TParam3, TParam4>*>::get()));
    }
  }; // Zenject.MonoInstaller`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_5, "Zenject", "MonoInstaller`5");
#pragma pack(pop)
