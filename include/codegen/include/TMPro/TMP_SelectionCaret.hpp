// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SelectionCaret
  class TMP_SelectionCaret : public UnityEngine::UI::MaskableGraphic {
    public:
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xB9D43C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void .ctor()
    // Offset: 0xB9D440
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SelectionCaret* New_ctor();
  }; // TMPro.TMP_SelectionCaret
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SelectionCaret*, "TMPro", "TMP_SelectionCaret");
#pragma pack(pop)
