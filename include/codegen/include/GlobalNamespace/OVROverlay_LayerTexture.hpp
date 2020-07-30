// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVROverlay
#include "GlobalNamespace/OVROverlay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVROverlay/LayerTexture
  struct OVROverlay::LayerTexture : public System::ValueType {
    public:
    // public UnityEngine.Texture appTexture
    // Offset: 0x0
    UnityEngine::Texture* appTexture;
    // public System.IntPtr appTexturePtr
    // Offset: 0x8
    System::IntPtr appTexturePtr;
    // public UnityEngine.Texture[] swapChain
    // Offset: 0x10
    ::Array<UnityEngine::Texture*>* swapChain;
    // public System.IntPtr[] swapChainPtr
    // Offset: 0x18
    ::Array<System::IntPtr>* swapChainPtr;
    // Creating value type constructor for type: LayerTexture
    LayerTexture(UnityEngine::Texture* appTexture_ = {}, System::IntPtr appTexturePtr_ = {}, ::Array<UnityEngine::Texture*>* swapChain_ = {}, ::Array<System::IntPtr>* swapChainPtr_ = {}) : appTexture{appTexture_}, appTexturePtr{appTexturePtr_}, swapChain{swapChain_}, swapChainPtr{swapChainPtr_} {}
  }; // OVROverlay/LayerTexture
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::LayerTexture, "", "OVROverlay/LayerTexture");
#pragma pack(pop)
