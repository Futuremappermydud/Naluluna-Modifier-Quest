// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMonoscopic
  class OVRMonoscopic : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton toggleButton
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton toggleButton;
    // private System.Boolean monoscopic
    // Offset: 0x1C
    bool monoscopic;
    // private System.Void Update()
    // Offset: 0xED80A4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xED81B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRMonoscopic* New_ctor();
  }; // OVRMonoscopic
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");
#pragma pack(pop)
