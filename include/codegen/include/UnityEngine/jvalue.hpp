// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.jvalue
  struct jvalue : public System::ValueType {
    public:
    // public System.Boolean z
    // Offset: 0x0
    bool z;
    // public System.SByte b
    // Offset: 0x0
    int8_t b;
    // public System.Char c
    // Offset: 0x0
    ::Il2CppChar c;
    // public System.Int16 s
    // Offset: 0x0
    int16_t s;
    // public System.Int32 i
    // Offset: 0x0
    int i;
    // public System.Int64 j
    // Offset: 0x0
    int64_t j;
    // public System.Single f
    // Offset: 0x0
    float f;
    // public System.Double d
    // Offset: 0x0
    double d;
    // public System.IntPtr l
    // Offset: 0x0
    System::IntPtr l;
    // Creating value type constructor for type: jvalue
    jvalue(bool z_ = {}, int8_t b_ = {}, ::Il2CppChar c_ = {}, int16_t s_ = {}, int i_ = {}, int64_t j_ = {}, float f_ = {}, double d_ = {}, System::IntPtr l_ = {}) : z{z_}, b{b_}, c{c_}, s{s_}, i{i_}, j{j_}, f{f_}, d{d_}, l{l_} {}
  }; // UnityEngine.jvalue
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::jvalue, "UnityEngine", "jvalue");
#pragma pack(pop)
