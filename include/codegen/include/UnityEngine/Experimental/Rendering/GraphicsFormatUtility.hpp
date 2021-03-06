// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
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
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: RenderTextureReadWrite
  struct RenderTextureReadWrite;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
  class GraphicsFormatUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.TextureFormat format, System.Boolean isSRGB)
    // Offset: 0x12F0574
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::TextureFormat format, bool isSRGB);
    // static private UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat format, System.Boolean isSRGB)
    // Offset: 0x12F6C80
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(UnityEngine::TextureFormat format, bool isSRGB);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.RenderTextureFormat format, System.Boolean isSRGB)
    // Offset: 0x12F6CD0
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::RenderTextureFormat format, bool isSRGB);
    // static private UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat format, System.Boolean isSRGB)
    // Offset: 0x12F6D20
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine::RenderTextureFormat format, bool isSRGB);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x12F6D70
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite);
    // static public System.Boolean IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x12F6DE0
    static bool IsSRGBFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // static public UnityEngine.RenderTextureFormat GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x12F6E20
    static UnityEngine::RenderTextureFormat GetRenderTextureFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // static System.Boolean IsCompressedTextureFormat(UnityEngine.TextureFormat format)
    // Offset: 0x12F6E60
    static bool IsCompressedTextureFormat(UnityEngine::TextureFormat format);
    // static public System.Boolean IsCrunchFormat(UnityEngine.TextureFormat format)
    // Offset: 0x12F05C4
    static bool IsCrunchFormat(UnityEngine::TextureFormat format);
  }; // UnityEngine.Experimental.Rendering.GraphicsFormatUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
#pragma pack(pop)
