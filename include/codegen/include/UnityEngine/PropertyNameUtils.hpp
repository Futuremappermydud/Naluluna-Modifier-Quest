// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PropertyNameUtils
  class PropertyNameUtils : public ::Il2CppObject {
    public:
    // static public UnityEngine.PropertyName PropertyNameFromString(System.String name)
    // Offset: 0x1404E38
    static UnityEngine::PropertyName PropertyNameFromString(::Il2CppString* name);
    // static private System.Void PropertyNameFromString_Injected(System.String name, UnityEngine.PropertyName ret)
    // Offset: 0x1404FC4
    static void PropertyNameFromString_Injected(::Il2CppString* name, UnityEngine::PropertyName& ret);
  }; // UnityEngine.PropertyNameUtils
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
#pragma pack(pop)
