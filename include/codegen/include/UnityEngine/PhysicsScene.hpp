// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PhysicsScene
  struct PhysicsScene : public System::ValueType, public System::IEquatable_1<UnityEngine::PhysicsScene> {
    public:
    // private System.Int32 m_Handle
    // Offset: 0x0
    int m_Handle;
    // Creating value type constructor for type: PhysicsScene
    PhysicsScene(int m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B0D0
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1949DB4
    static bool Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B0D8
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1949EA4
    static bool Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B0E0
    int Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1949FB4
    static int Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A0C0
    static bool Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A214
    static bool Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B0E8
    bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A37C
    static bool Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A4B4
    static bool Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B108
    bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A604
    static int OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xA5B110
    int OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1949E2C
    static bool Internal_RaycastTest_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1949F34
    static bool Internal_Raycast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A040
    static int Internal_RaycastNonAlloc_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A174
    static bool Query_CapsuleCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& point1, UnityEngine::Vector3& point2, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A41C
    static bool Query_SphereCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x194A694
    static int OverlapBoxNonAlloc_Internal_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& center, UnityEngine::Vector3& halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion& orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public override System.String ToString()
    // Offset: 0xA5B0A8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5B0B0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA5B0B8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.PhysicsScene other)
    // Offset: 0xA5B0C0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.PhysicsScene other)
    bool Equals(UnityEngine::PhysicsScene other);
  }; // UnityEngine.PhysicsScene
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
#pragma pack(pop)
