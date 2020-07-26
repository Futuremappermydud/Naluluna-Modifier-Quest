// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.MouseButtonEventData
  class MouseButtonEventData : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.PointerEventData/FramePressState buttonState
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::FramePressState buttonState;
    // public UnityEngine.EventSystems.PointerEventData buttonData
    // Offset: 0x18
    UnityEngine::EventSystems::PointerEventData* buttonData;
    // public System.Boolean PressedThisFrame()
    // Offset: 0x191DE14
    bool PressedThisFrame();
    // public System.Boolean ReleasedThisFrame()
    // Offset: 0x191DE28
    bool ReleasedThisFrame();
    // public System.Void .ctor()
    // Offset: 0x191DE3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MouseButtonEventData* New_ctor();
  }; // VRUIControls.MouseButtonEventData
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::MouseButtonEventData*, "VRUIControls", "MouseButtonEventData");
#pragma pack(pop)
