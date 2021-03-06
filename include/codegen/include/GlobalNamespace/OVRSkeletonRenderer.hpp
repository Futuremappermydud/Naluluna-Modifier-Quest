// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSkeletonRenderer
  class OVRSkeletonRenderer : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
    class IOVRSkeletonRendererDataProvider;
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData
    struct SkeletonRendererData;
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior
    struct ConfidenceBehavior;
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior
    struct SystemGestureBehavior;
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::BoneVisualization
    class BoneVisualization;
    // Nested type: GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization
    class CapsuleVisualization;
    // Autogenerated type: OVRSkeletonRenderer/ConfidenceBehavior
    struct ConfidenceBehavior : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior _get_None();
      // Set static field: static public OVRSkeletonRenderer/ConfidenceBehavior None
      static void _set_None(GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior value);
      // static field const value: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static constexpr const int ToggleRenderer = 1;
      // Get static field: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior _get_ToggleRenderer();
      // Set static field: static public OVRSkeletonRenderer/ConfidenceBehavior ToggleRenderer
      static void _set_ToggleRenderer(GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior value);
      // Creating value type constructor for type: ConfidenceBehavior
      ConfidenceBehavior(int value_ = {}) : value{value_} {}
    }; // OVRSkeletonRenderer/ConfidenceBehavior
    // Autogenerated type: OVRSkeletonRenderer/SystemGestureBehavior
    struct SystemGestureBehavior : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior _get_None();
      // Set static field: static public OVRSkeletonRenderer/SystemGestureBehavior None
      static void _set_None(GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior value);
      // static field const value: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static constexpr const int SwapMaterial = 1;
      // Get static field: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior _get_SwapMaterial();
      // Set static field: static public OVRSkeletonRenderer/SystemGestureBehavior SwapMaterial
      static void _set_SwapMaterial(GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior value);
      // Creating value type constructor for type: SystemGestureBehavior
      SystemGestureBehavior(int value_ = {}) : value{value_} {}
    }; // OVRSkeletonRenderer/SystemGestureBehavior
    // private OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider _dataProvider
    // Offset: 0x18
    GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider* dataProvider;
    // private OVRSkeletonRenderer/ConfidenceBehavior _confidenceBehavior
    // Offset: 0x20
    GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior;
    // private OVRSkeletonRenderer/SystemGestureBehavior _systemGestureBehavior
    // Offset: 0x24
    GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior;
    // private System.Boolean _renderPhysicsCapsules
    // Offset: 0x28
    bool renderPhysicsCapsules;
    // private UnityEngine.Material _skeletonMaterial
    // Offset: 0x30
    UnityEngine::Material* skeletonMaterial;
    // private UnityEngine.Material _skeletonDefaultMaterial
    // Offset: 0x38
    UnityEngine::Material* skeletonDefaultMaterial;
    // private UnityEngine.Material _capsuleMaterial
    // Offset: 0x40
    UnityEngine::Material* capsuleMaterial;
    // private UnityEngine.Material _capsuleDefaultMaterial
    // Offset: 0x48
    UnityEngine::Material* capsuleDefaultMaterial;
    // private UnityEngine.Material _systemGestureMaterial
    // Offset: 0x50
    UnityEngine::Material* systemGestureMaterial;
    // private UnityEngine.Material _systemGestureDefaultMaterial
    // Offset: 0x58
    UnityEngine::Material* systemGestureDefaultMaterial;
    // private System.Collections.Generic.List`1<OVRSkeletonRenderer/BoneVisualization> _boneVisualizations
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*>* boneVisualizations;
    // private System.Collections.Generic.List`1<OVRSkeletonRenderer/CapsuleVisualization> _capsuleVisualizations
    // Offset: 0x68
    System::Collections::Generic::List_1<GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*>* capsuleVisualizations;
    // private OVRSkeleton _ovrSkeleton
    // Offset: 0x70
    GlobalNamespace::OVRSkeleton* ovrSkeleton;
    // private UnityEngine.GameObject _skeletonGO
    // Offset: 0x78
    UnityEngine::GameObject* skeletonGO;
    // private System.Single _scale
    // Offset: 0x80
    float scale;
    // private System.Boolean <IsInitialized>k__BackingField
    // Offset: 0x84
    bool IsInitialized;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x85
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x86
    bool IsDataHighConfidence;
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Offset: 0x87
    bool ShouldUseSystemGestureMaterial;
    // static field const value: static private System.Single LINE_RENDERER_WIDTH
    static constexpr const float LINE_RENDERER_WIDTH = 0.005;
    // Get static field: static private System.Single LINE_RENDERER_WIDTH
    static float _get_LINE_RENDERER_WIDTH();
    // Set static field: static private System.Single LINE_RENDERER_WIDTH
    static void _set_LINE_RENDERER_WIDTH(float value);
    // Get static field: static private readonly UnityEngine.Quaternion _capsuleRotationOffset
    static UnityEngine::Quaternion _get__capsuleRotationOffset();
    // Set static field: static private readonly UnityEngine.Quaternion _capsuleRotationOffset
    static void _set__capsuleRotationOffset(UnityEngine::Quaternion value);
    // public System.Boolean get_IsInitialized()
    // Offset: 0x18FD944
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x18FD94C
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x18FD958
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x18FD960
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x18FD96C
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x18FD974
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x18FD980
    bool get_ShouldUseSystemGestureMaterial();
    // private System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x18FD988
    void set_ShouldUseSystemGestureMaterial(bool value);
    // private System.Void Awake()
    // Offset: 0x18FD994
    void Awake();
    // private System.Void Start()
    // Offset: 0x18FDA78
    void Start();
    // private System.Void Initialize()
    // Offset: 0x18FDB0C
    void Initialize();
    // public System.Void Update()
    // Offset: 0x18FE640
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x18FED40
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x18FEEB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSkeletonRenderer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18FEEC0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSkeletonRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer*, "", "OVRSkeletonRenderer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
#pragma pack(pop)
