// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.NativeThrowsAttribute
  class NativeThrowsAttribute : public System::Attribute {
    public:
    // private System.Boolean <ThrowsException>k__BackingField
    // Offset: 0x10
    bool ThrowsException;
    // public System.Void set_ThrowsException(System.Boolean value)
    // Offset: 0x1959200
    void set_ThrowsException(bool value);
    // public System.Void .ctor()
    // Offset: 0x195920C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static NativeThrowsAttribute* New_ctor();
  }; // UnityEngine.Bindings.NativeThrowsAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeThrowsAttribute*, "UnityEngine.Bindings", "NativeThrowsAttribute");
#pragma pack(pop)
