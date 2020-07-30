// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightWithIds
  class LightWithIds : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightWithIds::LightIntensityData
    class LightIntensityData;
    // private System.Single _intensity
    // Offset: 0x18
    float intensity;
    // private System.Single _maxIntensity
    // Offset: 0x1C
    float maxIntensity;
    // private LightWithIds/LightIntensityData[] _lightIntensityData
    // Offset: 0x20
    ::Array<GlobalNamespace::LightWithIds::LightIntensityData*>* lightIntensityData;
    // private LightWithIdManager _lightManager
    // Offset: 0x28
    GlobalNamespace::LightWithIdManager* lightManager;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Single> _intensities
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<int, float>* intensities;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // private System.Int32 _lastRefreshColorFrameNum
    // Offset: 0x48
    int lastRefreshColorFrameNum;
    // protected System.Void Start()
    // Offset: 0x1813928
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1813A1C
    void OnValidate();
    // protected UnityEngine.Color RefreshAndGetColor()
    // Offset: 0x180BCA4
    UnityEngine::Color RefreshAndGetColor();
    // private System.Void RefreshLightColor()
    // Offset: 0x1813ACC
    void RefreshLightColor();
    // protected System.Void .ctor()
    // Offset: 0x180BD04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LightWithIds* New_ctor();
  }; // LightWithIds
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds*, "", "LightWithIds");
#pragma pack(pop)
