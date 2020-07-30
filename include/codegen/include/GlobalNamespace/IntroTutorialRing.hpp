// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IntroTutorialRing
  class IntroTutorialRing : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image[] _progressImages
    // Offset: 0x18
    ::Array<UnityEngine::UI::Image*>* progressImages;
    // private SaberType _saberType
    // Offset: 0x20
    GlobalNamespace::SaberType saberType;
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x28
    UnityEngine::ParticleSystem* particleSystem;
    // private UnityEngine.CanvasGroup _canvasGroup
    // Offset: 0x30
    UnityEngine::CanvasGroup* canvasGroup;
    // private System.Single _activationDuration
    // Offset: 0x38
    float activationDuration;
    // private UnityEngine.UI.Image[] _ringGLowImages
    // Offset: 0x40
    ::Array<UnityEngine::UI::Image*>* ringGLowImages;
    // private ColorManager _colorManager
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // private System.Boolean _highlighted
    // Offset: 0x50
    bool highlighted;
    // private System.Single _emitNextParticleTimer
    // Offset: 0x54
    float emitNextParticleTimer;
    // private System.Single _activationProgress
    // Offset: 0x58
    float activationProgress;
    // private System.Collections.Generic.HashSet`1<SaberType> _sabersInside
    // Offset: 0x60
    System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType>* sabersInside;
    // private System.Boolean _sabersInsideAfterOnEnable
    // Offset: 0x68
    bool sabersInsideAfterOnEnable;
    // public System.Void set_alpha(System.Single value)
    // Offset: 0xB45298
    void set_alpha(float value);
    // public System.Boolean get_fullyActivated()
    // Offset: 0xB44FF4
    bool get_fullyActivated();
    // public SaberType get_saberType()
    // Offset: 0xB4545C
    GlobalNamespace::SaberType get_saberType();
    // public System.Void set_saberType(SaberType value)
    // Offset: 0xB45464
    void set_saberType(GlobalNamespace::SaberType value);
    // protected System.Void Start()
    // Offset: 0xB4546C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xB45504
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0xB4555C
    void Update();
    // private System.Void SetProgressImagesfillAmount(System.Single fillAmount)
    // Offset: 0xB456CC
    void SetProgressImagesfillAmount(float fillAmount);
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0xB45748
    void OnTriggerEnter(UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0xB4584C
    void OnTriggerExit(UnityEngine::Collider* other);
    // private System.Void OnTriggerStay(UnityEngine.Collider other)
    // Offset: 0xB45950
    void OnTriggerStay(UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0xB45A60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IntroTutorialRing* New_ctor();
  }; // IntroTutorialRing
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialRing*, "", "IntroTutorialRing");
#pragma pack(pop)
