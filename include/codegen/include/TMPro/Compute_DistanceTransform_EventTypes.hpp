// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.Compute_DistanceTransform_EventTypes
  struct Compute_DistanceTransform_EventTypes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static constexpr const int Processing = 0;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static TMPro::Compute_DistanceTransform_EventTypes _get_Processing();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static void _set_Processing(TMPro::Compute_DistanceTransform_EventTypes value);
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static constexpr const int Completed = 1;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static TMPro::Compute_DistanceTransform_EventTypes _get_Completed();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static void _set_Completed(TMPro::Compute_DistanceTransform_EventTypes value);
    // Creating value type constructor for type: Compute_DistanceTransform_EventTypes
    Compute_DistanceTransform_EventTypes(int value_ = {}) : value{value_} {}
  }; // TMPro.Compute_DistanceTransform_EventTypes
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::Compute_DistanceTransform_EventTypes, "TMPro", "Compute_DistanceTransform_EventTypes");
#pragma pack(pop)
