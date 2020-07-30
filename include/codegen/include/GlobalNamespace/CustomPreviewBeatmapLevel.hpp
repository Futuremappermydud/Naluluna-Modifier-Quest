// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
  // Forward declaring type: IAudioClipAsyncLoader
  class IAudioClipAsyncLoader;
  // Forward declaring type: IImageAsyncLoader
  class IImageAsyncLoader;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
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
  // Autogenerated type: CustomPreviewBeatmapLevel
  class CustomPreviewBeatmapLevel : public ::Il2CppObject, public GlobalNamespace::IPreviewBeatmapLevel {
    public:
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetPreviewAudioClipAsync$d__60
    struct $GetPreviewAudioClipAsync$d__60;
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetCoverImageTexture2DAsync$d__61
    struct $GetCoverImageTexture2DAsync$d__61;
    // private StandardLevelInfoSaveData _standardLevelInfoSaveData
    // Offset: 0x10
    GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData;
    // private System.String _customLevelPath
    // Offset: 0x18
    ::Il2CppString* customLevelPath;
    // private IAudioClipAsyncLoader _audioClipAsyncLoader
    // Offset: 0x20
    GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader;
    // private IImageAsyncLoader _imageAsyncLoader
    // Offset: 0x28
    GlobalNamespace::IImageAsyncLoader* imageAsyncLoader;
    // private System.String _levelID
    // Offset: 0x30
    ::Il2CppString* levelID;
    // private System.String _songName
    // Offset: 0x38
    ::Il2CppString* songName;
    // private System.String _songSubName
    // Offset: 0x40
    ::Il2CppString* songSubName;
    // private System.String _songAuthorName
    // Offset: 0x48
    ::Il2CppString* songAuthorName;
    // private System.String _levelAuthorName
    // Offset: 0x50
    ::Il2CppString* levelAuthorName;
    // private UnityEngine.AudioClip _previewAudioClip
    // Offset: 0x58
    UnityEngine::AudioClip* previewAudioClip;
    // private System.Single _beatsPerMinute
    // Offset: 0x60
    float beatsPerMinute;
    // private System.Single _songTimeOffset
    // Offset: 0x64
    float songTimeOffset;
    // private System.Single _shuffle
    // Offset: 0x68
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x6C
    float shufflePeriod;
    // private System.Single _previewStartTime
    // Offset: 0x70
    float previewStartTime;
    // private System.Single _previewDuration
    // Offset: 0x74
    float previewDuration;
    // private System.Single _songDuration
    // Offset: 0x78
    float songDuration;
    // private UnityEngine.Texture2D _defaultCoverImageTexture2D
    // Offset: 0x80
    UnityEngine::Texture2D* defaultCoverImageTexture2D;
    // private UnityEngine.Texture2D _coverImageTexture2D
    // Offset: 0x88
    UnityEngine::Texture2D* coverImageTexture2D;
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x90
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Offset: 0x98
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Offset: 0xA0
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // public StandardLevelInfoSaveData get_standardLevelInfoSaveData()
    // Offset: 0xBCDFF8
    GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData();
    // public System.String get_customLevelPath()
    // Offset: 0xBCE000
    ::Il2CppString* get_customLevelPath();
    // public IAudioClipAsyncLoader get_audioClipAsyncLoader()
    // Offset: 0xBCE008
    GlobalNamespace::IAudioClipAsyncLoader* get_audioClipAsyncLoader();
    // public IImageAsyncLoader get_imageAsyncLoader()
    // Offset: 0xBCE010
    GlobalNamespace::IImageAsyncLoader* get_imageAsyncLoader();
    // public UnityEngine.Texture2D get_defaultCoverImageTexture2D()
    // Offset: 0xBCE070
    UnityEngine::Texture2D* get_defaultCoverImageTexture2D();
    // public System.Void .ctor(UnityEngine.Texture2D defaultCoverImageTexture2D, StandardLevelInfoSaveData standardLevelInfoSaveData, System.String customLevelPath, IAudioClipAsyncLoader audioClipAsyncLoader, IImageAsyncLoader imageAsyncLoader, System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSets)
    // Offset: 0xBCDC3C
    static CustomPreviewBeatmapLevel* New_ctor(UnityEngine::Texture2D* defaultCoverImageTexture2D, GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::Il2CppString* customLevelPath, GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader, GlobalNamespace::IImageAsyncLoader* imageAsyncLoader, ::Il2CppString* levelID, ::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, GlobalNamespace::EnvironmentInfoSO* environmentInfo, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets);
    // public System.String get_levelID()
    // Offset: 0xBCE018
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0xBCE020
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xBCE028
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xBCE030
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xBCE038
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xBCE040
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xBCE048
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0xBCE050
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0xBCE058
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xBCE060
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xBCE068
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xBCE078
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xBCE080
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xBCE088
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBCE090
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBCE1E0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Texture2D> IPreviewBeatmapLevel::GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GetCoverImageTexture2DAsync(System::Threading::CancellationToken cancellationToken);
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xBCE330
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
  }; // CustomPreviewBeatmapLevel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
#pragma pack(pop)
