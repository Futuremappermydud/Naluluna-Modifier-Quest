// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionBindInfo/<>c__DisplayClass6_0
  class ConventionBindInfo::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.Assembly assembly
    // Offset: 0x10
    System::Reflection::Assembly* assembly;
    // System.Boolean <ShouldIncludeAssembly>b__0(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0xD577F4
    bool $ShouldIncludeAssembly$b__0(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void .ctor()
    // Offset: 0xD5759C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConventionBindInfo::$$c__DisplayClass6_0* New_ctor();
  }; // Zenject.ConventionBindInfo/<>c__DisplayClass6_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
#pragma pack(pop)
