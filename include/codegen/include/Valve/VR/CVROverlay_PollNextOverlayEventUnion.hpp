// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.CVROverlay
#include "Valve/VR/CVROverlay.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVROverlay/PollNextOverlayEventUnion
  struct CVROverlay::PollNextOverlayEventUnion : public System::ValueType {
    public:
    // public Valve.VR.IVROverlay/_PollNextOverlayEvent pPollNextOverlayEvent
    // Offset: 0x0
    Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent;
    // public Valve.VR.CVROverlay/_PollNextOverlayEventPacked pPollNextOverlayEventPacked
    // Offset: 0x0
    Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    // Creating value type constructor for type: PollNextOverlayEventUnion
    PollNextOverlayEventUnion(Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent_ = {}, Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked_ = {}) : pPollNextOverlayEvent{pPollNextOverlayEvent_}, pPollNextOverlayEventPacked{pPollNextOverlayEventPacked_} {}
  }; // Valve.VR.CVROverlay/PollNextOverlayEventUnion
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVROverlay::PollNextOverlayEventUnion, "Valve.VR", "CVROverlay/PollNextOverlayEventUnion");
#pragma pack(pop)
