// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.InternalEncodingDataItem
  struct InternalEncodingDataItem : public System::ValueType {
    public:
    // System.String webName
    // Offset: 0x0
    ::Il2CppString* webName;
    // System.UInt16 codePage
    // Offset: 0x8
    uint16_t codePage;
    // Creating value type constructor for type: InternalEncodingDataItem
    InternalEncodingDataItem(::Il2CppString* webName_ = {}, uint16_t codePage_ = {}) : webName{webName_}, codePage{codePage_} {}
  }; // System.Globalization.InternalEncodingDataItem
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::InternalEncodingDataItem, "System.Globalization", "InternalEncodingDataItem");
#pragma pack(pop)
