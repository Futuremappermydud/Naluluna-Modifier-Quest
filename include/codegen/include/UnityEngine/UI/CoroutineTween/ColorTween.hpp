// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ITweenValue
#include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Skipping declaration: ColorTweenMode because it is already included!
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween
  struct ColorTween : public System::ValueType, public UnityEngine::UI::CoroutineTween::ITweenValue {
    public:
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode
    struct ColorTweenMode;
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback
    class ColorTweenCallback;
    // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
    struct ColorTweenMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static constexpr const int All = 0;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_All();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static void _set_All(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static constexpr const int RGB = 1;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_RGB();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static void _set_RGB(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static constexpr const int Alpha = 2;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_Alpha();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static void _set_Alpha(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // Creating value type constructor for type: ColorTweenMode
      ColorTweenMode(int value_ = {}) : value{value_} {}
    }; // UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
    // private UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback m_Target
    // Offset: 0x0
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target;
    // private UnityEngine.Color m_StartColor
    // Offset: 0x8
    UnityEngine::Color m_StartColor;
    // private UnityEngine.Color m_TargetColor
    // Offset: 0x18
    UnityEngine::Color m_TargetColor;
    // private UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode m_TweenMode
    // Offset: 0x28
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode;
    // private System.Single m_Duration
    // Offset: 0x2C
    float m_Duration;
    // private System.Boolean m_IgnoreTimeScale
    // Offset: 0x30
    bool m_IgnoreTimeScale;
    // Creating value type constructor for type: ColorTween
    ColorTween(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target_ = {}, UnityEngine::Color m_StartColor_ = {}, UnityEngine::Color m_TargetColor_ = {}, UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) : m_Target{m_Target_}, m_StartColor{m_StartColor_}, m_TargetColor{m_TargetColor_}, m_TweenMode{m_TweenMode_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // public UnityEngine.Color get_startColor()
    // Offset: 0xA2E0D4
    UnityEngine::Color get_startColor();
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0xA2E0E0
    void set_startColor(UnityEngine::Color value);
    // public UnityEngine.Color get_targetColor()
    // Offset: 0xA2E0EC
    UnityEngine::Color get_targetColor();
    // public System.Void set_targetColor(UnityEngine.Color value)
    // Offset: 0xA2E0F8
    void set_targetColor(UnityEngine::Color value);
    // public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode get_tweenMode()
    // Offset: 0xA2E104
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode get_tweenMode();
    // public System.Void set_tweenMode(UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode value)
    // Offset: 0xA2E10C
    void set_tweenMode(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
    // public System.Void set_duration(System.Single value)
    // Offset: 0xA2E11C
    void set_duration(float value);
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xA2E12C
    void set_ignoreTimeScale(bool value);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color> callback)
    // Offset: 0xA2E140
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xA2E148
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xA2E150
    float GetDuration();
    // public System.Single get_duration()
    // Offset: 0xA2E114
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Single ITweenValue::get_duration()
    float get_duration();
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xA2E124
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::get_ignoreTimeScale()
    bool get_ignoreTimeScale();
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xA2E138
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Void ITweenValue::TweenValue(System.Single floatPercentage)
    void TweenValue(float floatPercentage);
    // public System.Boolean ValidTarget()
    // Offset: 0xA2E158
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::ValidTarget()
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.ColorTween
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween, "UnityEngine.UI.CoroutineTween", "ColorTween");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenMode");
#pragma pack(pop)
