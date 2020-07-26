// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ColliderType
  struct ColliderType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.ColliderType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ProBuilder.ColliderType None
    static UnityEngine::ProBuilder::ColliderType _get_None();
    // Set static field: static public UnityEngine.ProBuilder.ColliderType None
    static void _set_None(UnityEngine::ProBuilder::ColliderType value);
    // static field const value: static public UnityEngine.ProBuilder.ColliderType BoxCollider
    static constexpr const int BoxCollider = 1;
    // Get static field: static public UnityEngine.ProBuilder.ColliderType BoxCollider
    static UnityEngine::ProBuilder::ColliderType _get_BoxCollider();
    // Set static field: static public UnityEngine.ProBuilder.ColliderType BoxCollider
    static void _set_BoxCollider(UnityEngine::ProBuilder::ColliderType value);
    // static field const value: static public UnityEngine.ProBuilder.ColliderType MeshCollider
    static constexpr const int MeshCollider = 2;
    // Get static field: static public UnityEngine.ProBuilder.ColliderType MeshCollider
    static UnityEngine::ProBuilder::ColliderType _get_MeshCollider();
    // Set static field: static public UnityEngine.ProBuilder.ColliderType MeshCollider
    static void _set_MeshCollider(UnityEngine::ProBuilder::ColliderType value);
    // Creating value type constructor for type: ColliderType
    ColliderType(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.ColliderType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColliderType, "UnityEngine.ProBuilder", "ColliderType");
#pragma pack(pop)
