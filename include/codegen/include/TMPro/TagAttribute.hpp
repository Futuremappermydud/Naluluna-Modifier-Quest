// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TagAttribute
  struct TagAttribute : public System::ValueType {
    public:
    // public System.Int32 startIndex
    // Offset: 0x0
    int startIndex;
    // public System.Int32 length
    // Offset: 0x4
    int length;
    // public System.Int32 hashCode
    // Offset: 0x8
    int hashCode;
    // Creating value type constructor for type: TagAttribute
    TagAttribute(int startIndex_ = {}, int length_ = {}, int hashCode_ = {}) : startIndex{startIndex_}, length{length_}, hashCode{hashCode_} {}
  }; // TMPro.TagAttribute
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TagAttribute, "TMPro", "TagAttribute");
#pragma pack(pop)
