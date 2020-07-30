// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TubeBloomPrePassLightWithId
  class TubeBloomPrePassLightWithId : public GlobalNamespace::LightWithId {
    public:
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // public UnityEngine.Color get_color()
    // Offset: 0x18187EC
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x181880C
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1818824
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TubeBloomPrePassLightWithId* New_ctor();
  }; // TubeBloomPrePassLightWithId
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
#pragma pack(pop)
