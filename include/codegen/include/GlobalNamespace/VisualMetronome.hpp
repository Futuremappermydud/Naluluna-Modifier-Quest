// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VisualMetronome
  class VisualMetronome : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Single _leftPadding
    // Offset: 0x20
    float leftPadding;
    // private System.Single _rightPadding
    // Offset: 0x24
    float rightPadding;
    // private UnityEngine.RectTransform _ticker
    // Offset: 0x28
    UnityEngine::RectTransform* ticker;
    // private UnityEngine.RectTransform _movingTicker
    // Offset: 0x30
    UnityEngine::RectTransform* movingTicker;
    // private UnityEngine.UI.Image _tickerImage
    // Offset: 0x38
    UnityEngine::UI::Image* tickerImage;
    // private UnityEngine.UI.Image _movingTickerImage
    // Offset: 0x40
    UnityEngine::UI::Image* movingTickerImage;
    // private System.Single _metronomeInterval
    // Offset: 0x48
    float metronomeInterval;
    // private UnityEngine.Vector2 _normalTickerSize
    // Offset: 0x4C
    UnityEngine::Vector2 normalTickerSize;
    // private UnityEngine.Vector2 _tickTickerSize0
    // Offset: 0x54
    UnityEngine::Vector2 tickTickerSize0;
    // private UnityEngine.Vector2 _tickTickerSize1
    // Offset: 0x5C
    UnityEngine::Vector2 tickTickerSize1;
    // private System.Single _smooth
    // Offset: 0x64
    float smooth;
    // private System.Single _prevAudioTime
    // Offset: 0x68
    float prevAudioTime;
    // private System.Single _zeroOffset
    // Offset: 0x6C
    float zeroOffset;
    // private System.Single _direction
    // Offset: 0x70
    float direction;
    // private System.Boolean _dontTickThisFrame
    // Offset: 0x74
    bool dontTickThisFrame;
    // public System.Void set_tickerColor(UnityEngine.Color value)
    // Offset: 0xC40DA0
    void set_tickerColor(UnityEngine::Color value);
    // public System.Void set_movingTickerColor(UnityEngine.Color value)
    // Offset: 0xC40DC4
    void set_movingTickerColor(UnityEngine::Color value);
    // public System.Void set_zeroOffset(System.Single value)
    // Offset: 0xC40DE8
    void set_zeroOffset(float value);
    // public System.Single get_zeroOffset()
    // Offset: 0xC40DF8
    float get_zeroOffset();
    // protected System.Void Awake()
    // Offset: 0xC40E00
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0xC40F10
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC40F64
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0xC40FB8
    void Update();
    // private System.Void SetMovingTickerNormalizedPosition(System.Single t)
    // Offset: 0xC4117C
    void SetMovingTickerNormalizedPosition(float t);
    // public System.Void .ctor()
    // Offset: 0xC41240
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VisualMetronome* New_ctor();
  }; // VisualMetronome
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
#pragma pack(pop)
