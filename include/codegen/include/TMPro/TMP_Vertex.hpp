// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Vertex
  struct TMP_Vertex : public System::ValueType {
    public:
    // public UnityEngine.Vector3 position
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // public UnityEngine.Vector2 uv
    // Offset: 0xC
    UnityEngine::Vector2 uv;
    // public UnityEngine.Vector2 uv2
    // Offset: 0x14
    UnityEngine::Vector2 uv2;
    // public UnityEngine.Vector2 uv4
    // Offset: 0x1C
    UnityEngine::Vector2 uv4;
    // public UnityEngine.Color32 color
    // Offset: 0x24
    UnityEngine::Color32 color;
    // Creating value type constructor for type: TMP_Vertex
    TMP_Vertex(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector2 uv_ = {}, UnityEngine::Vector2 uv2_ = {}, UnityEngine::Vector2 uv4_ = {}, UnityEngine::Color32 color_ = {}) : position{position_}, uv{uv_}, uv2{uv2_}, uv4{uv4_}, color{color_} {}
  }; // TMPro.TMP_Vertex
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
#pragma pack(pop)
