// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RaycastHit
  struct RaycastHit : public System::ValueType {
    public:
    // UnityEngine.Vector3 m_Point
    // Offset: 0x0
    UnityEngine::Vector3 m_Point;
    // UnityEngine.Vector3 m_Normal
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // System.UInt32 m_FaceID
    // Offset: 0x18
    uint m_FaceID;
    // System.Single m_Distance
    // Offset: 0x1C
    float m_Distance;
    // UnityEngine.Vector2 m_UV
    // Offset: 0x20
    UnityEngine::Vector2 m_UV;
    // System.Int32 m_Collider
    // Offset: 0x28
    int m_Collider;
    // Creating value type constructor for type: RaycastHit
    RaycastHit(UnityEngine::Vector3 m_Point_ = {}, UnityEngine::Vector3 m_Normal_ = {}, uint m_FaceID_ = {}, float m_Distance_ = {}, UnityEngine::Vector2 m_UV_ = {}, int m_Collider_ = {}) : m_Point{m_Point_}, m_Normal{m_Normal_}, m_FaceID{m_FaceID_}, m_Distance{m_Distance_}, m_UV{m_UV_}, m_Collider{m_Collider_} {}
    // public UnityEngine.Collider get_collider()
    // Offset: 0xA5B12C
    UnityEngine::Collider* get_collider();
    // public UnityEngine.Vector3 get_point()
    // Offset: 0xA5B134
    UnityEngine::Vector3 get_point();
    // public System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0xA5B140
    void set_point(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xA5B14C
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xA5B158
    void set_normal(UnityEngine::Vector3 value);
    // public System.Single get_distance()
    // Offset: 0xA5B164
    float get_distance();
    // public System.Void set_distance(System.Single value)
    // Offset: 0xA5B16C
    void set_distance(float value);
  }; // UnityEngine.RaycastHit
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
#pragma pack(pop)
