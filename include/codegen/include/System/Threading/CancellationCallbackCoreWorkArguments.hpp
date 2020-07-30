// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.CancellationCallbackCoreWorkArguments
  struct CancellationCallbackCoreWorkArguments : public System::ValueType {
    public:
    // System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo> m_currArrayFragment
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo*>* m_currArrayFragment;
    // System.Int32 m_currArrayIndex
    // Offset: 0x8
    int m_currArrayIndex;
    // Creating value type constructor for type: CancellationCallbackCoreWorkArguments
    CancellationCallbackCoreWorkArguments(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo*>* m_currArrayFragment_ = {}, int m_currArrayIndex_ = {}) : m_currArrayFragment{m_currArrayFragment_}, m_currArrayIndex{m_currArrayIndex_} {}
    // public System.Void .ctor(System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo> currArrayFragment, System.Int32 currArrayIndex)
    // Offset: 0xA43EE8
    static CancellationCallbackCoreWorkArguments* New_ctor(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo*>* currArrayFragment, int currArrayIndex);
  }; // System.Threading.CancellationCallbackCoreWorkArguments
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
#pragma pack(pop)
