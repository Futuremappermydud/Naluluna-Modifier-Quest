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
  // Forward declaring type: ScriptableObjectInstallerBase
  class ScriptableObjectInstallerBase;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScriptableObjectInstallerUtil
  class ScriptableObjectInstallerUtil : public ::Il2CppObject {
    public:
    // static public System.String GetDefaultResourcePath()
    // Offset: 0xC5FFF4
    template<class TInstaller>
    static ::Il2CppString* GetDefaultResourcePath() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::ScriptableObjectInstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("Zenject", "ScriptableObjectInstallerUtil", "GetDefaultResourcePath", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
    }
    // static public TInstaller CreateInstaller(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0xD3D844
    template<class TInstaller>
    static TInstaller CreateInstaller(::Il2CppString* resourcePath, Zenject::DiContainer* container) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::ScriptableObjectInstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TInstaller>("Zenject", "ScriptableObjectInstallerUtil", "CreateInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, resourcePath, container));
    }
  }; // Zenject.ScriptableObjectInstallerUtil
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstallerUtil*, "Zenject", "ScriptableObjectInstallerUtil");
#pragma pack(pop)
