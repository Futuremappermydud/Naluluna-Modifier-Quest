// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.SendMouseEvents
#include "UnityEngine/SendMouseEvents.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SendMouseEvents/HitInfo
  struct SendMouseEvents::HitInfo : public System::ValueType {
    public:
    // public UnityEngine.GameObject target
    // Offset: 0x0
    UnityEngine::GameObject* target;
    // public UnityEngine.Camera camera
    // Offset: 0x8
    UnityEngine::Camera* camera;
    // Creating value type constructor for type: HitInfo
    HitInfo(UnityEngine::GameObject* target_ = {}, UnityEngine::Camera* camera_ = {}) : target{target_}, camera{camera_} {}
    // public System.Void SendMessage(System.String name)
    // Offset: 0xA5CE6C
    void SendMessage(::Il2CppString* name);
    // static public System.Boolean Compare(UnityEngine.SendMouseEvents/HitInfo lhs, UnityEngine.SendMouseEvents/HitInfo rhs)
    // Offset: 0x195EED4
    static bool Compare(UnityEngine::SendMouseEvents::HitInfo lhs, UnityEngine::SendMouseEvents::HitInfo rhs);
  }; // UnityEngine.SendMouseEvents/HitInfo
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SendMouseEvents::HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
#pragma pack(pop)
