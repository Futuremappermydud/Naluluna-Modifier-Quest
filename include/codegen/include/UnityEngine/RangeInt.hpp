// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RangeInt
  struct RangeInt : public System::ValueType {
    public:
    // public System.Int32 start
    // Offset: 0x0
    int start;
    // public System.Int32 length
    // Offset: 0x4
    int length;
    // Creating value type constructor for type: RangeInt
    RangeInt(int start_ = {}, int length_ = {}) : start{start_}, length{length_} {}
    // public System.Int32 get_end()
    // Offset: 0xA4551C
    int get_end();
    // public System.Void .ctor(System.Int32 start, System.Int32 length)
    // Offset: 0xA45528
    static RangeInt* New_ctor(int start, int length);
  }; // UnityEngine.RangeInt
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeInt, "UnityEngine", "RangeInt");
#pragma pack(pop)
