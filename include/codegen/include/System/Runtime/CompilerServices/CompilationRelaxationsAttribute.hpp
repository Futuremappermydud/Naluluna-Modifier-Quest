// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:51 PM
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
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CompilationRelaxations
  struct CompilationRelaxations;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.CompilationRelaxationsAttribute
  class CompilationRelaxationsAttribute : public System::Attribute {
    public:
    // private System.Int32 m_relaxations
    // Offset: 0x10
    int m_relaxations;
    // public System.Void .ctor(System.Int32 relaxations)
    // Offset: 0x114FA68
    static CompilationRelaxationsAttribute* New_ctor(int relaxations);
    // public System.Void .ctor(System.Runtime.CompilerServices.CompilationRelaxations relaxations)
    // Offset: 0x114FA94
    static CompilationRelaxationsAttribute* New_ctor(System::Runtime::CompilerServices::CompilationRelaxations relaxations);
    // public System.Int32 get_CompilationRelaxations()
    // Offset: 0x114FAC0
    int get_CompilationRelaxations();
  }; // System.Runtime.CompilerServices.CompilationRelaxationsAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilationRelaxationsAttribute*, "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
#pragma pack(pop)
