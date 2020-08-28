// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightManager
  class LightManager : public UnityEngine::MonoBehaviour, public GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks {
    public:
    // private UnityEngine.Vector4[] _directionalLightDirections
    // Offset: 0x18
    ::Array<UnityEngine::Vector4>* directionalLightDirections;
    // private UnityEngine.Vector4[] _directionalLightColors
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* directionalLightColors;
    // private UnityEngine.Vector4[] _pointLightPositions
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* pointLightPositions;
    // private UnityEngine.Vector4[] _pointLightColors
    // Offset: 0x30
    ::Array<UnityEngine::Vector4>* pointLightColors;
    // private System.Int32 lastRefreshFrameNum
    // Offset: 0x38
    int lastRefreshFrameNum;
    // Get static field: static private readonly System.Int32 _directionalLightDirectionsID
    static int _get__directionalLightDirectionsID();
    // Set static field: static private readonly System.Int32 _directionalLightDirectionsID
    static void _set__directionalLightDirectionsID(int value);
    // Get static field: static private readonly System.Int32 _directionalLightColorsID
    static int _get__directionalLightColorsID();
    // Set static field: static private readonly System.Int32 _directionalLightColorsID
    static void _set__directionalLightColorsID(int value);
    // Get static field: static private readonly System.Int32 _pointLightPositionsID
    static int _get__pointLightPositionsID();
    // Set static field: static private readonly System.Int32 _pointLightPositionsID
    static void _set__pointLightPositionsID(int value);
    // Get static field: static private readonly System.Int32 _pointLightColorsID
    static int _get__pointLightColorsID();
    // Set static field: static private readonly System.Int32 _pointLightColorsID
    static void _set__pointLightColorsID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x182B6B0
    void OnDisable();
    // private System.Void OnWillRenderObject()
    // Offset: 0x182B714
    void OnWillRenderObject();
    // private System.Void OnBecameInvisible()
    // Offset: 0x182B78C
    void OnBecameInvisible();
    // protected System.Void OnDestroy()
    // Offset: 0x182BD14
    void OnDestroy();
    // private System.Void ResetColors()
    // Offset: 0x182BD18
    void ResetColors();
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x182B7F0
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPreRender(UnityEngine.Camera camera)
    void OnCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x182BD10
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPostRender(UnityEngine.Camera camera)
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x182BE94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LightManager* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x182BF5C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LightManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightManager*, "", "LightManager");
#pragma pack(pop)
