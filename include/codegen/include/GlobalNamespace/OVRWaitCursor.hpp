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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRWaitCursor
  class OVRWaitCursor : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 rotateSpeeds
    // Offset: 0x18
    UnityEngine::Vector3 rotateSpeeds;
    // private System.Void Update()
    // Offset: 0x1900A78
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1900B34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRWaitCursor* New_ctor();
  }; // OVRWaitCursor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRWaitCursor*, "", "OVRWaitCursor");
#pragma pack(pop)
