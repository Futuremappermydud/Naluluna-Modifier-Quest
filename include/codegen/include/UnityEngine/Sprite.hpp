// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: SpriteMeshType
  struct SpriteMeshType;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: SpritePackingMode
  struct SpritePackingMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Sprite
  class Sprite : public UnityEngine::Object {
    public:
    // System.Int32 GetPackingMode()
    // Offset: 0x137775C
    int GetPackingMode();
    // System.Int32 GetPacked()
    // Offset: 0x137779C
    int GetPacked();
    // UnityEngine.Rect GetTextureRect()
    // Offset: 0x13777DC
    UnityEngine::Rect GetTextureRect();
    // UnityEngine.Vector4 GetInnerUVs()
    // Offset: 0x1377888
    UnityEngine::Vector4 GetInnerUVs();
    // UnityEngine.Vector4 GetOuterUVs()
    // Offset: 0x1377934
    UnityEngine::Vector4 GetOuterUVs();
    // UnityEngine.Vector4 GetPadding()
    // Offset: 0x13779E0
    UnityEngine::Vector4 GetPadding();
    // static UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1377A8C
    static UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1377BC8
    UnityEngine::Bounds get_bounds();
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1377C84
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector4 get_border()
    // Offset: 0x1377D30
    UnityEngine::Vector4 get_border();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x1377DDC
    UnityEngine::Texture2D* get_texture();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0x1377E1C
    float get_pixelsPerUnit();
    // public UnityEngine.Texture2D get_associatedAlphaSplitTexture()
    // Offset: 0x1377E5C
    UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1377E9C
    UnityEngine::Vector2 get_pivot();
    // public System.Boolean get_packed()
    // Offset: 0x1377F44
    bool get_packed();
    // public UnityEngine.SpritePackingMode get_packingMode()
    // Offset: 0x1377F90
    UnityEngine::SpritePackingMode get_packingMode();
    // public UnityEngine.Rect get_textureRect()
    // Offset: 0x1377FD0
    UnityEngine::Rect get_textureRect();
    // public UnityEngine.Vector2[] get_vertices()
    // Offset: 0x1378060
    ::Array<UnityEngine::Vector2>* get_vertices();
    // public System.UInt16[] get_triangles()
    // Offset: 0x13780A0
    ::Array<uint16_t>* get_triangles();
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x13780E0
    ::Array<UnityEngine::Vector2>* get_uv();
    // static public UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1378120
    static UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // private System.Void GetTextureRect_Injected(UnityEngine.Rect ret)
    // Offset: 0x1377838
    void GetTextureRect_Injected(UnityEngine::Rect& ret);
    // private System.Void GetInnerUVs_Injected(UnityEngine.Vector4 ret)
    // Offset: 0x13778E4
    void GetInnerUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetOuterUVs_Injected(UnityEngine.Vector4 ret)
    // Offset: 0x1377990
    void GetOuterUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetPadding_Injected(UnityEngine.Vector4 ret)
    // Offset: 0x1377A3C
    void GetPadding_Injected(UnityEngine::Vector4& ret);
    // static private UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1377B30
    static UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, UnityEngine::Rect& rect, UnityEngine::Vector2& pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4& border, bool generateFallbackPhysicsShape);
    // private System.Void get_bounds_Injected(UnityEngine.Bounds ret)
    // Offset: 0x1377C34
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void get_rect_Injected(UnityEngine.Rect ret)
    // Offset: 0x1377CE0
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_border_Injected(UnityEngine.Vector4 ret)
    // Offset: 0x1377D8C
    void get_border_Injected(UnityEngine::Vector4& ret);
    // private System.Void get_pivot_Injected(UnityEngine.Vector2 ret)
    // Offset: 0x1377EF4
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void .ctor()
    // Offset: 0x13776F4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Sprite* New_ctor();
  }; // UnityEngine.Sprite
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprite*, "UnityEngine", "Sprite");
#pragma pack(pop)
