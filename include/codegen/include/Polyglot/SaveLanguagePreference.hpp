// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.SaveLanguagePreference
  class SaveLanguagePreference : public UnityEngine::MonoBehaviour, public Polyglot::ILocalize {
    public:
    // private System.String preferenceKey
    // Offset: 0x18
    ::Il2CppString* preferenceKey;
    // public System.Void Start()
    // Offset: 0x1900F6C
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x1900FC0
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x1900FF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaveLanguagePreference* New_ctor();
  }; // Polyglot.SaveLanguagePreference
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::SaveLanguagePreference*, "Polyglot", "SaveLanguagePreference");
#pragma pack(pop)
