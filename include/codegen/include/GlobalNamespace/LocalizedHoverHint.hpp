// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalizedHoverHint
  class LocalizedHoverHint : public Polyglot::LocalizedTextComponent_1<HMUI::HoverHint*> {
    public:
    // protected System.Void SetText(HMUI.HoverHint hoverHint, System.String value)
    // Offset: 0xBFCCF4
    void SetText(HMUI::HoverHint* hoverHint, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(HMUI.HoverHint hoverHint, Polyglot.LanguageDirection direction)
    // Offset: 0xBFCD14
    void UpdateAlignment(HMUI::HoverHint* hoverHint, Polyglot::LanguageDirection direction);
    // public System.Void .ctor()
    // Offset: 0xBFCD18
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent`1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalizedHoverHint* New_ctor();
  }; // LocalizedHoverHint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
#pragma pack(pop)
