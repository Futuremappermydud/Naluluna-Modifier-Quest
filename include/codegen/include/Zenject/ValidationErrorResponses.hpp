// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationErrorResponses
  struct ValidationErrorResponses : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Zenject.ValidationErrorResponses Log
    static constexpr const int Log = 0;
    // Get static field: static public Zenject.ValidationErrorResponses Log
    static Zenject::ValidationErrorResponses _get_Log();
    // Set static field: static public Zenject.ValidationErrorResponses Log
    static void _set_Log(Zenject::ValidationErrorResponses value);
    // static field const value: static public Zenject.ValidationErrorResponses Throw
    static constexpr const int Throw = 1;
    // Get static field: static public Zenject.ValidationErrorResponses Throw
    static Zenject::ValidationErrorResponses _get_Throw();
    // Set static field: static public Zenject.ValidationErrorResponses Throw
    static void _set_Throw(Zenject::ValidationErrorResponses value);
    // Creating value type constructor for type: ValidationErrorResponses
    ValidationErrorResponses(int value_ = {}) : value{value_} {}
  }; // Zenject.ValidationErrorResponses
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationErrorResponses, "Zenject", "ValidationErrorResponses");
#pragma pack(pop)
