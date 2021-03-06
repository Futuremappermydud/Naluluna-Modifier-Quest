// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.OffsetModifierVRIK
  class OffsetModifierVRIK : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::OffsetModifierVRIK::$Initiate$d__7
    class $Initiate$d__7;
    // public System.Single weight
    // Offset: 0x18
    float weight;
    // public RootMotion.FinalIK.VRIK ik
    // Offset: 0x20
    RootMotion::FinalIK::VRIK* ik;
    // private System.Single lastTime
    // Offset: 0x28
    float lastTime;
    // protected System.Single get_deltaTime()
    // Offset: 0x121AA00
    float get_deltaTime();
    // protected System.Void OnModifyOffset()
    // Offset: 0xFFFFFFFF
    void OnModifyOffset();
    // protected System.Void Start()
    // Offset: 0x121AA2C
    void Start();
    // private System.Collections.IEnumerator Initiate()
    // Offset: 0x121AA58
    System::Collections::IEnumerator* Initiate();
    // private System.Void ModifyOffset()
    // Offset: 0x121AB00
    void ModifyOffset();
    // protected System.Void OnDestroy()
    // Offset: 0x121AC0C
    void OnDestroy();
    // protected System.Void .ctor()
    // Offset: 0x121AD28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OffsetModifierVRIK* New_ctor();
  }; // RootMotion.FinalIK.OffsetModifierVRIK
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifierVRIK*, "RootMotion.FinalIK", "OffsetModifierVRIK");
#pragma pack(pop)
