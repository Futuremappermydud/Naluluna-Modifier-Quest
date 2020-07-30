// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.Utils.IAssemblyWrapper
#include "UnityEngine/TestTools/Utils/IAssemblyWrapper.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyWrapper
  class AssemblyWrapper : public ::Il2CppObject, public UnityEngine::TestTools::Utils::IAssemblyWrapper {
    public:
    // private readonly System.Reflection.Assembly <Assembly>k__BackingField
    // Offset: 0x10
    System::Reflection::Assembly* Assembly;
    // public System.Void .ctor(System.Reflection.Assembly assembly)
    // Offset: 0xE323C4
    static AssemblyWrapper* New_ctor(System::Reflection::Assembly* assembly);
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xE323F8
    // Implemented from: UnityEngine.TestTools.Utils.IAssemblyWrapper
    // Base method: System.Reflection.Assembly IAssemblyWrapper::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
  }; // UnityEngine.TestTools.Utils.AssemblyWrapper
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::AssemblyWrapper*, "UnityEngine.TestTools.Utils", "AssemblyWrapper");
#pragma pack(pop)
