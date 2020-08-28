// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderVariantsSO
  class ShaderVariantsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::ShaderVariantsSO::ShaderVariant
    class ShaderVariant;
    // private ShaderVariantsSO/ShaderVariant[] _shaderVariants
    // Offset: 0x18
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* shaderVariants;
    // public ShaderVariantsSO/ShaderVariant[] get_shaderVariants()
    // Offset: 0x19156F8
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* get_shaderVariants();
    // public System.Void Init(ShaderVariantsSO/ShaderVariant[] shaderVariants)
    // Offset: 0x1915700
    void Init(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant*>* shaderVariants);
    // public System.Void .ctor()
    // Offset: 0x1915708
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShaderVariantsSO* New_ctor();
  }; // ShaderVariantsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO*, "", "ShaderVariantsSO");
#pragma pack(pop)
