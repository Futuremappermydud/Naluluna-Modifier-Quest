// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/OverlayShape
#include "GlobalNamespace/OVRPlugin_OverlayShape.hpp"
// Including type: OVRPlugin/LayerLayout
#include "GlobalNamespace/OVRPlugin_LayerLayout.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Including type: OVRPlugin/EyeTextureFormat
#include "GlobalNamespace/OVRPlugin_EyeTextureFormat.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/LayerDesc
  struct OVRPlugin::LayerDesc : public System::ValueType {
    public:
    // public OVRPlugin/OverlayShape Shape
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::OverlayShape Shape;
    // public OVRPlugin/LayerLayout Layout
    // Offset: 0x4
    GlobalNamespace::OVRPlugin::LayerLayout Layout;
    // public OVRPlugin/Sizei TextureSize
    // Offset: 0x8
    GlobalNamespace::OVRPlugin::Sizei TextureSize;
    // public System.Int32 MipLevels
    // Offset: 0x10
    int MipLevels;
    // public System.Int32 SampleCount
    // Offset: 0x14
    int SampleCount;
    // public OVRPlugin/EyeTextureFormat Format
    // Offset: 0x18
    GlobalNamespace::OVRPlugin::EyeTextureFormat Format;
    // public System.Int32 LayerFlags
    // Offset: 0x1C
    int LayerFlags;
    // public OVRPlugin/Fovf[] Fov
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Fovf>* Fov;
    // public OVRPlugin/Rectf[] VisibleRect
    // Offset: 0x28
    ::Array<GlobalNamespace::OVRPlugin::Rectf>* VisibleRect;
    // public OVRPlugin/Sizei MaxViewportSize
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::Sizei MaxViewportSize;
    // private OVRPlugin/EyeTextureFormat DepthFormat
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::EyeTextureFormat DepthFormat;
    // Creating value type constructor for type: LayerDesc
    LayerDesc(GlobalNamespace::OVRPlugin::OverlayShape Shape_ = {}, GlobalNamespace::OVRPlugin::LayerLayout Layout_ = {}, GlobalNamespace::OVRPlugin::Sizei TextureSize_ = {}, int MipLevels_ = {}, int SampleCount_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat Format_ = {}, int LayerFlags_ = {}, ::Array<GlobalNamespace::OVRPlugin::Fovf>* Fov_ = {}, ::Array<GlobalNamespace::OVRPlugin::Rectf>* VisibleRect_ = {}, GlobalNamespace::OVRPlugin::Sizei MaxViewportSize_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat DepthFormat_ = {}) : Shape{Shape_}, Layout{Layout_}, TextureSize{TextureSize_}, MipLevels{MipLevels_}, SampleCount{SampleCount_}, Format{Format_}, LayerFlags{LayerFlags_}, Fov{Fov_}, VisibleRect{VisibleRect_}, MaxViewportSize{MaxViewportSize_}, DepthFormat{DepthFormat_} {}
    // public override System.String ToString()
    // Offset: 0xA358EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/LayerDesc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::LayerDesc, "", "OVRPlugin/LayerDesc");
#pragma pack(pop)
