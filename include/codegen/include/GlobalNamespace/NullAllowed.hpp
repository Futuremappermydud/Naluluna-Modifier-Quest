// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Context because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NullAllowed
  class NullAllowed : public UnityEngine::PropertyAttribute {
    public:
    // Nested type: GlobalNamespace::NullAllowed::Context
    struct Context;
    // Autogenerated type: NullAllowed/Context
    struct Context : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public NullAllowed/Context Everywhere
      static constexpr const int Everywhere = 0;
      // Get static field: static public NullAllowed/Context Everywhere
      static GlobalNamespace::NullAllowed::Context _get_Everywhere();
      // Set static field: static public NullAllowed/Context Everywhere
      static void _set_Everywhere(GlobalNamespace::NullAllowed::Context value);
      // static field const value: static public NullAllowed/Context Prefab
      static constexpr const int Prefab = 1;
      // Get static field: static public NullAllowed/Context Prefab
      static GlobalNamespace::NullAllowed::Context _get_Prefab();
      // Set static field: static public NullAllowed/Context Prefab
      static void _set_Prefab(GlobalNamespace::NullAllowed::Context value);
      // Creating value type constructor for type: Context
      Context(int value_ = {}) : value{value_} {}
    }; // NullAllowed/Context
    // private NullAllowed/Context _context
    // Offset: 0x10
    GlobalNamespace::NullAllowed::Context context;
    // public NullAllowed/Context get_context()
    // Offset: 0xCB8DA8
    GlobalNamespace::NullAllowed::Context get_context();
    // public System.Void .ctor(NullAllowed/Context context)
    // Offset: 0xCB8DD8
    static NullAllowed* New_ctor(GlobalNamespace::NullAllowed::Context context);
    // public System.Void .ctor()
    // Offset: 0xCB8DB0
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static NullAllowed* New_ctor();
  }; // NullAllowed
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NullAllowed*, "", "NullAllowed");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NullAllowed::Context, "", "NullAllowed/Context");
#pragma pack(pop)
