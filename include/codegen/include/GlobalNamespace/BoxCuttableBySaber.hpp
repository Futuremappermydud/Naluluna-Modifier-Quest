// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: CuttableBySaber
#include "GlobalNamespace/CuttableBySaber.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BoxCuttableBySaber
  class BoxCuttableBySaber : public GlobalNamespace::CuttableBySaber {
    public:
    // private UnityEngine.BoxCollider _collider
    // Offset: 0x20
    UnityEngine::BoxCollider* collider;
    // private System.Boolean _canBeCut
    // Offset: 0x28
    bool canBeCut;
    // private System.Single _radius
    // Offset: 0x2C
    float radius;
    // public System.Void set_colliderSize(UnityEngine.Vector3 value)
    // Offset: 0xB5E6BC
    void set_colliderSize(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_colliderSize()
    // Offset: 0xB5E7D0
    UnityEngine::Vector3 get_colliderSize();
    // protected System.Void Awake()
    // Offset: 0xB5E7EC
    void Awake();
    // public System.Void SetColliderCenterAndSize(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xB5E84C
    void SetColliderCenterAndSize(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // private System.Void RefreshRadius()
    // Offset: 0xB5E6F0
    void RefreshRadius();
    // public override System.Single get_radius()
    // Offset: 0xB5E670
    // Implemented from: CuttableBySaber
    // Base method: System.Single CuttableBySaber::get_radius()
    float get_radius();
    // public override System.Void set_canBeCut(System.Boolean value)
    // Offset: 0xB5E678
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::set_canBeCut(System.Boolean value)
    void set_canBeCut(bool value);
    // public override System.Boolean get_canBeCut()
    // Offset: 0xB5E6B4
    // Implemented from: CuttableBySaber
    // Base method: System.Boolean CuttableBySaber::get_canBeCut()
    bool get_canBeCut();
    // public override System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xB5E828
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    void Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public System.Void .ctor()
    // Offset: 0xB5E8B0
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BoxCuttableBySaber* New_ctor();
  }; // BoxCuttableBySaber
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoxCuttableBySaber*, "", "BoxCuttableBySaber");
#pragma pack(pop)
