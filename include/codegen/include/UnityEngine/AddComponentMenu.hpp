// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AddComponentMenu
  class AddComponentMenu : public System::Attribute {
    public:
    // private System.String m_AddComponentMenu
    // Offset: 0x10
    ::Il2CppString* m_AddComponentMenu;
    // private System.Int32 m_Ordering
    // Offset: 0x18
    int m_Ordering;
    // public System.Void .ctor(System.String menuName)
    // Offset: 0x12E6D80
    static AddComponentMenu* New_ctor(::Il2CppString* menuName);
    // public System.Void .ctor(System.String menuName, System.Int32 order)
    // Offset: 0x12E6DBC
    static AddComponentMenu* New_ctor(::Il2CppString* menuName, int order);
  }; // UnityEngine.AddComponentMenu
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
#pragma pack(pop)
