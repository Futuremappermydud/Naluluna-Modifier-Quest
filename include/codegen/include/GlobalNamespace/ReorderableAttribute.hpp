// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ReorderableAttribute
  class ReorderableAttribute : public UnityEngine::PropertyAttribute {
    public:
    // private System.String <ElementHeader>k__BackingField
    // Offset: 0x10
    ::Il2CppString* ElementHeader;
    // private System.Boolean <HeaderZeroIndex>k__BackingField
    // Offset: 0x18
    bool HeaderZeroIndex;
    // private System.Boolean <ElementSingleLine>k__BackingField
    // Offset: 0x19
    bool ElementSingleLine;
    // public System.String get_ElementHeader()
    // Offset: 0xCA59E0
    ::Il2CppString* get_ElementHeader();
    // protected System.Void set_ElementHeader(System.String value)
    // Offset: 0xCA59E8
    void set_ElementHeader(::Il2CppString* value);
    // public System.Boolean get_HeaderZeroIndex()
    // Offset: 0xCA59F0
    bool get_HeaderZeroIndex();
    // protected System.Void set_HeaderZeroIndex(System.Boolean value)
    // Offset: 0xCA59F8
    void set_HeaderZeroIndex(bool value);
    // public System.Boolean get_ElementSingleLine()
    // Offset: 0xCA5A04
    bool get_ElementSingleLine();
    // protected System.Void set_ElementSingleLine(System.Boolean value)
    // Offset: 0xCA5A0C
    void set_ElementSingleLine(bool value);
    // public System.Void .ctor(System.String headerString, System.Boolean isZeroIndex, System.Boolean isSingleLine)
    // Offset: 0xCA5A88
    static ReorderableAttribute* New_ctor(::Il2CppString* headerString, bool isZeroIndex, bool isSingleLine);
    // public System.Void .ctor()
    // Offset: 0xCA5A18
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static ReorderableAttribute* New_ctor();
  }; // ReorderableAttribute
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReorderableAttribute*, "", "ReorderableAttribute");
#pragma pack(pop)
