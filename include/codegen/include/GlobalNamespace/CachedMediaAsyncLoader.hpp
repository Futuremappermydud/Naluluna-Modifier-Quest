// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMediaAsyncLoader
#include "GlobalNamespace/IMediaAsyncLoader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AsyncCachedLoader`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCachedLoader_2;
  // Forward declaring type: AsyncCachedLoader`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCachedLoader_2;
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
  // Autogenerated type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader : public UnityEngine::MonoBehaviour, public GlobalNamespace::IMediaAsyncLoader {
    public:
    // Nested type: GlobalNamespace::CachedMediaAsyncLoader::$LoadAudioClipAsync$d__5
    struct $LoadAudioClipAsync$d__5;
    // Nested type: GlobalNamespace::CachedMediaAsyncLoader::$LoadImageAsync$d__6
    struct $LoadImageAsync$d__6;
    // private System.Int32 _maxNumberAdioClipCachedElements
    // Offset: 0x18
    int maxNumberAdioClipCachedElements;
    // private System.Int32 _maxNumberImageCachedElements
    // Offset: 0x1C
    int maxNumberImageCachedElements;
    // private AsyncCachedLoader`2<System.String,UnityEngine.AudioClip> _audioCachedAsyncLoader
    // Offset: 0x20
    GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::AudioClip*>* audioCachedAsyncLoader;
    // private AsyncCachedLoader`2<System.String,UnityEngine.Texture2D> _texture2DCachedAsyncLoader
    // Offset: 0x28
    GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::Texture2D*>* texture2DCachedAsyncLoader;
    // public System.Void ClearCache()
    // Offset: 0x1953728
    void ClearCache();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadAudioClipAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19537A0
    // Implemented from: IAudioClipAsyncLoader
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IAudioClipAsyncLoader::LoadAudioClipAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* LoadAudioClipAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> LoadImageAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1953904
    // Implemented from: IImageAsyncLoader
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Texture2D> IImageAsyncLoader::LoadImageAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* LoadImageAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1953A68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CachedMediaAsyncLoader* New_ctor();
  }; // CachedMediaAsyncLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
#pragma pack(pop)
