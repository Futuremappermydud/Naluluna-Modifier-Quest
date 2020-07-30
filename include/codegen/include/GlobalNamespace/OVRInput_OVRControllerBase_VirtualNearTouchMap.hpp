// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawNearTouch
#include "GlobalNamespace/OVRInput_RawNearTouch.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualNearTouchMap
  class OVRInput::OVRControllerBase::VirtualNearTouchMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawNearTouch None
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawNearTouch None;
    // public OVRInput/RawNearTouch PrimaryIndexTrigger
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawNearTouch PrimaryIndexTrigger;
    // public OVRInput/RawNearTouch PrimaryThumbButtons
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawNearTouch PrimaryThumbButtons;
    // public OVRInput/RawNearTouch SecondaryIndexTrigger
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawNearTouch SecondaryIndexTrigger;
    // public OVRInput/RawNearTouch SecondaryThumbButtons
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawNearTouch SecondaryThumbButtons;
    // public OVRInput/RawNearTouch ToRawMask(OVRInput/NearTouch virtualMask)
    // Offset: 0xE5E898
    GlobalNamespace::OVRInput::RawNearTouch ToRawMask(GlobalNamespace::OVRInput::NearTouch virtualMask);
    // public System.Void .ctor()
    // Offset: 0xE5DA88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRInput::OVRControllerBase::VirtualNearTouchMap* New_ctor();
  }; // OVRInput/OVRControllerBase/VirtualNearTouchMap
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
#pragma pack(pop)
