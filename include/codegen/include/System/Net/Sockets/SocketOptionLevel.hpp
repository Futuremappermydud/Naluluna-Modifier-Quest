// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketOptionLevel
  struct SocketOptionLevel : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Socket
    static constexpr const int Socket = 65535;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Socket
    static System::Net::Sockets::SocketOptionLevel _get_Socket();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Socket
    static void _set_Socket(System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel IP
    static constexpr const int IP = 0;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel IP
    static System::Net::Sockets::SocketOptionLevel _get_IP();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel IP
    static void _set_IP(System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel IPv6
    static constexpr const int IPv6 = 41;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel IPv6
    static System::Net::Sockets::SocketOptionLevel _get_IPv6();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel IPv6
    static void _set_IPv6(System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Tcp
    static constexpr const int Tcp = 6;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Tcp
    static System::Net::Sockets::SocketOptionLevel _get_Tcp();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Tcp
    static void _set_Tcp(System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Udp
    static constexpr const int Udp = 17;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Udp
    static System::Net::Sockets::SocketOptionLevel _get_Udp();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Udp
    static void _set_Udp(System::Net::Sockets::SocketOptionLevel value);
    // Creating value type constructor for type: SocketOptionLevel
    SocketOptionLevel(int value_ = {}) : value{value_} {}
  }; // System.Net.Sockets.SocketOptionLevel
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketOptionLevel, "System.Net.Sockets", "SocketOptionLevel");
#pragma pack(pop)
