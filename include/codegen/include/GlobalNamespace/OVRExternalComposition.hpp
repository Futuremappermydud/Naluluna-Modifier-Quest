// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRComposition
#include "GlobalNamespace/OVRComposition.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: AudioListener
  class AudioListener;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRMRAudioFilter
  class OVRMRAudioFilter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRExternalComposition
  class OVRExternalComposition : public GlobalNamespace::OVRComposition {
    public:
    // private UnityEngine.GameObject previousMainCameraObject
    // Offset: 0x40
    UnityEngine::GameObject* previousMainCameraObject;
    // public UnityEngine.GameObject foregroundCameraGameObject
    // Offset: 0x48
    UnityEngine::GameObject* foregroundCameraGameObject;
    // public UnityEngine.Camera foregroundCamera
    // Offset: 0x50
    UnityEngine::Camera* foregroundCamera;
    // public UnityEngine.GameObject backgroundCameraGameObject
    // Offset: 0x58
    UnityEngine::GameObject* backgroundCameraGameObject;
    // public UnityEngine.Camera backgroundCamera
    // Offset: 0x60
    UnityEngine::Camera* backgroundCamera;
    // public UnityEngine.AudioListener audioListener
    // Offset: 0x68
    UnityEngine::AudioListener* audioListener;
    // public OVRMRAudioFilter audioFilter
    // Offset: 0x70
    GlobalNamespace::OVRMRAudioFilter* audioFilter;
    // public UnityEngine.RenderTexture[] mrcRenderTextureArray
    // Offset: 0x78
    ::Array<UnityEngine::RenderTexture*>* mrcRenderTextureArray;
    // public System.Int32 frameIndex
    // Offset: 0x80
    int frameIndex;
    // public System.Int32 lastMrcEncodeFrameSyncId
    // Offset: 0x84
    int lastMrcEncodeFrameSyncId;
    // private System.Single[] cachedAudioDataArray
    // Offset: 0x88
    ::Array<float>* cachedAudioDataArray;
    // private readonly System.Object audioDataLock
    // Offset: 0x90
    ::Il2CppObject* audioDataLock;
    // private System.Collections.Generic.List`1<System.Single> cachedAudioData
    // Offset: 0x98
    System::Collections::Generic::List_1<float>* cachedAudioData;
    // private System.Int32 cachedChannels
    // Offset: 0xA0
    int cachedChannels;
    // public System.Void .ctor(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0xCD1AF4
    static OVRExternalComposition* New_ctor(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // private System.Void RefreshCameraObjects(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0xCD1E1C
    void RefreshCameraObjects(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // private System.Void RefreshAudioFilter()
    // Offset: 0xCD26A0
    void RefreshAudioFilter();
    // private System.Int32 CastMrcFrame(System.Int32 castTextureIndex)
    // Offset: 0xCD2E40
    int CastMrcFrame(int castTextureIndex);
    // private System.Void SetCameraTargetTexture(System.Int32 drawTextureIndex)
    // Offset: 0xCD31C0
    void SetCameraTargetTexture(int drawTextureIndex);
    // private System.Void CleanupAudioFilter()
    // Offset: 0xCD2CA4
    void CleanupAudioFilter();
    // public System.Void CacheAudioData(System.Single[] data, System.Int32 channels)
    // Offset: 0xCD3DA4
    void CacheAudioData(::Array<float>* data, int channels);
    // public System.Void GetAndResetAudioData(System.Single[] audioData, System.Int32 audioFrames, System.Int32 channels)
    // Offset: 0xCD3018
    void GetAndResetAudioData(::Array<float>*& audioData, int& audioFrames, int& channels);
    // public override OVRManager/CompositionMethod CompositionMethod()
    // Offset: 0xCD1AEC
    // Implemented from: OVRComposition
    // Base method: OVRManager/CompositionMethod OVRComposition::CompositionMethod()
    GlobalNamespace::OVRManager::CompositionMethod CompositionMethod();
    // public override System.Void Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0xCD32FC
    // Implemented from: OVRComposition
    // Base method: System.Void OVRComposition::Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    void Update(UnityEngine::GameObject* gameObject, UnityEngine::Camera* mainCamera, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // public override System.Void Cleanup()
    // Offset: 0xCD3C3C
    // Implemented from: OVRComposition
    // Base method: System.Void OVRComposition::Cleanup()
    void Cleanup();
  }; // OVRExternalComposition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExternalComposition*, "", "OVRExternalComposition");
#pragma pack(pop)
