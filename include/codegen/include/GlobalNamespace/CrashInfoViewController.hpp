// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrashManagerSO
  class CrashManagerSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CrashInfoViewController
  class CrashInfoViewController : public UnityEngine::MonoBehaviour {
    public:
    // private CrashManagerSO _crashManager
    // Offset: 0x18
    GlobalNamespace::CrashManagerSO* crashManager;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // protected System.Void Start()
    // Offset: 0xBCD408
    void Start();
    // public System.Void .ctor()
    // Offset: 0xBCD480
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CrashInfoViewController* New_ctor();
  }; // CrashInfoViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
#pragma pack(pop)
