// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
  // Forward declaring type: NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.NetSync
  class NetSync : public ::Il2CppObject {
    public:
    // static public System.Void SetConnectionStatusChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection> callback)
    // Offset: 0xE952BC
    static void SetConnectionStatusChangedNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncConnection*>::Callback* callback);
    // static public System.Void SetSessionsChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification> callback)
    // Offset: 0xE95334
    static void SetSessionsChangedNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::Callback* callback);
  }; // Oculus.Platform.NetSync
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSync*, "Oculus.Platform", "NetSync");
#pragma pack(pop)
