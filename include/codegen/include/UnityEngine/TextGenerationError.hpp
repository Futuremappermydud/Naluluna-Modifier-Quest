// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TextGenerationError
  struct TextGenerationError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.TextGenerationError None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.TextGenerationError None
    static UnityEngine::TextGenerationError _get_None();
    // Set static field: static public UnityEngine.TextGenerationError None
    static void _set_None(UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static constexpr const int CustomSizeOnNonDynamicFont = 1;
    // Get static field: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static UnityEngine::TextGenerationError _get_CustomSizeOnNonDynamicFont();
    // Set static field: static public UnityEngine.TextGenerationError CustomSizeOnNonDynamicFont
    static void _set_CustomSizeOnNonDynamicFont(UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static constexpr const int CustomStyleOnNonDynamicFont = 2;
    // Get static field: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static UnityEngine::TextGenerationError _get_CustomStyleOnNonDynamicFont();
    // Set static field: static public UnityEngine.TextGenerationError CustomStyleOnNonDynamicFont
    static void _set_CustomStyleOnNonDynamicFont(UnityEngine::TextGenerationError value);
    // static field const value: static public UnityEngine.TextGenerationError NoFont
    static constexpr const int NoFont = 4;
    // Get static field: static public UnityEngine.TextGenerationError NoFont
    static UnityEngine::TextGenerationError _get_NoFont();
    // Set static field: static public UnityEngine.TextGenerationError NoFont
    static void _set_NoFont(UnityEngine::TextGenerationError value);
    // Creating value type constructor for type: TextGenerationError
    TextGenerationError(int value_ = {}) : value{value_} {}
  }; // UnityEngine.TextGenerationError
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextGenerationError, "UnityEngine", "TextGenerationError");
#pragma pack(pop)
