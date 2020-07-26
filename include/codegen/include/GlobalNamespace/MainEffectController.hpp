// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectContainerSO
  class MainEffectContainerSO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: ImageEffectController
  class ImageEffectController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectController
  class MainEffectController : public UnityEngine::MonoBehaviour {
    public:
    // private MainEffectContainerSO _mainEffectContainer
    // Offset: 0x18
    GlobalNamespace::MainEffectContainerSO* mainEffectContainer;
    // private FloatSO _fadeValue
    // Offset: 0x20
    GlobalNamespace::FloatSO* fadeValue;
    // private System.Action`1<UnityEngine.RenderTexture> afterImageEffectEvent
    // Offset: 0x28
    System::Action_1<UnityEngine::RenderTexture*>* afterImageEffectEvent;
    // private ImageEffectController _imageEffectController
    // Offset: 0x30
    GlobalNamespace::ImageEffectController* imageEffectController;
    // static field const value: static private System.String kMainEffectEnabledKeyword
    static constexpr const char* kMainEffectEnabledKeyword = "MAIN_EFFECT_ENABLED";
    // Get static field: static private System.String kMainEffectEnabledKeyword
    static ::Il2CppString* _get_kMainEffectEnabledKeyword();
    // Set static field: static private System.String kMainEffectEnabledKeyword
    static void _set_kMainEffectEnabledKeyword(::Il2CppString* value);
    // public System.Void add_afterImageEffectEvent(System.Action`1<UnityEngine.RenderTexture> value)
    // Offset: 0x18F7CF8
    void add_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture*>* value);
    // public System.Void remove_afterImageEffectEvent(System.Action`1<UnityEngine.RenderTexture> value)
    // Offset: 0x18F7D9C
    void remove_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture*>* value);
    // protected System.Void OnEnable()
    // Offset: 0x18F7E40
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x18F7FD0
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x18F8068
    void OnValidate();
    // private System.Void LazySetupImageEffectController()
    // Offset: 0x18F7E74
    void LazySetupImageEffectController();
    // private System.Void ImageEffectControllerCallback(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x18F80A0
    void ImageEffectControllerCallback(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // protected System.Void OnPreRender()
    // Offset: 0x18F8158
    void OnPreRender();
    // protected System.Void OnPostRender()
    // Offset: 0x18F821C
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0x18F8290
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainEffectController* New_ctor();
  }; // MainEffectController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectController*, "", "MainEffectController");
#pragma pack(pop)
