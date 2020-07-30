// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.ModifierSpec
#include "System/ModifierSpec.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ArraySpec
  class ArraySpec : public ::Il2CppObject, public System::ModifierSpec {
    public:
    // private System.Int32 dimensions
    // Offset: 0x10
    int dimensions;
    // private System.Boolean bound
    // Offset: 0x14
    bool bound;
    // System.Void .ctor(System.Int32 dimensions, System.Boolean bound)
    // Offset: 0x13145E8
    static ArraySpec* New_ctor(int dimensions, bool bound);
    // public System.Type Resolve(System.Type type)
    // Offset: 0x1314628
    // Implemented from: System.ModifierSpec
    // Base method: System.Type ModifierSpec::Resolve(System.Type type)
    System::Type* Resolve(System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0x131469C
    // Implemented from: System.ModifierSpec
    // Base method: System.Text.StringBuilder ModifierSpec::Append(System.Text.StringBuilder sb)
    System::Text::StringBuilder* Append(System::Text::StringBuilder* sb);
    // public override System.String ToString()
    // Offset: 0x1314750
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.ArraySpec
}
DEFINE_IL2CPP_ARG_TYPE(System::ArraySpec*, "System", "ArraySpec");
#pragma pack(pop)
