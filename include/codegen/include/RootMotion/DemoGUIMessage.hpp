// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.DemoGUIMessage
  class DemoGUIMessage : public UnityEngine::MonoBehaviour {
    public:
    // public System.String text
    // Offset: 0x18
    ::Il2CppString* text;
    // public UnityEngine.Color color
    // Offset: 0x20
    UnityEngine::Color color;
    // private System.Void OnGUI()
    // Offset: 0x1390964
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x1390AA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DemoGUIMessage* New_ctor();
  }; // RootMotion.DemoGUIMessage
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::DemoGUIMessage*, "RootMotion", "DemoGUIMessage");
#pragma pack(pop)
