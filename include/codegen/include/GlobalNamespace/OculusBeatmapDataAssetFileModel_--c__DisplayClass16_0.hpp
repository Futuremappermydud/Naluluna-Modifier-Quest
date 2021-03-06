// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
  class OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<GetAssetBundleFileResult> taskSource
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* taskSource;
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Offset: 0x18
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // public Oculus.Platform.Models.AssetDetails assetDetails
    // Offset: 0x20
    Oculus::Platform::Models::AssetDetails* assetDetails;
    // System.Void <GetDownloadAssetBundleFileAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDownloadResult> msg)
    // Offset: 0xC36FD8
    void $GetDownloadAssetBundleFileAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult*>* msg);
    // public System.Void .ctor()
    // Offset: 0xC36FD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0* New_ctor();
  }; // OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
#pragma pack(pop)
