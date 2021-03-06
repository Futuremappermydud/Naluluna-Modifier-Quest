// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Bounds
  struct Bounds;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Collider
  class Collider : public UnityEngine::Component {
    public:
    // public System.Boolean get_enabled()
    // Offset: 0x19472E0
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1947320
    void set_enabled(bool value);
    // public UnityEngine.Rigidbody get_attachedRigidbody()
    // Offset: 0x1947370
    UnityEngine::Rigidbody* get_attachedRigidbody();
    // public System.Boolean get_isTrigger()
    // Offset: 0x19473B0
    bool get_isTrigger();
    // public System.Void set_isTrigger(System.Boolean value)
    // Offset: 0x19473F0
    void set_isTrigger(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1947440
    UnityEngine::Bounds get_bounds();
    // private System.Void Internal_ClosestPointOnBounds(UnityEngine.Vector3 point, UnityEngine.Vector3 outPos, System.Single distance)
    // Offset: 0x19474FC
    void Internal_ClosestPointOnBounds(UnityEngine::Vector3 point, UnityEngine::Vector3& outPos, float& distance);
    // public UnityEngine.Vector3 ClosestPointOnBounds(UnityEngine.Vector3 position)
    // Offset: 0x19475D4
    UnityEngine::Vector3 ClosestPointOnBounds(UnityEngine::Vector3 position);
    // private System.Void get_bounds_Injected(UnityEngine.Bounds ret)
    // Offset: 0x19474AC
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void Internal_ClosestPointOnBounds_Injected(UnityEngine.Vector3 point, UnityEngine.Vector3 outPos, System.Single distance)
    // Offset: 0x194756C
    void Internal_ClosestPointOnBounds_Injected(UnityEngine::Vector3& point, UnityEngine::Vector3& outPos, float& distance);
  }; // UnityEngine.Collider
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collider*, "UnityEngine", "Collider");
#pragma pack(pop)
