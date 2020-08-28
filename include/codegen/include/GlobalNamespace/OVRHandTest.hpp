// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/HandState
#include "GlobalNamespace/OVRPlugin_HandState.hpp"
// Including type: OVRPlugin/Skeleton
#include "GlobalNamespace/OVRPlugin_Skeleton.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHandTest
  class OVRHandTest : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRHandTest::BoolMonitor
    class BoolMonitor;
    // Nested type: GlobalNamespace::OVRHandTest::$$c
    class $$c;
    // public UnityEngine.UI.Text uiText
    // Offset: 0x18
    UnityEngine::UI::Text* uiText;
    // private System.Collections.Generic.List`1<OVRHandTest/BoolMonitor> monitors
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::OVRHandTest::BoolMonitor*>* monitors;
    // private System.Text.StringBuilder data
    // Offset: 0x28
    System::Text::StringBuilder* data;
    // private OVRPlugin/HandState hs_LH
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::HandState hs_LH;
    // private OVRPlugin/HandState hs_RH
    // Offset: 0xA8
    GlobalNamespace::OVRPlugin::HandState hs_RH;
    // private OVRPlugin/Skeleton skel_LH
    // Offset: 0x120
    GlobalNamespace::OVRPlugin::Skeleton skel_LH;
    // private OVRPlugin/Skeleton skel_RH
    // Offset: 0x140
    GlobalNamespace::OVRPlugin::Skeleton skel_RH;
    // private OVRPlugin/Mesh mesh_LH
    // Offset: 0x160
    GlobalNamespace::OVRPlugin::Mesh* mesh_LH;
    // private OVRPlugin/Mesh mesh_RH
    // Offset: 0x168
    GlobalNamespace::OVRPlugin::Mesh* mesh_RH;
    // private System.Boolean result_skel_LH
    // Offset: 0x170
    bool result_skel_LH;
    // private System.Boolean result_skel_RH
    // Offset: 0x171
    bool result_skel_RH;
    // private System.Boolean result_mesh_LH
    // Offset: 0x172
    bool result_mesh_LH;
    // private System.Boolean result_mesh_RH
    // Offset: 0x173
    bool result_mesh_RH;
    // Get static field: static private System.String prevConnected
    static ::Il2CppString* _get_prevConnected();
    // Set static field: static private System.String prevConnected
    static void _set_prevConnected(::Il2CppString* value);
    // Get static field: static private OVRHandTest/BoolMonitor controllers
    static GlobalNamespace::OVRHandTest::BoolMonitor* _get_controllers();
    // Set static field: static private OVRHandTest/BoolMonitor controllers
    static void _set_controllers(GlobalNamespace::OVRHandTest::BoolMonitor* value);
    // private System.Void Start()
    // Offset: 0xE6C2E0
    void Start();
    // private System.Void Update()
    // Offset: 0xE6C6E4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE6D324
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRHandTest* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xE6D3C4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRHandTest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHandTest*, "", "OVRHandTest");
#pragma pack(pop)
