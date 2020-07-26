// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:58 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.LayerMaskExtensions
  class LayerMaskExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean Contains(UnityEngine.LayerMask mask, System.Int32 layer)
    // Offset: 0x122BECC
    static bool Contains(UnityEngine::LayerMask mask, int layer);
    // static public UnityEngine.LayerMask Create(System.String[] layerNames)
    // Offset: 0x122BF24
    static UnityEngine::LayerMask Create(::Array<::Il2CppString*>* layerNames);
    // static public UnityEngine.LayerMask Create(System.Int32[] layerNumbers)
    // Offset: 0x122BFF0
    static UnityEngine::LayerMask Create(::Array<int>* layerNumbers);
    // static public UnityEngine.LayerMask NamesToMask(System.String[] layerNames)
    // Offset: 0x122BF3C
    static UnityEngine::LayerMask NamesToMask(::Array<::Il2CppString*>* layerNames);
    // static public UnityEngine.LayerMask LayerNumbersToMask(System.Int32[] layerNumbers)
    // Offset: 0x122C008
    static UnityEngine::LayerMask LayerNumbersToMask(::Array<int>* layerNumbers);
    // static public UnityEngine.LayerMask Inverse(UnityEngine.LayerMask original)
    // Offset: 0x122C0AC
    static UnityEngine::LayerMask Inverse(UnityEngine::LayerMask original);
    // static public UnityEngine.LayerMask AddToMask(UnityEngine.LayerMask original, System.String[] layerNames)
    // Offset: 0x122C0D8
    static UnityEngine::LayerMask AddToMask(UnityEngine::LayerMask original, ::Array<::Il2CppString*>* layerNames);
    // static public UnityEngine.LayerMask RemoveFromMask(UnityEngine.LayerMask original, System.String[] layerNames)
    // Offset: 0x122C128
    static UnityEngine::LayerMask RemoveFromMask(UnityEngine::LayerMask original, ::Array<::Il2CppString*>* layerNames);
    // static public System.String[] MaskToNames(UnityEngine.LayerMask original)
    // Offset: 0x122C194
    static ::Array<::Il2CppString*>* MaskToNames(UnityEngine::LayerMask original);
    // static public System.Int32[] MaskToNumbers(UnityEngine.LayerMask original)
    // Offset: 0x122C288
    static ::Array<int>* MaskToNumbers(UnityEngine::LayerMask original);
    // static public System.String MaskToString(UnityEngine.LayerMask original)
    // Offset: 0x122C360
    static ::Il2CppString* MaskToString(UnityEngine::LayerMask original);
    // static public System.String MaskToString(UnityEngine.LayerMask original, System.String delimiter)
    // Offset: 0x122C3C0
    static ::Il2CppString* MaskToString(UnityEngine::LayerMask original, ::Il2CppString* delimiter);
  }; // RootMotion.LayerMaskExtensions
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::LayerMaskExtensions*, "RootMotion", "LayerMaskExtensions");
#pragma pack(pop)
