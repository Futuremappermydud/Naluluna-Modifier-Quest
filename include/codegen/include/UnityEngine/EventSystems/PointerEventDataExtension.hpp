// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
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
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PointerEventDataExtension
  class PointerEventDataExtension : public ::Il2CppObject {
    public:
    // static public System.Boolean IsVRPointer(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x18E823C
    static bool IsVRPointer(UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public UnityEngine.Ray GetRay(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x18EA884
    static UnityEngine::Ray GetRay(UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public UnityEngine.Vector2 GetSwipeStart(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x18E9CA4
    static UnityEngine::Vector2 GetSwipeStart(UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public System.Void SetSwipeStart(UnityEngine.EventSystems.PointerEventData pointerEventData, UnityEngine.Vector2 start)
    // Offset: 0x18E82BC
    static void SetSwipeStart(UnityEngine::EventSystems::PointerEventData* pointerEventData, UnityEngine::Vector2 start);
  }; // UnityEngine.EventSystems.PointerEventDataExtension
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerEventDataExtension*, "UnityEngine.EventSystems", "PointerEventDataExtension");
#pragma pack(pop)
