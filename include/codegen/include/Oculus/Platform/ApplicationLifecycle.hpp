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
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.ApplicationLifecycle
  class ApplicationLifecycle : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Models.LaunchDetails GetLaunchDetails()
    // Offset: 0x157E374
    static Oculus::Platform::Models::LaunchDetails* GetLaunchDetails();
    // static public System.Void SetLaunchIntentChangedNotificationCallback(Oculus.Platform.Message`1/Callback<System.String> callback)
    // Offset: 0x157E474
    static void SetLaunchIntentChangedNotificationCallback(typename Oculus::Platform::Message_1<::Il2CppString*>::Callback* callback);
  }; // Oculus.Platform.ApplicationLifecycle
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationLifecycle*, "Oculus.Platform", "ApplicationLifecycle");
#pragma pack(pop)
