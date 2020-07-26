// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.Touchable
#include "HMUI/Touchable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.CircleTouchable
  class CircleTouchable : public HMUI::Touchable {
    public:
    // private System.Single _minRadius
    // Offset: 0x8C
    float minRadius;
    // private System.Single _maxRadius
    // Offset: 0x90
    float maxRadius;
    // private UnityEngine.RectTransform _containerRect
    // Offset: 0x98
    UnityEngine::RectTransform* containerRect;
    // private System.Void UpdateCachedReferences()
    // Offset: 0xEC1064
    void UpdateCachedReferences();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xEC11B4
    void OnDrawGizmosSelected();
    // private System.Void DrawGizmoCircle(UnityEngine.Vector3 center, System.Single radius, System.Int32 steps)
    // Offset: 0xEC1334
    void DrawGizmoCircle(UnityEngine::Vector3 center, float radius, int steps);
    // protected override System.Void OnEnable()
    // Offset: 0xEC103C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnEnable()
    void OnEnable();
    // public override System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0xEC10DC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Boolean Graphic::Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool Raycast(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public System.Void .ctor()
    // Offset: 0xEC1510
    // Implemented from: HMUI.Touchable
    // Base method: System.Void Touchable::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CircleTouchable* New_ctor();
  }; // HMUI.CircleTouchable
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CircleTouchable*, "HMUI", "CircleTouchable");
#pragma pack(pop)
