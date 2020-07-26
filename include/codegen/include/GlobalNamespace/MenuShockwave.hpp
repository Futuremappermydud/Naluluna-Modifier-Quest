// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuShockwave
  class MenuShockwave : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _shockwavePS
    // Offset: 0x18
    UnityEngine::ParticleSystem* shockwavePS;
    // private VRUIControls.VRPointer _vrPointer
    // Offset: 0x20
    VRUIControls::VRPointer* vrPointer;
    // private Signal[] _buttonClickEvents
    // Offset: 0x28
    ::Array<GlobalNamespace::Signal*>* buttonClickEvents;
    // private UnityEngine.ParticleSystem/EmitParams _shockwavePSEmitParams
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // protected System.Void Awake()
    // Offset: 0xBED36C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0xBED37C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xBED450
    void OnDisable();
    // private System.Void HandleButtonClickEvent()
    // Offset: 0xBED524
    void HandleButtonClickEvent();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0xBED558
    void SpawnShockwave(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0xBED608
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuShockwave* New_ctor();
  }; // MenuShockwave
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
#pragma pack(pop)
