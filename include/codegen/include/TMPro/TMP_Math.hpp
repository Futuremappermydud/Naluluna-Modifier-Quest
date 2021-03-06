// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Math
  class TMP_Math : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single FLOAT_MAX
    static constexpr const float FLOAT_MAX = 32767;
    // Get static field: static public System.Single FLOAT_MAX
    static float _get_FLOAT_MAX();
    // Set static field: static public System.Single FLOAT_MAX
    static void _set_FLOAT_MAX(float value);
    // static field const value: static public System.Single FLOAT_MIN
    static constexpr const float FLOAT_MIN = -32767;
    // Get static field: static public System.Single FLOAT_MIN
    static float _get_FLOAT_MIN();
    // Set static field: static public System.Single FLOAT_MIN
    static void _set_FLOAT_MIN(float value);
    // static field const value: static public System.Int32 INT_MAX
    static constexpr const int _INT_MAX = 2147483647;
    // Get static field: static public System.Int32 INT_MAX
    static int _get_INT_MAX();
    // Set static field: static public System.Int32 INT_MAX
    static void _set_INT_MAX(int value);
    // static field const value: static public System.Int32 INT_MIN
    static constexpr const int _INT_MIN = -2147483647;
    // Get static field: static public System.Int32 INT_MIN
    static int _get_INT_MIN();
    // Set static field: static public System.Int32 INT_MIN
    static void _set_INT_MIN(int value);
    // static field const value: static public System.Single FLOAT_UNSET
    static constexpr const float FLOAT_UNSET = -32767;
    // Get static field: static public System.Single FLOAT_UNSET
    static float _get_FLOAT_UNSET();
    // Set static field: static public System.Single FLOAT_UNSET
    static void _set_FLOAT_UNSET(float value);
    // static field const value: static public System.Int32 INT_UNSET
    static constexpr const int INT_UNSET = -32767;
    // Get static field: static public System.Int32 INT_UNSET
    static int _get_INT_UNSET();
    // Set static field: static public System.Int32 INT_UNSET
    static void _set_INT_UNSET(int value);
    // Get static field: static public UnityEngine.Vector2 MAX_16BIT
    static UnityEngine::Vector2 _get_MAX_16BIT();
    // Set static field: static public UnityEngine.Vector2 MAX_16BIT
    static void _set_MAX_16BIT(UnityEngine::Vector2 value);
    // Get static field: static public UnityEngine.Vector2 MIN_16BIT
    static UnityEngine::Vector2 _get_MIN_16BIT();
    // Set static field: static public UnityEngine.Vector2 MIN_16BIT
    static void _set_MIN_16BIT(UnityEngine::Vector2 value);
    // static public System.Boolean Approximately(System.Single a, System.Single b)
    // Offset: 0xB9A6E8
    static bool Approximately(float a, float b);
    // static private System.Void .cctor()
    // Offset: 0xB9A718
    static void _cctor();
  }; // TMPro.TMP_Math
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Math*, "TMPro", "TMP_Math");
#pragma pack(pop)
