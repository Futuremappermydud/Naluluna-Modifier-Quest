// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestBeatmapDataAssetFileModel
  class TestBeatmapDataAssetFileModel : public ::Il2CppObject, public GlobalNamespace::IBeatmapDataAssetFileModel {
    public:
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4
    struct $GetAssetBundleFileForPreviewLevelAsync$d__4;
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__5
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__5;
    // static field const value: static private System.String kAssetsDir
    static constexpr const char* kAssetsDir = "BeatmapDataAssets";
    // Get static field: static private System.String kAssetsDir
    static ::Il2CppString* _get_kAssetsDir();
    // Set static field: static private System.String kAssetsDir
    static void _set_kAssetsDir(::Il2CppString* value);
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xB94324
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xB943C8
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB9446C
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<GetAssetBundleFileResult> IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB945C0
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<System.Boolean> IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xB946CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestBeatmapDataAssetFileModel* New_ctor();
  }; // TestBeatmapDataAssetFileModel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel*, "", "TestBeatmapDataAssetFileModel");
#pragma pack(pop)
