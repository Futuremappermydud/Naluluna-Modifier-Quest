// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.Socket/WSABUF
  struct Socket::WSABUF : public System::ValueType {
    public:
    // public System.Int32 len
    // Offset: 0x0
    int len;
    // public System.IntPtr buf
    // Offset: 0x8
    System::IntPtr buf;
    // Creating value type constructor for type: WSABUF
    WSABUF(int len_ = {}, System::IntPtr buf_ = {}) : len{len_}, buf{buf_} {}
  }; // System.Net.Sockets.Socket/WSABUF
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::Socket::WSABUF, "System.Net.Sockets", "Socket/WSABUF");
#pragma pack(pop)
