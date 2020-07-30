// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.NetworkingPeer
  class NetworkingPeer : public ::Il2CppObject {
    public:
    // private System.UInt64 <ID>k__BackingField
    // Offset: 0x10
    uint64_t ID;
    // private Oculus.Platform.PeerConnectionState <State>k__BackingField
    // Offset: 0x18
    Oculus::Platform::PeerConnectionState State;
    // public System.Void .ctor(System.UInt64 id, Oculus.Platform.PeerConnectionState state)
    // Offset: 0xE8FBE0
    static NetworkingPeer* New_ctor(uint64_t id, Oculus::Platform::PeerConnectionState state);
    // public System.UInt64 get_ID()
    // Offset: 0xE93F7C
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0xE93F84
    void set_ID(uint64_t value);
    // public Oculus.Platform.PeerConnectionState get_State()
    // Offset: 0xE93F8C
    Oculus::Platform::PeerConnectionState get_State();
    // private System.Void set_State(Oculus.Platform.PeerConnectionState value)
    // Offset: 0xE93F94
    void set_State(Oculus::Platform::PeerConnectionState value);
  }; // Oculus.Platform.Models.NetworkingPeer
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetworkingPeer*, "Oculus.Platform.Models", "NetworkingPeer");
#pragma pack(pop)
