// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RangeAttribute
  class RangeAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Single min
    // Offset: 0x10
    float min;
    // public readonly System.Single max
    // Offset: 0x14
    float max;
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0x1406FC8
    static RangeAttribute* New_ctor(float min, float max);
  }; // UnityEngine.RangeAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeAttribute*, "UnityEngine", "RangeAttribute");
#pragma pack(pop)
