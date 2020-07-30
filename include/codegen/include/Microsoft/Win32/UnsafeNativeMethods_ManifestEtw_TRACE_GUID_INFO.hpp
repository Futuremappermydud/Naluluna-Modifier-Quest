// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
  struct UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO : public System::ValueType {
    public:
    // public System.Int32 InstanceCount
    // Offset: 0x0
    int InstanceCount;
    // public System.Int32 Reserved
    // Offset: 0x4
    int Reserved;
    // Creating value type constructor for type: TRACE_GUID_INFO
    TRACE_GUID_INFO(int InstanceCount_ = {}, int Reserved_ = {}) : InstanceCount{InstanceCount_}, Reserved{Reserved_} {}
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO");
#pragma pack(pop)
