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
  // Autogenerated type: System.Net.Sockets.SocketShutdown
  struct SocketShutdown : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Net.Sockets.SocketShutdown Receive
    static constexpr const int Receive = 0;
    // Get static field: static public System.Net.Sockets.SocketShutdown Receive
    static System::Net::Sockets::SocketShutdown _get_Receive();
    // Set static field: static public System.Net.Sockets.SocketShutdown Receive
    static void _set_Receive(System::Net::Sockets::SocketShutdown value);
    // static field const value: static public System.Net.Sockets.SocketShutdown Send
    static constexpr const int Send = 1;
    // Get static field: static public System.Net.Sockets.SocketShutdown Send
    static System::Net::Sockets::SocketShutdown _get_Send();
    // Set static field: static public System.Net.Sockets.SocketShutdown Send
    static void _set_Send(System::Net::Sockets::SocketShutdown value);
    // static field const value: static public System.Net.Sockets.SocketShutdown Both
    static constexpr const int Both = 2;
    // Get static field: static public System.Net.Sockets.SocketShutdown Both
    static System::Net::Sockets::SocketShutdown _get_Both();
    // Set static field: static public System.Net.Sockets.SocketShutdown Both
    static void _set_Both(System::Net::Sockets::SocketShutdown value);
    // Creating value type constructor for type: SocketShutdown
    SocketShutdown(int value_ = {}) : value{value_} {}
  }; // System.Net.Sockets.SocketShutdown
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketShutdown, "System.Net.Sockets", "SocketShutdown");
#pragma pack(pop)
