// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.NetSyncConnectionStatus
  struct NetSyncConnectionStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static Oculus::Platform::NetSyncConnectionStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static Oculus::Platform::NetSyncConnectionStatus _get_Connecting();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static void _set_Connecting(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static constexpr const int Disconnected = 2;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static Oculus::Platform::NetSyncConnectionStatus _get_Disconnected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static void _set_Disconnected(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static constexpr const int Connected = 3;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static Oculus::Platform::NetSyncConnectionStatus _get_Connected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static void _set_Connected(Oculus::Platform::NetSyncConnectionStatus value);
    // Creating value type constructor for type: NetSyncConnectionStatus
    NetSyncConnectionStatus(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.NetSyncConnectionStatus
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncConnectionStatus, "Oculus.Platform", "NetSyncConnectionStatus");
#pragma pack(pop)
