// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVROnCompleteListener
  class OVROnCompleteListener : public UnityEngine::AndroidJavaProxy {
    public:
    // public System.Void onSuccess()
    // Offset: 0xFFFFFFFF
    void onSuccess();
    // public System.Void onFailure()
    // Offset: 0xFFFFFFFF
    void onFailure();
    // public System.Void .ctor()
    // Offset: 0xEF2EE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVROnCompleteListener* New_ctor();
  }; // OVROnCompleteListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
#pragma pack(pop)
