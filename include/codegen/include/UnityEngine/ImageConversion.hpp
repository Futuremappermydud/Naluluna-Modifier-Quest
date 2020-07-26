// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
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
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ImageConversion
  class ImageConversion : public ::Il2CppObject {
    public:
    // static public System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)
    // Offset: 0x1967CC0
    static ::Array<uint8_t>* EncodeToPNG(UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex, System.Int32 quality)
    // Offset: 0x1967D00
    static ::Array<uint8_t>* EncodeToJPG(UnityEngine::Texture2D* tex, int quality);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex)
    // Offset: 0x1967D50
    static ::Array<uint8_t>* EncodeToJPG(UnityEngine::Texture2D* tex);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data, System.Boolean markNonReadable)
    // Offset: 0x1967D94
    static bool LoadImage(UnityEngine::Texture2D* tex, ::Array<uint8_t>* data, bool markNonReadable);
  }; // UnityEngine.ImageConversion
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
#pragma pack(pop)
