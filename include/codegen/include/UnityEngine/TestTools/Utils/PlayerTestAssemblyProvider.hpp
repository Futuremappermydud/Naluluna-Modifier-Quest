// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
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
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyLoadProxy
  class IAssemblyLoadProxy;
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Autogenerated type: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
  class PlayerTestAssemblyProvider : public ::Il2CppObject {
    public:
    // private UnityEngine.TestTools.Utils.IAssemblyLoadProxy m_AssemblyLoadProxy
    // Offset: 0x10
    UnityEngine::TestTools::Utils::IAssemblyLoadProxy* m_AssemblyLoadProxy;
    // private readonly System.Collections.Generic.List`1<System.String> m_AssembliesToLoad
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesToLoad;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* _get_m_LoadedAssemblies();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static void _set_m_LoadedAssemblies(System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* value);
    // System.Void .ctor(UnityEngine.TestTools.Utils.IAssemblyLoadProxy assemblyLoadProxy, System.Collections.Generic.List`1<System.String> assembliesToLoad)
    // Offset: 0x195BD80
    static PlayerTestAssemblyProvider* New_ctor(UnityEngine::TestTools::Utils::IAssemblyLoadProxy* assemblyLoadProxy, System::Collections::Generic::List_1<::Il2CppString*>* assembliesToLoad);
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> GetUserAssemblies()
    // Offset: 0x195C06C
    System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* GetUserAssemblies();
    // private System.Void LoadAssemblies()
    // Offset: 0x195BDD8
    void LoadAssemblies();
  }; // UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider*, "UnityEngine.TestTools.Utils", "PlayerTestAssemblyProvider");
#pragma pack(pop)
