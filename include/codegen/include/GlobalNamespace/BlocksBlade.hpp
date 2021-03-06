// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BlocksBlade
  class BlocksBlade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BlocksBlade::Element
    class Element;
    // private UnityEngine.Mesh _elementMesh
    // Offset: 0x18
    UnityEngine::Mesh* elementMesh;
    // private UnityEngine.Material _material
    // Offset: 0x20
    UnityEngine::Material* material;
    // private System.Int32 _numberOfElements
    // Offset: 0x28
    int numberOfElements;
    // private System.Single _radius
    // Offset: 0x2C
    float radius;
    // private System.Single _length
    // Offset: 0x30
    float length;
    // private System.Single _minVelocity
    // Offset: 0x34
    float minVelocity;
    // private System.Single _maxVelocity
    // Offset: 0x38
    float maxVelocity;
    // private System.Single _elementWidth
    // Offset: 0x3C
    float elementWidth;
    // private System.Single _minElementLength
    // Offset: 0x40
    float minElementLength;
    // private System.Single _maxElementLength
    // Offset: 0x44
    float maxElementLength;
    // private UnityEngine.Color <color>k__BackingField
    // Offset: 0x48
    UnityEngine::Color color;
    // private System.Collections.Generic.List`1<BlocksBlade/Element> _elements
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::BlocksBlade::Element*>* elements;
    // private UnityEngine.Vector4[] _positions
    // Offset: 0x60
    ::Array<UnityEngine::Vector4>* positions;
    // private UnityEngine.Vector4[] _sizes
    // Offset: 0x68
    ::Array<UnityEngine::Vector4>* sizes;
    // private UnityEngine.Vector4[] _colors
    // Offset: 0x70
    ::Array<UnityEngine::Vector4>* colors;
    // private UnityEngine.Matrix4x4[] _matrices
    // Offset: 0x78
    ::Array<UnityEngine::Matrix4x4>* matrices;
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Offset: 0x80
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // private System.Int32 _layer
    // Offset: 0x88
    int layer;
    // Get static field: static private readonly System.Int32 _positionPropertyID
    static int _get__positionPropertyID();
    // Set static field: static private readonly System.Int32 _positionPropertyID
    static void _set__positionPropertyID(int value);
    // Get static field: static private readonly System.Int32 _sizePropertyID
    static int _get__sizePropertyID();
    // Set static field: static private readonly System.Int32 _sizePropertyID
    static void _set__sizePropertyID(int value);
    // Get static field: static private readonly System.Int32 _colorPropertyID
    static int _get__colorPropertyID();
    // Set static field: static private readonly System.Int32 _colorPropertyID
    static void _set__colorPropertyID(int value);
    // Get static field: static private readonly System.Int32 _zClipPropertyID
    static int _get__zClipPropertyID();
    // Set static field: static private readonly System.Int32 _zClipPropertyID
    static void _set__zClipPropertyID(int value);
    // public UnityEngine.Color get_color()
    // Offset: 0xB7B428
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0xB7B434
    void set_color(UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0xB7B440
    void Start();
    // protected System.Void Update()
    // Offset: 0xB7B81C
    void Update();
    // private System.Void SetUpElement(BlocksBlade/Element element, System.Single velocity, UnityEngine.Color color)
    // Offset: 0xB7B63C
    void SetUpElement(GlobalNamespace::BlocksBlade::Element* element, float velocity, UnityEngine::Color color);
    // private UnityEngine.Vector2 RandomPointOnCircle(System.Single radius)
    // Offset: 0xB7BC08
    UnityEngine::Vector2 RandomPointOnCircle(float radius);
    // public System.Void .ctor()
    // Offset: 0xB7BCC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BlocksBlade* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xB7BD00
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BlocksBlade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade*, "", "BlocksBlade");
#pragma pack(pop)
