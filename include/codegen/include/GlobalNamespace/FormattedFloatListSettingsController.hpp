// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // Nested type: GlobalNamespace::FormattedFloatListSettingsController::ValueType
    struct ValueType;
    // Autogenerated type: FormattedFloatListSettingsController/ValueType
    struct ValueType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public FormattedFloatListSettingsController/ValueType Normal
      static constexpr const int Normal = 0;
      // Get static field: static public FormattedFloatListSettingsController/ValueType Normal
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_Normal();
      // Set static field: static public FormattedFloatListSettingsController/ValueType Normal
      static void _set_Normal(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsController/ValueType Normalized
      static constexpr const int Normalized = 1;
      // Get static field: static public FormattedFloatListSettingsController/ValueType Normalized
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_Normalized();
      // Set static field: static public FormattedFloatListSettingsController/ValueType Normalized
      static void _set_Normalized(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static constexpr const int InvertedNormalized = 2;
      // Get static field: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_InvertedNormalized();
      // Set static field: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static void _set_InvertedNormalized(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // Creating value type constructor for type: ValueType
      ValueType(int value_ = {}) : value{value_} {}
    }; // FormattedFloatListSettingsController/ValueType
    // private System.Single[] _values
    // Offset: 0x38
    ::Array<float>* values;
    // private System.String _formattingString
    // Offset: 0x40
    ::Il2CppString* formattingString;
    // private FormattedFloatListSettingsController/ValueType valueType
    // Offset: 0x48
    GlobalNamespace::FormattedFloatListSettingsController::ValueType valueType;
    // private System.Action`2<FormattedFloatListSettingsController,System.Single> valueDidChangeEvent
    // Offset: 0x50
    System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* valueDidChangeEvent;
    // private System.Single _value
    // Offset: 0x58
    float value;
    // private System.Single _min
    // Offset: 0x5C
    float min;
    // private System.Single _max
    // Offset: 0x60
    float max;
    // private System.Boolean _hasValue
    // Offset: 0x64
    bool hasValue;
    // public System.Void add_valueDidChangeEvent(System.Action`2<FormattedFloatListSettingsController,System.Single> value)
    // Offset: 0xBDC310
    void add_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`2<FormattedFloatListSettingsController,System.Single> value)
    // Offset: 0xBDC3B4
    void remove_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value);
    // public System.Single get_value()
    // Offset: 0xBDC458
    float get_value();
    // public System.Void SetValue(System.Single value, System.Boolean callCallback)
    // Offset: 0xBDC460
    void SetValue(float value, bool callCallback);
    // protected override System.Boolean GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    // Offset: 0xBDC478
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xBDC5D0
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xBDC674
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xBDC760
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FormattedFloatListSettingsController* New_ctor();
  }; // FormattedFloatListSettingsController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsController*, "", "FormattedFloatListSettingsController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsController::ValueType, "", "FormattedFloatListSettingsController/ValueType");
#pragma pack(pop)
