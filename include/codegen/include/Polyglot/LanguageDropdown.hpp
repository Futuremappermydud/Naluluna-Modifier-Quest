// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Dropdown
  class Dropdown;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.LanguageDropdown
  class LanguageDropdown : public UnityEngine::MonoBehaviour, public Polyglot::ILocalize {
    public:
    // private UnityEngine.UI.Dropdown dropdown
    // Offset: 0x18
    UnityEngine::UI::Dropdown* dropdown;
    // public System.Void Reset()
    // Offset: 0x18FDBF4
    void Reset();
    // public System.Void Start()
    // Offset: 0x18FDC54
    void Start();
    // private System.Void CreateDropdown()
    // Offset: 0x18FDC84
    void CreateDropdown();
    // public System.Void OnLocalize()
    // Offset: 0x18FE174
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x18FE2A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LanguageDropdown* New_ctor();
  }; // Polyglot.LanguageDropdown
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
#pragma pack(pop)
