// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Net.Sockets.SocketAsyncResult
#include "System/Net/Sockets/SocketAsyncResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketAsyncResult/<>c
  class SocketAsyncResult::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Sockets.SocketAsyncResult/<>c <>9
    static System::Net::Sockets::SocketAsyncResult::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Sockets.SocketAsyncResult/<>c <>9
    static void _set_$$9(System::Net::Sockets::SocketAsyncResult::$$c* value);
    // Get static field: static public System.Threading.WaitCallback <>9__27_0
    static System::Threading::WaitCallback* _get_$$9__27_0();
    // Set static field: static public System.Threading.WaitCallback <>9__27_0
    static void _set_$$9__27_0(System::Threading::WaitCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x12000A0
    static void _cctor();
    // System.Void <Complete>b__27_0(System.Object state)
    // Offset: 0x1200110
    void $Complete$b__27_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x1200108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SocketAsyncResult::$$c* New_ctor();
  }; // System.Net.Sockets.SocketAsyncResult/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncResult::$$c*, "System.Net.Sockets", "SocketAsyncResult/<>c");
#pragma pack(pop)
