// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PrivacyPolicyViewController
  class PrivacyPolicyViewController : public HMUI::ViewController {
    public:
    // private HMUI.TextPageScrollView _textPageScrollView
    // Offset: 0x68
    HMUI::TextPageScrollView* textPageScrollView;
    // private UnityEngine.TextAsset _privacyPolicyTextAsset
    // Offset: 0x70
    UnityEngine::TextAsset* privacyPolicyTextAsset;
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xC1F344
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xC1F398
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PrivacyPolicyViewController* New_ctor();
  }; // PrivacyPolicyViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
#pragma pack(pop)
