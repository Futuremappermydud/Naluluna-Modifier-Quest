// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.IPointerEnterHandler
  class IPointerEnterHandler : public UnityEngine::EventSystems::IEventSystemHandler {
    public:
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IPointerEnterHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IPointerEnterHandler*, "UnityEngine.EventSystems", "IPointerEnterHandler");
#pragma pack(pop)
