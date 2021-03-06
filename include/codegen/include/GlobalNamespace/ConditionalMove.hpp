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
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConditionalMove
  class ConditionalMove : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 _offset
    // Offset: 0x18
    UnityEngine::Vector3 offset;
    // private BoolSO _value
    // Offset: 0x28
    GlobalNamespace::BoolSO* value;
    // private System.Boolean _activateOnFalse
    // Offset: 0x30
    bool activateOnFalse;
    // protected System.Void Awake()
    // Offset: 0xBE20EC
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xBE2210
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConditionalMove* New_ctor();
  }; // ConditionalMove
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalMove*, "", "ConditionalMove");
#pragma pack(pop)
