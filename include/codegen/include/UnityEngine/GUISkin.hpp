// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUISettings
  class GUISettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUISkin
  class GUISkin : public UnityEngine::ScriptableObject {
    public:
    // Nested type: UnityEngine::GUISkin::SkinChangedDelegate
    class SkinChangedDelegate;
    // private UnityEngine.Font m_Font
    // Offset: 0x18
    UnityEngine::Font* m_Font;
    // private UnityEngine.GUIStyle m_box
    // Offset: 0x20
    UnityEngine::GUIStyle* m_box;
    // private UnityEngine.GUIStyle m_button
    // Offset: 0x28
    UnityEngine::GUIStyle* m_button;
    // private UnityEngine.GUIStyle m_toggle
    // Offset: 0x30
    UnityEngine::GUIStyle* m_toggle;
    // private UnityEngine.GUIStyle m_label
    // Offset: 0x38
    UnityEngine::GUIStyle* m_label;
    // private UnityEngine.GUIStyle m_textField
    // Offset: 0x40
    UnityEngine::GUIStyle* m_textField;
    // private UnityEngine.GUIStyle m_textArea
    // Offset: 0x48
    UnityEngine::GUIStyle* m_textArea;
    // private UnityEngine.GUIStyle m_window
    // Offset: 0x50
    UnityEngine::GUIStyle* m_window;
    // private UnityEngine.GUIStyle m_horizontalSlider
    // Offset: 0x58
    UnityEngine::GUIStyle* m_horizontalSlider;
    // private UnityEngine.GUIStyle m_horizontalSliderThumb
    // Offset: 0x60
    UnityEngine::GUIStyle* m_horizontalSliderThumb;
    // private UnityEngine.GUIStyle m_horizontalSliderThumbExtent
    // Offset: 0x68
    UnityEngine::GUIStyle* m_horizontalSliderThumbExtent;
    // private UnityEngine.GUIStyle m_verticalSlider
    // Offset: 0x70
    UnityEngine::GUIStyle* m_verticalSlider;
    // private UnityEngine.GUIStyle m_verticalSliderThumb
    // Offset: 0x78
    UnityEngine::GUIStyle* m_verticalSliderThumb;
    // private UnityEngine.GUIStyle m_verticalSliderThumbExtent
    // Offset: 0x80
    UnityEngine::GUIStyle* m_verticalSliderThumbExtent;
    // private UnityEngine.GUIStyle m_horizontalScrollbar
    // Offset: 0x88
    UnityEngine::GUIStyle* m_horizontalScrollbar;
    // private UnityEngine.GUIStyle m_horizontalScrollbarThumb
    // Offset: 0x90
    UnityEngine::GUIStyle* m_horizontalScrollbarThumb;
    // private UnityEngine.GUIStyle m_horizontalScrollbarLeftButton
    // Offset: 0x98
    UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton;
    // private UnityEngine.GUIStyle m_horizontalScrollbarRightButton
    // Offset: 0xA0
    UnityEngine::GUIStyle* m_horizontalScrollbarRightButton;
    // private UnityEngine.GUIStyle m_verticalScrollbar
    // Offset: 0xA8
    UnityEngine::GUIStyle* m_verticalScrollbar;
    // private UnityEngine.GUIStyle m_verticalScrollbarThumb
    // Offset: 0xB0
    UnityEngine::GUIStyle* m_verticalScrollbarThumb;
    // private UnityEngine.GUIStyle m_verticalScrollbarUpButton
    // Offset: 0xB8
    UnityEngine::GUIStyle* m_verticalScrollbarUpButton;
    // private UnityEngine.GUIStyle m_verticalScrollbarDownButton
    // Offset: 0xC0
    UnityEngine::GUIStyle* m_verticalScrollbarDownButton;
    // private UnityEngine.GUIStyle m_ScrollView
    // Offset: 0xC8
    UnityEngine::GUIStyle* m_ScrollView;
    // UnityEngine.GUIStyle[] m_CustomStyles
    // Offset: 0xD0
    ::Array<UnityEngine::GUIStyle*>* m_CustomStyles;
    // private UnityEngine.GUISettings m_Settings
    // Offset: 0xD8
    UnityEngine::GUISettings* m_Settings;
    // Get static field: static UnityEngine.GUIStyle ms_Error
    static UnityEngine::GUIStyle* _get_ms_Error();
    // Set static field: static UnityEngine.GUIStyle ms_Error
    static void _set_ms_Error(UnityEngine::GUIStyle* value);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> m_Styles
    // Offset: 0xE0
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::GUIStyle*>* m_Styles;
    // Get static field: static UnityEngine.GUISkin/SkinChangedDelegate m_SkinChanged
    static UnityEngine::GUISkin::SkinChangedDelegate* _get_m_SkinChanged();
    // Set static field: static UnityEngine.GUISkin/SkinChangedDelegate m_SkinChanged
    static void _set_m_SkinChanged(UnityEngine::GUISkin::SkinChangedDelegate* value);
    // Get static field: static UnityEngine.GUISkin current
    static UnityEngine::GUISkin* _get_current();
    // Set static field: static UnityEngine.GUISkin current
    static void _set_current(UnityEngine::GUISkin* value);
    // System.Void OnEnable()
    // Offset: 0x125B338
    void OnEnable();
    // static System.Void CleanupRoots()
    // Offset: 0x125B3BC
    static void CleanupRoots();
    // public UnityEngine.Font get_font()
    // Offset: 0x124E224
    UnityEngine::Font* get_font();
    // public System.Void set_font(UnityEngine.Font value)
    // Offset: 0x125B424
    void set_font(UnityEngine::Font* value);
    // public UnityEngine.GUIStyle get_box()
    // Offset: 0x1253750
    UnityEngine::GUIStyle* get_box();
    // public System.Void set_box(UnityEngine.GUIStyle value)
    // Offset: 0x125B55C
    void set_box(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_label()
    // Offset: 0x12534C0
    UnityEngine::GUIStyle* get_label();
    // public System.Void set_label(UnityEngine.GUIStyle value)
    // Offset: 0x125B584
    void set_label(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_textField()
    // Offset: 0x1253A50
    UnityEngine::GUIStyle* get_textField();
    // public System.Void set_textField(UnityEngine.GUIStyle value)
    // Offset: 0x125B5AC
    void set_textField(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_textArea()
    // Offset: 0x125B5D4
    UnityEngine::GUIStyle* get_textArea();
    // public System.Void set_textArea(UnityEngine.GUIStyle value)
    // Offset: 0x125B5DC
    void set_textArea(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_button()
    // Offset: 0x12538E4
    UnityEngine::GUIStyle* get_button();
    // public System.Void set_button(UnityEngine.GUIStyle value)
    // Offset: 0x125B604
    void set_button(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_toggle()
    // Offset: 0x1253D88
    UnityEngine::GUIStyle* get_toggle();
    // public System.Void set_toggle(UnityEngine.GUIStyle value)
    // Offset: 0x125B62C
    void set_toggle(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_window()
    // Offset: 0x125B654
    UnityEngine::GUIStyle* get_window();
    // public System.Void set_window(UnityEngine.GUIStyle value)
    // Offset: 0x125B65C
    void set_window(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalSlider()
    // Offset: 0x1253F24
    UnityEngine::GUIStyle* get_horizontalSlider();
    // public System.Void set_horizontalSlider(UnityEngine.GUIStyle value)
    // Offset: 0x125B684
    void set_horizontalSlider(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalSliderThumb()
    // Offset: 0x1253F2C
    UnityEngine::GUIStyle* get_horizontalSliderThumb();
    // public System.Void set_horizontalSliderThumb(UnityEngine.GUIStyle value)
    // Offset: 0x125B6AC
    void set_horizontalSliderThumb(UnityEngine::GUIStyle* value);
    // UnityEngine.GUIStyle get_horizontalSliderThumbExtent()
    // Offset: 0x125B6D4
    UnityEngine::GUIStyle* get_horizontalSliderThumbExtent();
    // System.Void set_horizontalSliderThumbExtent(UnityEngine.GUIStyle value)
    // Offset: 0x125B6DC
    void set_horizontalSliderThumbExtent(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalSlider()
    // Offset: 0x125B704
    UnityEngine::GUIStyle* get_verticalSlider();
    // public System.Void set_verticalSlider(UnityEngine.GUIStyle value)
    // Offset: 0x125B70C
    void set_verticalSlider(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalSliderThumb()
    // Offset: 0x125B734
    UnityEngine::GUIStyle* get_verticalSliderThumb();
    // public System.Void set_verticalSliderThumb(UnityEngine.GUIStyle value)
    // Offset: 0x125B73C
    void set_verticalSliderThumb(UnityEngine::GUIStyle* value);
    // UnityEngine.GUIStyle get_verticalSliderThumbExtent()
    // Offset: 0x125B764
    UnityEngine::GUIStyle* get_verticalSliderThumbExtent();
    // System.Void set_verticalSliderThumbExtent(UnityEngine.GUIStyle value)
    // Offset: 0x125B76C
    void set_verticalSliderThumbExtent(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbar()
    // Offset: 0x1255A4C
    UnityEngine::GUIStyle* get_horizontalScrollbar();
    // public System.Void set_horizontalScrollbar(UnityEngine.GUIStyle value)
    // Offset: 0x125B794
    void set_horizontalScrollbar(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarThumb()
    // Offset: 0x125B7BC
    UnityEngine::GUIStyle* get_horizontalScrollbarThumb();
    // public System.Void set_horizontalScrollbarThumb(UnityEngine.GUIStyle value)
    // Offset: 0x125B7C4
    void set_horizontalScrollbarThumb(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarLeftButton()
    // Offset: 0x125B7EC
    UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton();
    // public System.Void set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle value)
    // Offset: 0x125B7F4
    void set_horizontalScrollbarLeftButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarRightButton()
    // Offset: 0x125B81C
    UnityEngine::GUIStyle* get_horizontalScrollbarRightButton();
    // public System.Void set_horizontalScrollbarRightButton(UnityEngine.GUIStyle value)
    // Offset: 0x125B824
    void set_horizontalScrollbarRightButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbar()
    // Offset: 0x1255A54
    UnityEngine::GUIStyle* get_verticalScrollbar();
    // public System.Void set_verticalScrollbar(UnityEngine.GUIStyle value)
    // Offset: 0x125B84C
    void set_verticalScrollbar(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarThumb()
    // Offset: 0x125B874
    UnityEngine::GUIStyle* get_verticalScrollbarThumb();
    // public System.Void set_verticalScrollbarThumb(UnityEngine.GUIStyle value)
    // Offset: 0x125B87C
    void set_verticalScrollbarThumb(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarUpButton()
    // Offset: 0x125B8A4
    UnityEngine::GUIStyle* get_verticalScrollbarUpButton();
    // public System.Void set_verticalScrollbarUpButton(UnityEngine.GUIStyle value)
    // Offset: 0x125B8AC
    void set_verticalScrollbarUpButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarDownButton()
    // Offset: 0x125B8D4
    UnityEngine::GUIStyle* get_verticalScrollbarDownButton();
    // public System.Void set_verticalScrollbarDownButton(UnityEngine.GUIStyle value)
    // Offset: 0x125B8DC
    void set_verticalScrollbarDownButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_scrollView()
    // Offset: 0x1255A5C
    UnityEngine::GUIStyle* get_scrollView();
    // public System.Void set_scrollView(UnityEngine.GUIStyle value)
    // Offset: 0x125B904
    void set_scrollView(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle[] get_customStyles()
    // Offset: 0x125B92C
    ::Array<UnityEngine::GUIStyle*>* get_customStyles();
    // public System.Void set_customStyles(UnityEngine.GUIStyle[] value)
    // Offset: 0x125B934
    void set_customStyles(::Array<UnityEngine::GUIStyle*>* value);
    // public UnityEngine.GUISettings get_settings()
    // Offset: 0x124DCD4
    UnityEngine::GUISettings* get_settings();
    // static UnityEngine.GUIStyle get_error()
    // Offset: 0x125B95C
    static UnityEngine::GUIStyle* get_error();
    // System.Void Apply()
    // Offset: 0x125B33C
    void Apply();
    // private System.Void BuildStyleCache()
    // Offset: 0x125BA64
    void BuildStyleCache();
    // public UnityEngine.GUIStyle GetStyle(System.String styleName)
    // Offset: 0x124F514
    UnityEngine::GUIStyle* GetStyle(::Il2CppString* styleName);
    // public UnityEngine.GUIStyle FindStyle(System.String styleName)
    // Offset: 0x125C6C0
    UnityEngine::GUIStyle* FindStyle(::Il2CppString* styleName);
    // System.Void MakeCurrent()
    // Offset: 0x124A4EC
    void MakeCurrent();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x125C95C
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x125B294
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GUISkin* New_ctor();
  }; // UnityEngine.GUISkin
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISkin*, "UnityEngine", "GUISkin");
#pragma pack(pop)
