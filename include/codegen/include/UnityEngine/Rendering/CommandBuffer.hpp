// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: RenderTextureMemoryless
  struct RenderTextureMemoryless;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderTargetIdentifier
  struct RenderTargetIdentifier;
  // Forward declaring type: CommandBufferExecutionFlags
  struct CommandBufferExecutionFlags;
  // Forward declaring type: RenderTextureSubElement
  struct RenderTextureSubElement;
  // Forward declaring type: ShadowSamplingMode
  struct ShadowSamplingMode;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.CommandBuffer
  class CommandBuffer : public ::Il2CppObject, public System::IDisposable {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // static private System.IntPtr InitBuffer()
    // Offset: 0x13711C4
    static System::IntPtr InitBuffer();
    // private System.Void ReleaseBuffer()
    // Offset: 0x13711F8
    void ReleaseBuffer();
    // public System.Void set_name(System.String value)
    // Offset: 0x1371238
    void set_name(::Il2CppString* value);
    // public System.Void Clear()
    // Offset: 0x1371288
    void Clear();
    // private System.Void Internal_DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x13712C8
    void Internal_DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // private System.Void CopyTexture_Internal(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY, System.Int32 mode)
    // Offset: 0x13713D8
    void CopyTexture_Internal(UnityEngine::Rendering::RenderTargetIdentifier& src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, UnityEngine::Rendering::RenderTargetIdentifier& dst, int dstElement, int dstMip, int dstX, int dstY, int mode);
    // private System.Void Blit_Texture(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x137149C
    void Blit_Texture(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void Blit_Identifier(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x13715E0
    void Blit_Identifier(UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset, int sourceDepthSlice, int destDepthSlice);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
    // Offset: 0x1371724
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
    // Offset: 0x13717E8
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing)
    // Offset: 0x13718A0
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x1371950
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format)
    // Offset: 0x13719F4
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::RenderTextureFormat format);
    // public System.Void ReleaseTemporaryRT(System.Int32 nameID)
    // Offset: 0x1371AA8
    void ReleaseTemporaryRT(int nameID);
    // public System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
    // Offset: 0x1371AF8
    void SetGlobalFloat(int nameID, float value);
    // public System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
    // Offset: 0x1371B58
    void SetGlobalVector(int nameID, UnityEngine::Vector4 value);
    // private System.Boolean ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags requiredFlags, UnityEngine.Rendering.CommandBufferExecutionFlags invalidFlags)
    // Offset: 0x1371C18
    bool ValidateAgainstExecutionFlags(UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);
    // private System.Void SetGlobalTexture_Impl(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderTextureSubElement element)
    // Offset: 0x1371C70
    void SetGlobalTexture_Impl(int nameID, UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine::Rendering::RenderTextureSubElement element);
    // private System.Void SetShadowSamplingMode_Impl(UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
    // Offset: 0x1371CD8
    void SetShadowSamplingMode_Impl(UnityEngine::Rendering::RenderTargetIdentifier& shadowmap, UnityEngine::Rendering::ShadowSamplingMode mode);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1371D9C
    void Dispose(bool disposing);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1371EC8
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x1372160
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex)
    // Offset: 0x1372194
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material)
    // Offset: 0x13721CC
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material);
    // public System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, UnityEngine.Rendering.RenderTargetIdentifier dst)
    // Offset: 0x1372208
    void CopyTexture(UnityEngine::Rendering::RenderTargetIdentifier src, UnityEngine::Rendering::RenderTargetIdentifier dst);
    // public System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
    // Offset: 0x13722A0
    void Blit(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material* mat, int pass);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest)
    // Offset: 0x1372398
    void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
    // Offset: 0x1372444
    void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material* mat, int pass);
    // public System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
    // Offset: 0x1372500
    void SetGlobalVector(::Il2CppString* name, UnityEngine::Vector4 value);
    // public System.Void SetGlobalTexture(System.String name, UnityEngine.Rendering.RenderTargetIdentifier value)
    // Offset: 0x13725C8
    void SetGlobalTexture(::Il2CppString* name, UnityEngine::Rendering::RenderTargetIdentifier value);
    // public System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value, UnityEngine.Rendering.RenderTextureSubElement element)
    // Offset: 0x137266C
    void SetGlobalTexture(int nameID, UnityEngine::Rendering::RenderTargetIdentifier value, UnityEngine::Rendering::RenderTextureSubElement element);
    // public System.Void SetShadowSamplingMode(UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
    // Offset: 0x13726D4
    void SetShadowSamplingMode(UnityEngine::Rendering::RenderTargetIdentifier shadowmap, UnityEngine::Rendering::ShadowSamplingMode mode);
    // private System.Void Internal_DrawMesh_Injected(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1371350
    void Internal_DrawMesh_Injected(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4& matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // private System.Void Blit_Texture_Injected(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x1371540
    void Blit_Texture_Injected(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2& scale, UnityEngine::Vector2& offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x1371684
    void Blit_Identifier_Injected(UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2& scale, UnityEngine::Vector2& offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void SetGlobalVector_Injected(System.Int32 nameID, UnityEngine.Vector4 value)
    // Offset: 0x1371BC0
    void SetGlobalVector_Injected(int nameID, UnityEngine::Vector4& value);
    // protected override System.Void Finalize()
    // Offset: 0x1371D30
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1371E08
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x1371E7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CommandBuffer* New_ctor();
  }; // UnityEngine.Rendering.CommandBuffer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
#pragma pack(pop)
