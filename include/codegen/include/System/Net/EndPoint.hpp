// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
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
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SocketAddress
  class SocketAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.EndPoint
  class EndPoint : public ::Il2CppObject {
    public:
    // public System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0xF5612C
    System::Net::Sockets::AddressFamily get_AddressFamily();
    // public System.Net.SocketAddress Serialize()
    // Offset: 0xF561DC
    System::Net::SocketAddress* Serialize();
    // public System.Net.EndPoint Create(System.Net.SocketAddress socketAddress)
    // Offset: 0xF5628C
    System::Net::EndPoint* Create(System::Net::SocketAddress* socketAddress);
    // protected System.Void .ctor()
    // Offset: 0xF562D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EndPoint* New_ctor();
  }; // System.Net.EndPoint
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPoint*, "System.Net", "EndPoint");
#pragma pack(pop)
