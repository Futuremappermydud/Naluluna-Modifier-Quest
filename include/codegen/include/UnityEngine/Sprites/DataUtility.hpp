// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.Sprites
namespace UnityEngine::Sprites {
  // Autogenerated type: UnityEngine.Sprites.DataUtility
  class DataUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector4 GetInnerUV(UnityEngine.Sprite sprite)
    // Offset: 0x1378698
    static UnityEngine::Vector4 GetInnerUV(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetOuterUV(UnityEngine.Sprite sprite)
    // Offset: 0x13786AC
    static UnityEngine::Vector4 GetOuterUV(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetPadding(UnityEngine.Sprite sprite)
    // Offset: 0x13786C0
    static UnityEngine::Vector4 GetPadding(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector2 GetMinSize(UnityEngine.Sprite sprite)
    // Offset: 0x13786D4
    static UnityEngine::Vector2 GetMinSize(UnityEngine::Sprite* sprite);
  }; // UnityEngine.Sprites.DataUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprites::DataUtility*, "UnityEngine.Sprites", "DataUtility");
#pragma pack(pop)
