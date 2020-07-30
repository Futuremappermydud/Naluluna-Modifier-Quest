// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.GUILayoutGroup
#include "UnityEngine/GUILayoutGroup.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUIScrollGroup
  class GUIScrollGroup : public UnityEngine::GUILayoutGroup {
    public:
    // public System.Single calcMinWidth
    // Offset: 0x90
    float calcMinWidth;
    // public System.Single calcMaxWidth
    // Offset: 0x94
    float calcMaxWidth;
    // public System.Single calcMinHeight
    // Offset: 0x98
    float calcMinHeight;
    // public System.Single calcMaxHeight
    // Offset: 0x9C
    float calcMaxHeight;
    // public System.Single clientWidth
    // Offset: 0xA0
    float clientWidth;
    // public System.Single clientHeight
    // Offset: 0xA4
    float clientHeight;
    // public System.Boolean allowHorizontalScroll
    // Offset: 0xA8
    bool allowHorizontalScroll;
    // public System.Boolean allowVerticalScroll
    // Offset: 0xA9
    bool allowVerticalScroll;
    // public System.Boolean needsHorizontalScrollbar
    // Offset: 0xAA
    bool needsHorizontalScrollbar;
    // public System.Boolean needsVerticalScrollbar
    // Offset: 0xAB
    bool needsVerticalScrollbar;
    // public UnityEngine.GUIStyle horizontalScrollbar
    // Offset: 0xB0
    UnityEngine::GUIStyle* horizontalScrollbar;
    // public UnityEngine.GUIStyle verticalScrollbar
    // Offset: 0xB8
    UnityEngine::GUIStyle* verticalScrollbar;
    // public System.Void .ctor()
    // Offset: 0x125ACB4
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::.ctor()
    // Base method: System.Void Object::.ctor()
    static GUIScrollGroup* New_ctor();
    // public override System.Void CalcWidth()
    // Offset: 0x125ACC0
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::CalcWidth()
    void CalcWidth();
    // public override System.Void SetHorizontal(System.Single x, System.Single width)
    // Offset: 0x125AD50
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::SetHorizontal(System.Single x, System.Single width)
    void SetHorizontal(float x, float width);
    // public override System.Void CalcHeight()
    // Offset: 0x125AE80
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::CalcHeight()
    void CalcHeight();
    // public override System.Void SetVertical(System.Single y, System.Single height)
    // Offset: 0x125AF88
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::SetVertical(System.Single y, System.Single height)
    void SetVertical(float y, float height);
  }; // UnityEngine.GUIScrollGroup
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIScrollGroup*, "UnityEngine", "GUIScrollGroup");
#pragma pack(pop)
