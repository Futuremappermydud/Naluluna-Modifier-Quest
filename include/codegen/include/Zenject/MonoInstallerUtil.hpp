// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoInstallerBase
  class MonoInstallerBase;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoInstallerUtil
  class MonoInstallerUtil : public ::Il2CppObject {
    public:
    // static public System.String GetDefaultResourcePath()
    // Offset: 0xC5FF34
    template<class TInstaller>
    static ::Il2CppString* GetDefaultResourcePath() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::MonoInstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("Zenject", "MonoInstallerUtil", "GetDefaultResourcePath", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
    }
    // static public TInstaller CreateInstaller(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0xD3D6CC
    template<class TInstaller>
    static TInstaller CreateInstaller(::Il2CppString* resourcePath, Zenject::DiContainer* container) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::MonoInstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TInstaller>("Zenject", "MonoInstallerUtil", "CreateInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, resourcePath, container));
    }
  }; // Zenject.MonoInstallerUtil
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstallerUtil*, "Zenject", "MonoInstallerUtil");
#pragma pack(pop)
