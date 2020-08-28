// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
  class OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> launchCheckoutFlowTaskSource
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;
    // System.Void <LaunchCheckoutFlow>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase> msg)
    // Offset: 0xC3AA8C
    void $LaunchCheckoutFlow$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>* msg);
    // public System.Void .ctor()
    // Offset: 0xC3AA84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0* New_ctor();
  }; // OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0");
#pragma pack(pop)
