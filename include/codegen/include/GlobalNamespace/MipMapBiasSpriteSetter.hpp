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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MipMapBiasSpriteSetter
  class MipMapBiasSpriteSetter : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite[] _sprites
    // Offset: 0x18
    ::Array<UnityEngine::Sprite*>* sprites;
    // private System.Single _mipMapBias
    // Offset: 0x20
    float mipMapBias;
    // protected System.Void Start()
    // Offset: 0xCB89D4
    void Start();
    // public System.Void .ctor()
    // Offset: 0xCB8A5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MipMapBiasSpriteSetter* New_ctor();
  }; // MipMapBiasSpriteSetter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MipMapBiasSpriteSetter*, "", "MipMapBiasSpriteSetter");
#pragma pack(pop)
