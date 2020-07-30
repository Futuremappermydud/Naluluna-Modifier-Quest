// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectTypeInfo/InjectMethodInfo
  class InjectTypeInfo::InjectMethodInfo : public ::Il2CppObject {
    public:
    // public readonly System.String Name
    // Offset: 0x10
    ::Il2CppString* Name;
    // public readonly Zenject.ZenInjectMethod Action
    // Offset: 0x18
    Zenject::ZenInjectMethod* Action;
    // public readonly Zenject.InjectableInfo[] Parameters
    // Offset: 0x20
    ::Array<Zenject::InjectableInfo*>* Parameters;
    // public System.Void .ctor(Zenject.ZenInjectMethod action, Zenject.InjectableInfo[] parameters, System.String name)
    // Offset: 0x1945E40
    static InjectTypeInfo::InjectMethodInfo* New_ctor(Zenject::ZenInjectMethod* action, ::Array<Zenject::InjectableInfo*>* parameters, ::Il2CppString* name);
  }; // Zenject.InjectTypeInfo/InjectMethodInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
#pragma pack(pop)
