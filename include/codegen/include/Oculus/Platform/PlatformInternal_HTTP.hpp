// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.PlatformInternal
#include "Oculus/Platform/PlatformInternal.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: HttpTransferUpdate
  class HttpTransferUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.PlatformInternal/HTTP
  class PlatformInternal::HTTP : public ::Il2CppObject {
    public:
    // static public System.Void SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate> callback)
    // Offset: 0xE96140
    static void SetHttpTransferUpdateCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::HttpTransferUpdate*>::Callback* callback);
  }; // Oculus.Platform.PlatformInternal/HTTP
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal::HTTP*, "Oculus.Platform", "PlatformInternal/HTTP");
#pragma pack(pop)
