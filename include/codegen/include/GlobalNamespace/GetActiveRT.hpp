// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.RenderBuffer
#include "UnityEngine/RenderBuffer.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GetActiveRT
  class GetActiveRT : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RenderBuffer _colorBuffer
    // Offset: 0x18
    UnityEngine::RenderBuffer colorBuffer;
    // private UnityEngine.RenderBuffer _depthBuffer
    // Offset: 0x28
    UnityEngine::RenderBuffer depthBuffer;
    // public UnityEngine.RenderBuffer get_ColorBuffer()
    // Offset: 0xB41558
    UnityEngine::RenderBuffer get_ColorBuffer();
    // public UnityEngine.RenderBuffer get_DepthBuffer()
    // Offset: 0xB41564
    UnityEngine::RenderBuffer get_DepthBuffer();
    // private System.Void OnPreRender()
    // Offset: 0xB41570
    void OnPreRender();
    // public System.Void .ctor()
    // Offset: 0xB415E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GetActiveRT* New_ctor();
  }; // GetActiveRT
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GetActiveRT*, "", "GetActiveRT");
#pragma pack(pop)
