// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Networking.UploadHandler
#include "UnityEngine/Networking/UploadHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UploadHandlerRaw
  class UploadHandlerRaw : public UnityEngine::Networking::UploadHandler {
    public:
    // static private System.IntPtr Create(UnityEngine.Networking.UploadHandlerRaw self, System.Byte[] data)
    // Offset: 0x192E668
    static System::IntPtr Create(UnityEngine::Networking::UploadHandlerRaw* self, ::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x192E29C
    static UploadHandlerRaw* New_ctor(::Array<uint8_t>* data);
  }; // UnityEngine.Networking.UploadHandlerRaw
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
#pragma pack(pop)
