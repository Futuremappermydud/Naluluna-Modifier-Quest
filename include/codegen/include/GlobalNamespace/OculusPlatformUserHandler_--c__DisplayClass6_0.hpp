// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OculusPlatformUserHandler
#include "GlobalNamespace/OculusPlatformUserHandler.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserProof
  class UserProof;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformUserHandler/<>c__DisplayClass6_0
  class OculusPlatformUserHandler::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public HMAsyncRequest asyncRequest
    // Offset: 0x10
    GlobalNamespace::HMAsyncRequest* asyncRequest;
    // public PlatformUserModelSO/GetUserAuthTokenCompletionHandler completionHandler
    // Offset: 0x18
    GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenCompletionHandler* completionHandler;
    // System.Void <GetUserAuthToken>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof> message)
    // Offset: 0xC29130
    void $GetUserAuthToken$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof*>* message);
    // public System.Void .ctor()
    // Offset: 0xC28C18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformUserHandler::$$c__DisplayClass6_0* New_ctor();
  }; // OculusPlatformUserHandler/<>c__DisplayClass6_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserHandler::$$c__DisplayClass6_0*, "", "OculusPlatformUserHandler/<>c__DisplayClass6_0");
#pragma pack(pop)
