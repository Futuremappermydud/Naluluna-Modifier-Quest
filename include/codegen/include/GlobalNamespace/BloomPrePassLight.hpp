// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassLight
  class BloomPrePassLight : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePassLight::LightsDataItem
    class LightsDataItem;
    // private BloomPrePassLightTypeSO _lightType
    // Offset: 0x18
    GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // Get static field: static private System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* _get__bloomLightsDict();
    // Set static field: static private System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static void _set__bloomLightsDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* value);
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* _get__lightsDataItems();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static void _set__lightsDataItems(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* value);
    // private BloomPrePassLightTypeSO _registeredWithLightType
    // Offset: 0x20
    GlobalNamespace::BloomPrePassLightTypeSO* registeredWithLightType;
    // private System.Boolean _isRegistered
    // Offset: 0x28
    bool isRegistered;
    // private System.Boolean _visible
    // Offset: 0x29
    bool visible;
    // static public System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> get_lightsDataItems()
    // Offset: 0x180D7AC
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* get_lightsDataItems();
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0x180D814
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x180D8DC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x180DB7C
    void OnDisable();
    // protected System.Void set_visible(System.Boolean value)
    // Offset: 0x180DC44
    void set_visible(bool value);
    // private System.Void RegisterLight()
    // Offset: 0x180D920
    void RegisterLight();
    // private System.Void UnregisterLight()
    // Offset: 0x180DB80
    void UnregisterLight();
    // public System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0xFFFFFFFF
    void FillMeshData(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
    // protected System.Void .ctor()
    // Offset: 0x180DCA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassLight* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x180DCB8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassLight
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLight*, "", "BloomPrePassLight");
#pragma pack(pop)
