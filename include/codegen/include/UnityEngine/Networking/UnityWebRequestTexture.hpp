// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
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
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestTexture
  class UnityWebRequestTexture : public ::Il2CppObject {
    public:
    // static public UnityEngine.Networking.UnityWebRequest GetTexture(System.String uri)
    // Offset: 0x1966DE8
    static UnityEngine::Networking::UnityWebRequest* GetTexture(::Il2CppString* uri);
    // static public UnityEngine.Networking.UnityWebRequest GetTexture(System.String uri, System.Boolean nonReadable)
    // Offset: 0x1966DF0
    static UnityEngine::Networking::UnityWebRequest* GetTexture(::Il2CppString* uri, bool nonReadable);
  }; // UnityEngine.Networking.UnityWebRequestTexture
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestTexture*, "UnityEngine.Networking", "UnityWebRequestTexture");
#pragma pack(pop)
