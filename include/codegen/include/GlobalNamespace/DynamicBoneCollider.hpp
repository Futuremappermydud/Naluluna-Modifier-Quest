// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: DynamicBoneColliderBase
#include "GlobalNamespace/DynamicBoneColliderBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DynamicBoneCollider
  class DynamicBoneCollider : public GlobalNamespace::DynamicBoneColliderBase {
    public:
    // public System.Single m_Radius
    // Offset: 0x2C
    float m_Radius;
    // public System.Single m_Height
    // Offset: 0x30
    float m_Height;
    // private System.Void OnValidate()
    // Offset: 0x19363AC
    void OnValidate();
    // static private System.Void OutsideSphere(UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x193669C
    static void OutsideSphere(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void InsideSphere(UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x1936830
    static void InsideSphere(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void OutsideCapsule(UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x19369D4
    static void OutsideCapsule(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // static private System.Void InsideCapsule(UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x1936E10
    static void InsideCapsule(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1937220
    void OnDrawGizmosSelected();
    // public override System.Void Collide(UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x1936444
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::Collide(UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    void Collide(UnityEngine::Vector3& particlePosition, float particleRadius);
    // public System.Void .ctor()
    // Offset: 0x1937408
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DynamicBoneCollider* New_ctor();
  }; // DynamicBoneCollider
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneCollider*, "", "DynamicBoneCollider");
#pragma pack(pop)
