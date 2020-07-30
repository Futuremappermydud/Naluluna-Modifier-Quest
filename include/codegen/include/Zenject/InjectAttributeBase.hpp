// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.Internal.PreserveAttribute
#include "Zenject/Internal/PreserveAttribute.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectAttributeBase
  class InjectAttributeBase : public Zenject::Internal::PreserveAttribute {
    public:
    // private System.Boolean <Optional>k__BackingField
    // Offset: 0x10
    bool Optional;
    // private System.Object <Id>k__BackingField
    // Offset: 0x18
    ::Il2CppObject* Id;
    // private Zenject.InjectSources <Source>k__BackingField
    // Offset: 0x20
    Zenject::InjectSources Source;
    // public System.Boolean get_Optional()
    // Offset: 0x1945ABC
    bool get_Optional();
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x1945AC4
    void set_Optional(bool value);
    // public System.Object get_Id()
    // Offset: 0x1945AD0
    ::Il2CppObject* get_Id();
    // public System.Void set_Id(System.Object value)
    // Offset: 0x1945AD8
    void set_Id(::Il2CppObject* value);
    // public Zenject.InjectSources get_Source()
    // Offset: 0x1945AE0
    Zenject::InjectSources get_Source();
    // public System.Void set_Source(Zenject.InjectSources value)
    // Offset: 0x1945AE8
    void set_Source(Zenject::InjectSources value);
    // protected System.Void .ctor()
    // Offset: 0x1945AB4
    // Implemented from: Zenject.Internal.PreserveAttribute
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static InjectAttributeBase* New_ctor();
  }; // Zenject.InjectAttributeBase
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectAttributeBase*, "Zenject", "InjectAttributeBase");
#pragma pack(pop)
