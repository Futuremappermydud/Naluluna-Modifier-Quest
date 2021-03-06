// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRExternalComposition
  class OVRExternalComposition;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMRAudioFilter
  class OVRMRAudioFilter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Boolean running
    // Offset: 0x18
    bool running;
    // public OVRExternalComposition composition
    // Offset: 0x20
    GlobalNamespace::OVRExternalComposition* composition;
    // private System.Void Start()
    // Offset: 0xE7A6D8
    void Start();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0xE7A6E4
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // public System.Void .ctor()
    // Offset: 0xE7A700
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRMRAudioFilter* New_ctor();
  }; // OVRMRAudioFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMRAudioFilter*, "", "OVRMRAudioFilter");
#pragma pack(pop)
