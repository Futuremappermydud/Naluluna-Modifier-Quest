// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
  class Lightmapping : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate
    class RequestLightsDelegate;
    // Nested type: UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c
    class $$c;
    // Get static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_DefaultDelegate
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_DefaultDelegate();
    // Set static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_DefaultDelegate
    static void _set_s_DefaultDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // Get static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_RequestLightsDelegate
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_RequestLightsDelegate();
    // Set static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_RequestLightsDelegate
    static void _set_s_RequestLightsDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // static public System.Void SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate del)
    // Offset: 0x12F5E40
    static void SetDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* del);
    // static public UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate GetDelegate()
    // Offset: 0x12F5ED4
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* GetDelegate();
    // static public System.Void ResetDelegate()
    // Offset: 0x12F5F3C
    static void ResetDelegate();
    // static System.Void RequestLights(UnityEngine.Light[] lights, System.IntPtr outLightsPtr, System.Int32 outLightsCount)
    // Offset: 0x12F5FA8
    static void RequestLights(::Array<UnityEngine::Light*>* lights, System::IntPtr outLightsPtr, int outLightsCount);
    // static private System.Void .cctor()
    // Offset: 0x12F64A4
    static void _cctor();
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
#pragma pack(pop)
