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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BasicLevelParamsPanel
  class BasicLevelParamsPanel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _durationText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* durationText;
    // private TMPro.TextMeshProUGUI _bpmText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* bpmText;
    // public System.Void set_duration(System.Single value)
    // Offset: 0xB8BF58
    void set_duration(float value);
    // public System.Void set_bpm(System.Single value)
    // Offset: 0xB8BF90
    void set_bpm(float value);
    // public System.Void .ctor()
    // Offset: 0xB8BFD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BasicLevelParamsPanel* New_ctor();
  }; // BasicLevelParamsPanel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicLevelParamsPanel*, "", "BasicLevelParamsPanel");
#pragma pack(pop)
