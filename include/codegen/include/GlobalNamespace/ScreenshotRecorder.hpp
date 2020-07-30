// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScreenshotRecorder
  class ScreenshotRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScreenshotRecorder::RecordingType
    struct RecordingType;
    // Autogenerated type: ScreenshotRecorder/RecordingType
    struct RecordingType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public ScreenshotRecorder/RecordingType Sequence
      static constexpr const int Sequence = 0;
      // Get static field: static public ScreenshotRecorder/RecordingType Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Sequence
      static void _set_Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static constexpr const int Stereo360Sequence = 1;
      // Get static field: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Stereo360Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static void _set_Stereo360Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static constexpr const int Mono360Sequence = 2;
      // Get static field: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Mono360Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static void _set_Mono360Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static constexpr const int F10ForScreenshot = 3;
      // Get static field: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_F10ForScreenshot();
      // Set static field: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static void _set_F10ForScreenshot(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Interval
      static constexpr const int Interval = 4;
      // Get static field: static public ScreenshotRecorder/RecordingType Interval
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Interval();
      // Set static field: static public ScreenshotRecorder/RecordingType Interval
      static void _set_Interval(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static constexpr const int ScreenshotOnPause = 5;
      // Get static field: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_ScreenshotOnPause();
      // Set static field: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static void _set_ScreenshotOnPause(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // Creating value type constructor for type: RecordingType
      RecordingType(int value_ = {}) : value{value_} {}
    }; // ScreenshotRecorder/RecordingType
    // private System.String _folder
    // Offset: 0x18
    ::Il2CppString* folder;
    // private UnityEngine.Camera _camera
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // private System.Int32 _frameRate
    // Offset: 0x28
    int frameRate;
    // private System.Boolean _forceFixedFramerate
    // Offset: 0x2C
    bool forceFixedFramerate;
    // private System.Int32 _interval
    // Offset: 0x30
    int interval;
    // private ScreenshotRecorder/RecordingType _recordingType
    // Offset: 0x34
    GlobalNamespace::ScreenshotRecorder::RecordingType recordingType;
    // private System.Boolean _pauseWithPButton
    // Offset: 0x38
    bool pauseWithPButton;
    // private System.Int32 _antiAlias
    // Offset: 0x3C
    int antiAlias;
    // private System.Int32 _screenshotWidth
    // Offset: 0x40
    int screenshotWidth;
    // private System.Int32 _screenshotHeight
    // Offset: 0x44
    int screenshotHeight;
    // private System.Int32 _counter
    // Offset: 0x48
    int counter;
    // private System.Single _originalTimeScale
    // Offset: 0x4C
    float originalTimeScale;
    // private System.Boolean _paused
    // Offset: 0x50
    bool paused;
    // private System.Int32 _frameNum
    // Offset: 0x54
    int frameNum;
    // private UnityEngine.RenderTexture _cubemapLeftEye
    // Offset: 0x58
    UnityEngine::RenderTexture* cubemapLeftEye;
    // private UnityEngine.RenderTexture _cubemapRighEye
    // Offset: 0x60
    UnityEngine::RenderTexture* cubemapRighEye;
    // private UnityEngine.RenderTexture _equirectTexture
    // Offset: 0x68
    UnityEngine::RenderTexture* equirectTexture;
    // private UnityEngine.RenderTexture _cameraRenderTexture
    // Offset: 0x70
    UnityEngine::RenderTexture* cameraRenderTexture;
    // protected System.Void OnEnable()
    // Offset: 0xCA60CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xCA628C
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0xCA6360
    void LateUpdate();
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0xCA64C4
    void OnApplicationFocus(bool hasFocus);
    // private System.Void SaveCameraScreenshot()
    // Offset: 0xCA6430
    void SaveCameraScreenshot();
    // private System.Void SaveTextureScreenshot(UnityEngine.Texture2D tex)
    // Offset: 0xCA6600
    void SaveTextureScreenshot(UnityEngine::Texture2D* tex);
    // private UnityEngine.Texture2D ConvertRenderTexture(UnityEngine.RenderTexture renderTexture)
    // Offset: 0xCA64DC
    UnityEngine::Texture2D* ConvertRenderTexture(UnityEngine::RenderTexture* renderTexture);
    // public System.Void .ctor()
    // Offset: 0xCA6710
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScreenshotRecorder* New_ctor();
  }; // ScreenshotRecorder
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenshotRecorder*, "", "ScreenshotRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenshotRecorder::RecordingType, "", "ScreenshotRecorder/RecordingType");
#pragma pack(pop)
