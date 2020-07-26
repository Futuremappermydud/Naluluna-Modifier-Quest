// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassBGLight
  class BloomPrePassBGLight : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _intensity
    // Offset: 0x18
    float intensity;
    // private System.Single _minAlpha
    // Offset: 0x1C
    float minAlpha;
    // private System.Single _grayscaleFactor
    // Offset: 0x20
    float grayscaleFactor;
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassBGLight> _bloomBGLightList
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassBGLight*>* _get__bloomBGLightList();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassBGLight> _bloomBGLightList
    static void _set__bloomBGLightList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassBGLight*>* value);
    // private UnityEngine.Color _color
    // Offset: 0x24
    UnityEngine::Color color;
    // static public System.Collections.Generic.List`1<BloomPrePassBGLight> get_bloomBGLightList()
    // Offset: 0x180D370
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassBGLight*>* get_bloomBGLightList();
    // public UnityEngine.Color get_color()
    // Offset: 0x180D3D8
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x180D3E4
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Color get_bgColor()
    // Offset: 0x180D3F0
    UnityEngine::Color get_bgColor();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x180D47C
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x180D50C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x180D590
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x180D614
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassBGLight* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x180D630
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBGLight
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBGLight*, "", "BloomPrePassBGLight");
#pragma pack(pop)
